#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
void MainWindow::selectData()
{
    QString str = "SELECT empNo, Name, Gender, Birthday, Province, Department,"
                  " Salary FROM employee ORDER BY empNo";
    qryModel = new QSqlQueryModel(this);
    qryModel->setQuery(str);
    if(qryModel->lastError().isValid())
    {
        QMessageBox::critical(this, "错误", "数据库查询错误\n" +
                              qryModel->lastError().text());
        return;
    }

    ui->statusbar->showMessage(QString("记录条数: %1").arg(qryModel->rowCount()));

    ui->tableView->setModel(qryModel);

    selModel = new QItemSelectionModel(qryModel, this);
    ui->tableView->setSelectionModel(selModel);
    //处理表头
    QSqlRecord rec = qryModel->record();
    qryModel->setHeaderData(rec.indexOf("empNo"), Qt::Horizontal, "工号");
    qryModel->setHeaderData(rec.indexOf("Name"), Qt::Horizontal, "姓名");
    qryModel->setHeaderData(rec.indexOf("Gender"), Qt::Horizontal, "性别");
    qryModel->setHeaderData(rec.indexOf("Birthday"), Qt::Horizontal, "出生日期");
    qryModel->setHeaderData(rec.indexOf("Province"), Qt::Horizontal, "省份");
    qryModel->setHeaderData(rec.indexOf("Department"), Qt::Horizontal, "部门");
    qryModel->setHeaderData(rec.indexOf("Salary"), Qt::Horizontal, "工资");

    //映射
    dataMapper = new QDataWidgetMapper(this);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    dataMapper->setModel(qryModel);

    dataMapper->addMapping(ui->dbSpinEmpNo, rec.indexOf("empNo"));
    dataMapper->addMapping(ui->dbEditName, rec.indexOf("Name"));
    dataMapper->addMapping(ui->dbComboSex, rec.indexOf("Gender"));
    dataMapper->addMapping(ui->dbEditBirth, rec.indexOf("Birthday"));
    dataMapper->addMapping(ui->dbComboProvince, rec.indexOf("Province"));
    dataMapper->addMapping(ui->dbComboDep, rec.indexOf("Department"));
    dataMapper->addMapping(ui->dbSpinSalary, rec.indexOf("Salary"));

    dataMapper->toFirst();
    ui->actOpenDB->setEnabled(false);

    connect(selModel, &QItemSelectionModel::currentRowChanged,
            this, &MainWindow::on_currentRowChanged);
}

void MainWindow::refreshTableView()
{
    int index = dataMapper->currentIndex();
    QModelIndex curIndex = qryModel->index(index, 1);
    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex, QItemSelectionModel::Select);

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actOpenDB_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this, "选择文件", "",
                                                 "SQLite数据库(*.db3)");
    if(aFile.isEmpty())
        return;

    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);
    if(DB.open())
        selectData();
    else
        QMessageBox::warning(this, "error", "打开数据库失败");
}

void MainWindow::on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    if(!current.isValid())
    {
        ui->dbLabPhoto->clear();
        ui->dbEditMemo->clear();
        return;
    }

    dataMapper->setCurrentModelIndex(current);
    bool first = (current.row() == 0);
    bool last = (current.row() == qryModel->rowCount()-1);
    ui->actRecFirst->setEnabled(!first);
    ui->actRecPrevious->setEnabled(!first);
    ui->actRecNext->setEnabled(!last);
    ui->actRecLast->setEnabled(!last);

    //获取photo和memo(没有放入qryModel)
    int curRecNo = selModel->currentIndex().row();
    QSqlRecord curRec = qryModel->record(curRecNo);
    int empNo = curRec.value("EmpNo").toInt();//主键

    QSqlQuery query;
    query.prepare("select EmpNo, Memo, Photo from employee where EmpNo= :ID");
    query.bindValue(":ID", empNo);
    query.exec();
    query.first();

    QVariant va = query.value("photo");
    if(!va.isValid())
        ui->dbLabPhoto->clear();
    else
    {
        QByteArray data = va.toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->dbLabPhoto->setPixmap(pic.scaledToWidth(ui->dbLabPhoto->size().width()));
    }

    QVariant va2 = query.value("Memo");
    ui->dbEditMemo->setPlainText(va2.toString());
}


void MainWindow::on_actRecFirst_triggered()
{
    dataMapper->toFirst();
    refreshTableView();
}


void MainWindow::on_actRecPrevious_triggered()
{
    dataMapper->toPrevious();
    refreshTableView();
}



void MainWindow::on_actRecNext_triggered()
{
    dataMapper->toNext();
    refreshTableView();
}


void MainWindow::on_actRecLast_triggered()
{
    dataMapper->toLast();
    refreshTableView();
}

