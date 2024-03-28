#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringListModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_strList<<"北京"<<"上海"<<"南昌"<<"南京"<<"成都";
    m_model = new QStringListModel(this);
    m_model->setStringList(m_strList);
    ui->listView->setModel(m_model);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked |
                                  QAbstractItemView::SelectedClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnIniList_clicked()
{
    m_model->setStringList(m_strList);
}


void MainWindow::on_btnListClear_clicked()
{
    m_model->removeRows(0, m_model->rowCount());
}


void MainWindow::on_chkEditable_clicked(bool checked)
{
    if(checked)
        ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked |
                                      QAbstractItemView::SelectedClicked);
    else
        ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


void MainWindow::on_btnListAppend_clicked()
{
    m_model->insertRow(m_model->rowCount());
    QModelIndex index = m_model->index(m_model->rowCount() - 1);
    m_model->setData(index, "new item", Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_btnListInsert_clicked()
{

    QModelIndex index = ui->listView->currentIndex();
    m_model->insertRow(index.row());
    m_model->setData(index, "new item", Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_btnListMoveUp_clicked()
{
    QModelIndex index;
    int curRow = ui->listView->currentIndex().row();
    m_model->moveRow(index,curRow,index,curRow-1);
}


void MainWindow::on_btnListMoveDown_clicked()
{
    QModelIndex index;
    int curRow = ui->listView->currentIndex().row();
    m_model->moveRow(index,curRow,index,curRow+2);
}


void MainWindow::on_btnListSort_clicked(bool checked)
{
    if(checked)
        m_model->sort(0, Qt::AscendingOrder);
    else
        m_model->sort(0, Qt::DescendingOrder);
}


void MainWindow::on_btnTextClear_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_btnTextImport_clicked()
{
    ui->plainTextEdit->clear();
    QStringList tmpList = m_model->stringList();
    for(int i = 0; i < tmpList.size(); ++i)
    {
        ui->plainTextEdit->appendPlainText(tmpList.at(i));
    }
}


void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString str = QString::asprintf("模型索引：row = %d, column = %d", index.row(), index.column());
    str += m_model->data(index, Qt::DisplayRole).toString();
    ui->statusbar->showMessage(str);
}

