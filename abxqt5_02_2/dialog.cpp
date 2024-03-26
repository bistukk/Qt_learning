#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->rBtnGreen, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    QObject::connect(ui->rBtnRed, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    QObject::connect(ui->rBtnYellow, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_checkBoxUnderline_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBoxItalic_clicked(bool checked)
{

    QFont font = ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBoxBold_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette plet = ui->plainTextEdit->palette();
    if(ui->rBtnGreen->isChecked())
        plet.setColor(QPalette::Text, Qt::green);
    else if(ui->rBtnRed->isChecked())
        plet.setColor(QPalette::Text, Qt::red);
    else if(ui->rBtnYellow->isChecked())
        plet.setColor(QPalette::Text, Qt::yellow);
    else
        plet.setColor(QPalette::Text, Qt::black);
    ui->plainTextEdit->setPalette(plet);
}

