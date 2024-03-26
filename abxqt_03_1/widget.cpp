#include "widget.h"
#include "ui_widget.h"
#include "tperson.h"
#include "QMetaProperty"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    boy = new TPerson("小明", this);
    boy->setProperty("sex", "boy");
    girl = new TPerson("小丽", this);
    girl->setProperty("sex", "girl");

    girl->setAge(20);
    ui->spinBoy->setProperty("isBoy", true);
    ui->spinGirl->setProperty("isBoy", false);

    connect(boy, SIGNAL(ageChanged(int)), ui->spinBoy, SLOT(setValue(int)));
    connect(girl, SIGNAL(ageChanged(int)), ui->spinGirl, SLOT(setValue(int)));
    connect(boy, SIGNAL(ageChanged(int)), this, SLOT(do_ageChanged(int)));
    connect(girl, SIGNAL(ageChanged(int)), this, SLOT(do_ageChanged(int)));
    connect(ui->spinBoy, SIGNAL(valueChanged(int)), this, SLOT(do_spinChanged(int)));
    connect(ui->spinGirl, SIGNAL(valueChanged(int)), this, SLOT(do_spinChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_ageChanged(int value)
{
    //Q_UNUSED(value);
    TPerson *person = qobject_cast<TPerson*>(sender());
    QString str = QString("%1, %2, 年龄 = %3")
            .arg(person->property("name").toString())
            .arg(person->property("sex").toString())
            .arg(value);
    ui->plainTextEdit->appendPlainText(str);
}

void Widget::do_spinChanged(int arg1)
{
    Q_UNUSED(arg1);
    QSpinBox *spinBox = qobject_cast<QSpinBox*>(sender());
    if(spinBox->property("isBoy").toBool())
        boy->setAge(arg1);
    else
        girl->setAge(arg1);
}


void Widget::on_btnBoyInc_clicked()
{
    boy->incAge();
}


void Widget::on_btnGirlInc_clicked()
{
    girl->incAge();
}


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnClassInfo_clicked()
{
    const QMetaObject *meta = boy->metaObject();
    ui->plainTextEdit->appendPlainText(QString("类名称：%1\n").arg(meta->className()));
    ui->plainTextEdit->appendPlainText("属性：");
    for(int i = meta -> propertyOffset(); i < meta->propertyCount(); i++)
    {
        const char* propName = meta->property(i).name();
        QString propValue = boy->property(propName).toString();
        ui->plainTextEdit->appendPlainText(QString("属性名称 = %1, 属性值 = %2").arg(propName).arg(propValue));
    }

    ui->plainTextEdit->appendPlainText("\n类信息(classInfo)：");
    for(int i = meta->classInfoOffset(); i < meta->classInfoCount(); i++)
    {
        QMetaClassInfo classInfo = meta->classInfo(i);
        ui->plainTextEdit->appendPlainText(
            QString("Name = %1, Value = %2").arg(classInfo.name()).arg(classInfo.value()));
    }
}

