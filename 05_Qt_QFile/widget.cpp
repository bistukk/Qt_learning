#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QFileInfo>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //点击选取文件按钮，弹出文件对话框

    connect(ui->pushButton, &QPushButton::clicked, [=](){
        QString path =  QFileDialog::getOpenFileName(this, "打开文件", "C:\\Users\\刘开鹏\\Desktop");
        //将路径放入到LineEdit中
        ui->lineEdit->setText(path);

        //编码格式类
        QTextCodec * codec = QTextCodec::codecForName();

        //读取内容 放入到 textEdit中
        //QFile默认支持的格式是 utf-8
        QFile file(path);//参数就是读取文件的路径
        //设置打开方式
        file.open(QIODevice::ReadOnly);

        //QByteArray array = file.readAll();
        QByteArray array;
        array = file.readLine();//按行读
        //将读取到的数据 放入textEdit中
        ui->textEdit->setText(array);

        //对文件对象进行关闭
        file.close();

        //进行写文件
//        file.open(QIODevice::Append);//用追加方式进行写
//        file.write("绿蚁新醅酒，红泥小火炉");
//        file.close();

        //QFileInfo 文件信息类
        QFileInfo info(path);
        qDebug() << "大小：" << info.size() << " 后缀名： " << info.suffix() << " 文件名称： " << info.fileName() << " 文件路径：" << info.filePath();
        qDebug() << "创建日期：" << info.created().toString("yyyy/MM/dd hh:mm:ss");

    });
}

Widget::~Widget()
{
    delete ui;
}

