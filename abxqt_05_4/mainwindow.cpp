#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileSystemModel>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_model = new QFileSystemModel(this);
    ui->treeView->setModel(m_model);
    ui->listView->setModel(m_model);
    ui->tableView->setModel(m_model);

    //ui->treeView->setRootIndex(m_model->index(QDir::currentPath()));
    m_model->setRootPath(QDir::currentPath());

    connect(ui->treeView, &QTreeView::clicked, ui->listView, &QListView::setRootIndex);
    connect(ui->treeView, &QTreeView::clicked, ui->tableView, &QTableView::setRootIndex);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actSetRoot_triggered()
{
    QString dir = QFileDialog::getExistingDirectory(this, "选择目录", QDir::currentPath());
    if(dir.isEmpty())
        return;
    ui->treeView->setRootIndex(m_model->index(dir));
    ui->listView->setRootIndex(m_model->index(dir));
    ui->tableView->setRootIndex(m_model->index(dir));
}


void MainWindow::on_radioShowAll_clicked()
{
    ui->groupBoxFilter->setEnabled(true);
    m_model->setFilter(QDir::AllDirs | QDir::Files | QDir::NoDotAndDotDot);
}


void MainWindow::on_radioShowDir_clicked()
{
    ui->groupBoxFilter->setEnabled(false);
    m_model->setFilter(QDir::AllDirs | QDir::NoDotAndDotDot);
}


void MainWindow::on_chkBoxEnableFilter_clicked(bool checked)
{
    ui->comboFilters->setEnabled(checked);
    ui->btnApplyFilters->setEnabled(checked);
    m_model->setNameFilterDisables(!checked);
}


void MainWindow::on_btnApplyFilters_clicked()
{
    QStringList filter = ui->comboFilters->currentText().trimmed().split(";", Qt::SkipEmptyParts);

    m_model->setNameFilters(filter);
}


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->labFileName->setText(m_model->fileName(index));
    ui->labPath->setText(m_model->filePath(index));
    ui->labFileType->setText(m_model->filePath(index));

    ui->chkIsDir->setEnabled(m_model->isDir(index));


    int sz = m_model->size(index) / 1024;
    if(sz < 1024)
        ui->labFileSize->setText(QString("%1 KB").arg(sz));
    else
        ui->labFileSize->setText(QString::asprintf("%.lf", sz / 1024.0));
}

