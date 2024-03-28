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


void Widget::on_pushButton_clicked()
{
    QDateTime curDateTime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->editDateTime->setText(curDateTime.toString("hh:mm:ss"));

    ui->dateEdit->setDate(curDateTime.date());
    ui->editDate->setText(curDateTime.toString("yyyy-MM-dd"));

    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->editDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));

}


void Widget::on_btnQDebugTime_clicked()
{
    QTime TM1(13, 24, 5);
    QString str = TM1.toString("HH:mm:ss");
    qDebug("Original time = %s", str.toLocal8Bit().data());
    QTime TM2 = TM1.addSecs(150);
    str = TM2.toString("HH:mm:ss");
    qDebug("150s later, time=%s", str.toLocal8Bit().data());

    TM2 = QTime::currentTime();
    str = TM2.toString("HH::mm:ss zzz");
    qDebug("Current time=%s", str.toLocal8Bit().data());
    qDebug("Minute=%d", TM2.minute());
    qDebug("Second=%d", TM2.second());
    qDebug("MSecond=%d", TM2.msec());
}


void Widget::on_btnQDebugDate_clicked()
{
    QDate DT1(2024,2,10);
    QString str= DT1.toString("yyyy-MM-dd");
    qDebug("DT1=%s",str.toLocal8Bit().data());
    QDate DT2;
    DT2.setDate(2024,2,20);
    str= DT2.toString("yyyy-MM-dd");
    qDebug("DT2=%s",str.toLocal8Bit().data());
    qDebug("Days between DT2 and DT1= %d",DT2.daysTo(DT1));//DT2与DT1之间相熬的天数
    DT2= QDate::currentDate();
    str= DT2.toString("yyyy-MM-dd");
    qDebug("Current date=%s",str.toLocal8Bit().data());
    qDebug("Year=%d", DT2.year());
    qDebug("Month= %d",DT2.month());qDebug("Day= %d",DT2.day());
    qDebug("Day of week= %d",DT2.dayOfWeek()); //1表示星期一，7表示星期天
}


void Widget::on_btnQDebugDataTIme_clicked()
{
    QDateTime DT1= QDateTime::currentDateTime();//系统当前日期时间
    QString str= DT1.toString("yyyy-MM-dd hh:mm:ss");
    qDebug("DT1=%s",str.toLocal8Bit().data());

    QDate dt= DT1.date();//日期部分
    str= dt.toString("yyyy-MM-dd");
    qDebug("DT1.date()=%s",str.toLocal8Bit().data());

    QTime tm= DT1.time();//时间部分
    str=tm.toString("hh:mm:ss zz");
    qDebug("DT1.time()=%s",str.toLocal8Bit().data());

    qint64 MS= DT1.toSecsSinceEpoch();//转换为秒数
    qDebug("DT1.tosecssinceEpoch()=%lld",MS);

    MS += 120;
    DT1.setSecsSinceEpoch(MS);//加120秒以后
    str= DT1.toString("yyyy-MM-dd hh:mm:ss");
    qDebug("DT1+120s= %s",str.toLocal8Bit().data());
}


void Widget::on_btnSetTime_clicked()
{
    QString str = ui->editTime->text();
    str = str.trimmed();
    if(!str.isEmpty()){
        QTime tm = QTime::fromString(str, "hh:mm:ss");
        ui->timeEdit->setTime(tm);
    }
}


void Widget::on_btnSetDate_clicked()
{
    QString str = ui->editDate->text();
    str = str.trimmed();
    if(!str.isEmpty()){
        QDate dt = QDate::fromString(str, "yyyy-MM-dd");
        ui->dateEdit->setDate(dt);
    }
}


void Widget::on_calendarWidget_selectionChanged()
{
    QString str = ui->calendarWidget->selectedDate().toString("yyyy年M月d日");
    ui->editCalendar->setText(str);

}

