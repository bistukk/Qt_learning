#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"
//Teacher 类 老师类
//Studnet 类 学生类
//下课后， 老师会出发一个信号，饿了， 老师响应信号， 请客吃饭


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个老师对象
    this->kk = new Teacher(this);

    //创建一个学生对象
    this->st = new Student(this);

//    connect(kk, &Teacher::hungry, st, &Student::treat);

//    //调用下课函数
//    classIsOver();

    //链接带参数的 信号和槽
    //指针 -> 地址
    // 函数指针 -> 函数地址
    void(Teacher:: *teacherSignal)(QString) = &Teacher::hungry;
    void(Student:: *StudentSlot)(QString)  = &Student::treat;

    connect(kk, teacherSignal, st,StudentSlot);
    //classIsOver();


    //点击一个下课的按钮， 再触发下课
    QPushButton * btn = new QPushButton("下课", this);
    this->resize(600, 400);

    //点击按钮，触发下课
    //connect(btn, &QPushButton::clicked, this, &Widget::classIsOver);

    //无参信号和槽连接
    void(Teacher:: *teacherSignal2)(void) = &Teacher::hungry;
    void(Student:: *StudentSlot2)(void)  = &Student::treat;
    connect(kk, teacherSignal2, st, StudentSlot2);

    //信号连接信号
    connect(btn, &QPushButton::clicked, kk, teacherSignal2);

    //断开信号
    //disconnect(kk, teacherSignal2, st, StudentSlot2);

    //拓展
    //1、信号可以是连接信号
    //2、一个信号可以连接多个槽函数
    //3、多个信号 可以链接 同一槽函数
    //4、信号和槽的类型是一一对应的
    //5、信号和槽的参数个数 是不是要一致？信号的参数个数 可以多于槽函数的参数个数

//    QPushButton * btn2 = new QPushButton();

//    [btn](){
//        btn->setText("你干嘛哎哟！");
//        btn2->setText("niganma");//btn2是看不到
//    }();


    //利用lambada表达式，实现点击按钮，关闭窗口
    QPushButton * btn2 = new QPushButton;
    btn2->setText("关闭");
    btn2->move(100, 0);
    btn2->setParent(this);
    connect(btn2, &QPushButton::clicked, this, [=](){
//       this->close();
//       emit kk->hungry("宫保坤丁");
        btn2->setText("nigama");
    });
}

void Widget::classIsOver()
{
    //下课函数， 调用后 触发老师饿了的信号
    //emit kk->hungry();
    emit kk->hungry("宫保坤丁");
}

Widget::~Widget()
{
    delete ui;
}

