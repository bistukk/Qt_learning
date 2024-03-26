#include "tdialoglocate.h"
#include "ui_tdialoglocate.h"
#include <QCloseEvent>
void TDialogLocate::setSpinRange(int rowCount, int colCount)
{
    ui->spinBoxRow->setMaximum(rowCount - 1);
    ui->spinBoxColumn->setMaximum(colCount - 1);
}

void TDialogLocate::setSpinValue(int rowNo, int ColNo)
{
    ui->spinBoxRow->setValue(rowNo);
    ui->spinBoxColumn->setValue(ColNo);
}

TDialogLocate::TDialogLocate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogLocate)
{
    ui->setupUi(this);
}

TDialogLocate::~TDialogLocate()
{
    delete ui;
}

void TDialogLocate::on_btnSetText_clicked()
{
    QString text = ui->editCaption->text();
    int row = ui->spinBoxRow->value();
    int column = ui->spinBoxColumn->value();

    if(ui->chkBoxRow->isChecked())
        ui->spinBoxRow->setValue(ui->spinBoxRow->value() + 1);

    if(ui->chkBoxColumn->isChecked())
        ui->spinBoxColumn->setValue(ui->spinBoxColumn->value() + 1);

    emit changeCellText(row, column, text);
}

void TDialogLocate::closeEvent(QCloseEvent *event)
{
    event->accept();
    emit changeActionEnable(true);
}

void TDialogLocate::showEvent(QShowEvent *event)
{
    event->accept();
    emit changeActionEnable(false);
}
