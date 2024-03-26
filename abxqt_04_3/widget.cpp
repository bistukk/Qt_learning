#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnCal_clicked()
{
    int num = ui->editNum->text().toInt();
    float price = ui->editPrice->text().toFloat();

    float total = price * num;
    QString str = QString::number(total, 'f', 2);
    //str = str.setNum(total, 'f', 2);
    ui->editTotal->setText(str);
}


void Widget::on_btnDebug_clicked()
{
    qDebug("PI=%f", 3.1415926);
    QString str = QString::number(3.1415926, 'f', 10);
    qDebug("PI=%s", str.toLocal8Bit().data());
}





void Widget::on_btnDec_clicked()
{
    int val = ui->editDec->text().toInt();
    QString str = QString::number(val, 16);
    ui->editHex->setText(str);
    str = QString::number(val, 2);
    ui->editBin->setText(str);
}


void Widget::on_btnBin_clicked()
{
    bool ok;
    int val = ui->editBin->text().toInt(&ok, 2);
    if(!ok) return;

    QString str = QString::number(val, 16);
    ui->editHex->setText(str);
    str = QString::number(val);
    ui->editDec->setText(str);
}


void Widget::on_btnHex_clicked()
{
    bool ok;
    int val = ui->editHex->text().toInt(&ok, 16);
    if(!ok) return;

    QString str = QString::number(val);
    ui->editDec->setText(str);
    str = QString::number(val, 2);
    ui->editBin->setText(str);
}

