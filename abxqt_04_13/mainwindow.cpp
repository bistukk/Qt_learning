#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDate>
#include <QRandomGenerator>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labCellIndex = new QLabel("当前单元格:", this);
    labCellIndex->setMinimumWidth(250);

    labCellType = new QLabel("当前单元格类型", this);
    labCellType->setMinimumWidth(200);
    labStudId = new QLabel("学生ID", this);
    labStudId->setMinimumWidth(200);

    ui->statusbar->addWidget(labCellIndex);
    ui->statusbar->addWidget(labCellType);
    ui->statusbar->addWidget(labStudId);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSetHead_clicked()
{
    ui->tableWidget->clear();
    QStringList headerText;
    headerText << "姓名" << "性别" << "出生日期" << "民族" << "分数" << "是否党员";
    ui->tableWidget->setColumnCount(headerText.size());
    //ui->tableWidget->setHorizontalHeaderLabels(headerText);
    for(int i = 0; i < ui->tableWidget->columnCount(); ++i)
    {
        QTableWidgetItem *headerItem = new QTableWidgetItem(headerText.at(i));
        //headerItem->setText(headerText.at(i);
        QFont font = headerItem->font();
        font.setBold(true);
        font.setPointSize(11);
        headerItem->setForeground(QBrush(Qt::red));
        ui->tableWidget->setHorizontalHeaderItem(i, headerItem);
    }
}


void MainWindow::on_btnSetRows_clicked()
{

    ui->tableWidget->setRowCount(ui->spinRowCount->value());
}


void MainWindow::on_btnInit_clicked()
{
    ui->tableWidget->clearContents();
    QDate birth(2000, 2, 2);
    for(int i = 0; i < ui->tableWidget->rowCount(); ++i)
    {
        QString strName = QString("学生%1").arg(i);
        QString strSex = (i % 2)? "男生" : "女生";
        bool isParty = (i%2) ? false : true;
        int score = QRandomGenerator::global()->bounded(60, 100);
        createItemsARow(i, strName, strSex, birth, "汉族", isParty, score);
        birth = birth.addDays(20);
    }
}

void MainWindow::createItemsARow(int rowNo, QString name, QString sex, QDate birth, QString nation, bool isPM, int score)
{
    uint studID = 2022011047;
    //姓名
    QTableWidgetItem *item = new QTableWidgetItem(name, ctName);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    studID += rowNo;
    item->setData(Qt::UserRole, QVariant(studID));
    ui->tableWidget->setItem(rowNo, colName, item);

    //性别
    QIcon icon;
    if(sex == "男生")
        icon.addFile(":/icons/icons/boy.ico");
    else
        icon.addFile(":/icons/icons/girl.ico");

    item = new QTableWidgetItem(sex, ctSex);
    item->setIcon(icon);
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, colSex, item);
    //出生日期
    item = new QTableWidgetItem(birth.toString("yyyy-MM-dd"), ctBirth);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, colBirth, item);
    //民族
    item = new QTableWidgetItem(nation, ctNation);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, colNation, item);

    //是否党员
    item = new QTableWidgetItem("党员", ctPartyM);
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled | Qt::ItemIsUserCheckable);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    if(isPM)
        item->setCheckState(Qt::Checked);
    else
        item->setCheckState(Qt::Unchecked);
    item->setBackground(QBrush(Qt::yellow));
    ui->tableWidget->setItem(rowNo, colPartyM, item);


    //分数
    item = new QTableWidgetItem(QString::number(score), ctScore);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, colScore, item);
}


void MainWindow::on_btnInsertRow_clicked()
{
    int curRow = ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(curRow);
    createItemsARow(curRow, "新学生", "男生", QDate::fromString("2000-1-1", "yyyy-M-d"), "汉族", false, 78);
}


void MainWindow::on_btnAddRow_clicked()
{
    int curRow = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(curRow);
    createItemsARow(curRow, "新学生", "女生", QDate::fromString("2000-1-1", "yyyy-M-d"), "汉族", true, 78);
}


void MainWindow::on_btnDelteRow_clicked()
{
    int curRow = ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(curRow);
}


void MainWindow::on_btnAdjustRowHeight_clicked()
{
    ui->tableWidget->resizeRowsToContents();
}


void MainWindow::on_btnAdjustColWidth_clicked()
{
    ui->tableWidget->resizeColumnsToContents();
}


void MainWindow::on_btnReadFormToText_clicked()
{
    ui->plainTextEdit->clear();
    QTableWidgetItem* item;
    for(int i = 0; i < ui->tableWidget->rowCount(); ++i)
    {
        QString str = QString::asprintf("第%d行", i + 1);
        for(int j = 0; j < ui->tableWidget->columnCount(); ++j)
        {
            item = ui->tableWidget->item(i, j);
            str = str + item->text() + " ";
        }

        item = ui->tableWidget->item(i, colPartyM);
        if(item->checkState() == Qt::Checked)
            str += "党员";
        else
            str += "群众";
        ui->plainTextEdit->appendPlainText(str);

    }
}


void MainWindow::on_chkBoxEditable_clicked(bool checked)
{
    if(checked)
        ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked |
                                         QAbstractItemView::SelectedClicked);
    else
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


void MainWindow::on_chkBoxSeparateColor_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void MainWindow::on_chkBoxShowVerHead_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}


void MainWindow::on_chkBoxShowHorHead_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}


void MainWindow::on_rBtnSelectRow_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}


void MainWindow::on_rBtnSelectItem_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
}


void MainWindow::on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    Q_UNUSED(previousRow);
    Q_UNUSED(previousColumn);
    QTableWidgetItem *item = ui->tableWidget->item(currentRow, currentColumn);
    if(item == nullptr) return;
    labCellIndex->setText(QString::asprintf("当前单元格坐标：%d. %d", currentRow, currentColumn));
    labCellType->setText(QString::asprintf("当前单元格类型：%d", item->type()));
    item = ui->tableWidget->item(currentRow, colName);
    labStudId->setText(QString::asprintf("学生ID：%d", item->data(Qt::UserRole).toUInt()));
}

