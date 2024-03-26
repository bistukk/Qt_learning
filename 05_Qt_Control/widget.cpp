#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置单选按钮 男默认选中
    ui->rBtnMan->setChecked(true);

    //选中女后 打印信息
    connect(ui->rBtnWoman, &QRadioButton::clicked,[=](){
        qDebug() << "选中了女!";
    });

    //多选按钮  2是选中  0是未选中  1是半选
    connect(ui->cBox, &QCheckBox::stateChanged,[=](int state){
        qDebug() << state;
    });

    //利用listWidge写诗
//    QListWidgetItem * item = new QListWidgetItem("醉后不知天在水");
//    //将一行诗放入到listWidget控件中
//    ui->listWidget->addItem(item);
//    item->setTextAlignment(Qt::AlignHCenter);


    //QStringList   QList<QString>
    QStringList list;
    list << "醉后不知天在水" << "满船清梦压星河";
    ui->listWidget->addItems(list);

}

Widget::~Widget()
{
    delete ui;
}

