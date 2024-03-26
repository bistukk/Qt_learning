#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"
#include "mypushbutton.h"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton * btn = new QPushButton;
    //btn->show();
    btn->setParent(this);

    //显示文本
    btn->setText("第一个按钮");

    //创建第二个按钮 按照按钮的大小创建窗口
    QPushButton * btn2 = new QPushButton("第二个按钮", this);

    //移动btn2按钮
    btn2->move(100, 100);

    //重置窗口大小
    resize(600, 400);

    //设置固定窗口大小
    setFixedSize(600, 400);

    //设置窗口标题
    setWindowTitle("第一个窗口");


    //创建一个自己的按钮对象
    MyPushButton * myBtn = new MyPushButton;
    myBtn->setText("我自己的按钮");

    myBtn->move(200, 0);
    myBtn->setParent(this);//设置到对象树中

    //需求 点击我的按钮 关闭窗口
    //参数1 信号的发送者 参数2 发送的信号(函数的地址)  参数3 信号的接受者  参数4 处理的槽函数
    //connect(myBtn, &MyPushButton::clicked, this, &Widget::close);
    connect(myBtn, &QPushButton::clicked, this, &QWidget::close);
}

Widget::~Widget()
{
    qDebug() << "myWidget的析构调用";
    delete ui;
}

