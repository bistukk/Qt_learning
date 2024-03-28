#include "widget.h"
#include "ui_widget.h"
#include <QPainter>//画家类
#include <QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //点击移动按钮，移动图片
    connect(ui->pushButton, &QPushButton::clicked, [=](){
        //如果要手动调用绘图事件 用udate更新
        posX += 20;
        update();
    });

    QTimer * timer = new QTimer(this);
    //启动定时器
    timer->start(500);
    connect(timer, &QTimer::timeout, [=](){
        posX += 20;
        update();
    });

    //点击暂停按钮 实现停止定时器
    connect(ui->btn, &QPushButton::clicked, [=](){
        timer->stop();
    });
}

void Widget::paintEvent(QPaintEvent *)
{
//    //实例化画家对象 this指定的是绘图设备
//    QPainter painter(this);

//    //设置画笔
//    QPen pen(QColor(255, 0, 0));
//    //设置画笔宽度
//    pen.setWidth(3);
//    //设置画笔风格
//    pen.setStyle(Qt::DotLine);
//    //让画家 使用这个笔
//    painter.setPen(pen);

//    //设置画刷
//    QBrush brush(Qt::cyan);
//    //设置画刷风格
//    brush.setStyle(Qt::Dense7Pattern);
//    //让画家使用画刷
//    painter.setBrush(brush);

//    //画线
//    painter.drawLine(QPoint(0, 0), QPoint(100, 100));

//    //画圆
//    painter.drawEllipse(QPoint(100, 100), 50, 50);

//    //画矩形
//    painter.drawRect(QRect(20, 20, 50, 50));

//    //画文字
//    painter.drawText(QRect(10, 200, 150, 50), "好好学习，天天向上");




    ////////////////////////////////高级设置/////////////////////////////

     //QPainter painter(this);
//    painter.drawEllipse(QPoint(100, 50), 50 ,50);
//    //设置抗锯齿能力  效率较低
//    painter.setRenderHint(QPainter::Antialiasing);
//    painter.drawEllipse(QPoint(200, 50), 50 ,50);

    //画矩形
//    painter.drawRect(QRect(20, 20, 50, 50));

//    //移动画家
//    painter.translate(100, 0);

//    //保存画家状态
//    painter.save();

//    painter.drawRect(QRect(20, 20, 50, 50));

//    painter.translate(100, 0);

//    //还原画家状态
//    painter.restore();
//    painter.drawRect(QRect(20, 20, 50, 50));



    ///////////////////////////////利用画家 画资源图片////////////////////
    QPainter painter(this);

    //如果超出了屏幕 从0开始
    if(posX > this->width())
    {
        posX = 0;
    }

    painter.drawPixmap(posX, 0, QPixmap(":/Images/kunkun.jpg").scaled(300, 300, Qt::KeepAspectRatio));
}

Widget::~Widget()
{
    delete ui;
}

