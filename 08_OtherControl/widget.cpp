#include "widget.h"
#include "ui_widget.h"
#include <QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //栈控件使用
    //设置默认定位到scrollArea
     ui->stackedWidget->setCurrentIndex(0);
    //scrollArea按钮
    connect(ui->btn_scrollArea, &QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });

    //toolBox按钮
    connect(ui->btn_ToolBox, &QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });

    //TabWidget按钮
    connect(ui->btn_TabWidget, &QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });


    //下拉框
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("拖拉机");

    //点击按钮 选中拖拉机选项
    connect(ui->btn_select, &QPushButton::clicked,[=](){
        //ui->comboBox->setCurrentIndex(2);
        ui->comboBox->setCurrentText("拖拉机");
    });

    //利用QLabel显示图片
    ui->lab_Image->setPixmap(QPixmap(":/Images/kunkun.jpg").scaled(300,200,Qt::KeepAspectRatio));

    //利用QLabel显示gif动态图片
    QMovie * movie = new QMovie(":/Images/kunkun2.gif");
    ui->lab_movie->setMovie(movie);
    //播放动图
    movie->start();
}

Widget::~Widget()
{
    delete ui;
}

