#include "tdialogsize.h"
#include "ui_tdialogsize.h"
#include <QMessageBox>
void TDialogSize::setRowColumn(int row, int column)
{
    ui->spinBoxColumn->setValue(column);
    ui->spinBoxRow->setValue(row);
}

int TDialogSize::rowCount()
{
    return ui->spinBoxRow->value();
}

int TDialogSize::columnCount()
{
    return ui->spinBoxColumn->value();
}

TDialogSize::TDialogSize(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogSize)
{
    ui->setupUi(this);
}

TDialogSize::~TDialogSize()
{
    delete ui;
    QMessageBox::information(this, "提示", "TDialogSize被删除了!");
}
