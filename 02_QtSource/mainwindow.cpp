#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->actionnew->setIcon(QIcon("‪D:/blog/source/img/c3dbb6fabcc40fc1c51367239914c6f.jpg"));

   //使用添加Qt资源 ": + 前缀名 + 文件名 "
    ui->actionnew->setIcon(QIcon(":/Images/kunkun.jpg"));
    ui->actionopen->setIcon(QIcon(":/Images/cat.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

