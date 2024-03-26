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


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnInitItems_clicked()
{
    QIcon icon;
    icon.addFile(":/icons/icons/UNIT.ICO");
    ui->combItems->clear();
    for(int i = 0; i < 20; ++i)
        ui->combItems->addItem(icon, QString("Item%1").arg(i));
}




void Widget::on_chkEditabel_clicked(bool checked)
{
    ui->combItems->setEditable(checked);
}


void Widget::on_btnClear_2_clicked()
{
    ui->combItems->clear();
}


void Widget::on_btnInitCities_clicked()
{
    ui->comboCities->clear();
    QMap<QString, int> City_zone;
    City_zone.insert("北京", 10);
    City_zone.insert("上海", 20);
    City_zone.insert("广州", 50);
    City_zone.insert("南宁", 90);
    foreach (const QString &str, City_zone.keys())
        ui->comboCities->addItem(str, City_zone.value(str));
}


void Widget::on_combItems_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}


void Widget::on_comboCities_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    QString str = ui->comboCities->currentText() + ui->comboCities->currentData().toString();
    ui->plainTextEdit->appendPlainText(str);
}

