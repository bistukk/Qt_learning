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


void Widget::on_btnAlign_Left_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignLeft);
}


void Widget::on_btnAlign_Center_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignCenter);
}


void Widget::on_btnAlign_Right_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignRight);
}


void Widget::on_btnFont_Bold_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();
    font.setBold(checked);
    ui->lineEdit->setFont(font);
}


void Widget::on_btnFont_Italic_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();
    font.setItalic(checked);
    ui->lineEdit->setFont(font);
}


void Widget::on_btnFont_Underline_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();
    font.setUnderline(checked);
    ui->lineEdit->setFont(font);
}


void Widget::on_chkReadOnly_clicked(bool checked)
{
    ui->lineEdit->setReadOnly(checked);
}


void Widget::on_chkEnabled_clicked(bool checked)
{
    ui->lineEdit->setEnabled(checked);
}


void Widget::on_chkClear_clicked(bool checked)
{
    ui->lineEdit->setClearButtonEnabled(checked);
}


void Widget::on_radioBlack_clicked()
{
    QPalette plet = ui->lineEdit->palette();
    plet.setColor(QPalette::Text, Qt::black);
    ui->lineEdit->setPalette(plet);
}


void Widget::on_radioRed_clicked()
{
    QPalette plet = ui->lineEdit->palette();
    plet.setColor(QPalette::Text, Qt::red);
    ui->lineEdit->setPalette(plet);
}


void Widget::on_radioBlue_clicked()
{
    QPalette plet = ui->lineEdit->palette();
    plet.setColor(QPalette::Text, Qt::blue);
    ui->lineEdit->setPalette(plet);
}

