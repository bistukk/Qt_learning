#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
void MainWindow::openTable()
{
    tabModel = new QSqlRelationalTableModel(this, DB);
    tabModel->setTable("studInfo");
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tabModel->setSort(tabModel->fieldIndex("studID"), Qt::AscendingOrder);

    selModel = new QItemSelectionModel(tabModel, this);
    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(selModel);
    tabModel->select();
    tabModel->setHeaderData(tabModel->fieldIndex("studID"), Qt::Horizontal,"学号");
    tabModel->setHeaderData(tabModel->fieldIndex("name"), Qt::Horizontal,"姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("gender"), Qt::Horizontal,"性别");
    tabModel->setHeaderData(tabModel->fieldIndex("departID"), Qt::Horizontal,"学院");
    tabModel->setHeaderData(tabModel->fieldIndex("majorID"), Qt::Horizontal,"专业");

    tabModel->setRelation(tabModel->fieldIndex("departID"),
                          QSqlRelation("departments", "departID", "department"));
    tabModel->setRelation(tabModel->fieldIndex("majorID"),
                          QSqlRelation("majors", "majorID", "major"));

    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    tabModel->select();

    ui->actOpenDB->setEnabled(false);
    ui->actRecAppend->setEnabled(true);
    ui->actRecInsert->setEnabled(true);
    ui->actRecDelete->setEnabled(true);
    ui->actFields->setEnabled(true);

    connect(selModel, &QItemSelectionModel::currentChanged, this,
            &MainWindow::do_currentChanged);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tableView);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actOpenDB_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择数据库", "",
                                "SQLite数据库(*.db3)");
    if(aFile.isEmpty())
        return;

    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);
    if(DB.open())
        openTable();
    else
        QMessageBox::warning(this, "error", "打开数据库失败");

}


void MainWindow::on_actRecAppend_triggered()
{
    tabModel->insertRow(tabModel->rowCount());
    selModel->clearSelection();
    QModelIndex curIndex = tabModel->index(tabModel->rowCount()-1, 1);
    selModel->setCurrentIndex(curIndex, QItemSelectionModel::Select);
}


void MainWindow::on_actRecInsert_triggered()
{
    QModelIndex curIndex = ui->tableView->currentIndex();
    tabModel->insertRow(curIndex.row());
    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex, QItemSelectionModel::Select);

}


void MainWindow::on_actRecDelete_triggered()
{
    tabModel->removeRow(selModel->currentIndex().row());
    tabModel->submitAll();
}


void MainWindow::on_actSubmit_triggered()
{
    bool res = tabModel->submitAll();
    if(!res)
        QMessageBox::information(this, "info", "数据提交失败!\n"
                                 +tabModel->lastError().text());
    else{
        ui->actSubmit->setEnabled(false);
        ui->actRevert->setEnabled(false);
    }
}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->actSubmit->setEnabled(tabModel->isDirty());
    ui->actRevert->setEnabled(tabModel->isDirty());
}


void MainWindow::on_actRevert_triggered()
{
    tabModel->revertAll();
    ui->actSubmit->setEnabled(false);
    ui->actRevert->setEnabled(false);
}


void MainWindow::on_actFields_triggered()
{
    QSqlRecord emptyRec = tabModel->record();
    QString str;
    for(int i = 0; i < emptyRec.count(); ++i)
    {
        str += emptyRec.fieldName(i) + "\n";
    }
    QMessageBox::information(this, "所有字段名称", str);
}

