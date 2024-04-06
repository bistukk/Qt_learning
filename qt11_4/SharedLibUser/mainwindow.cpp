#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tpendialog.h"
#include <QPainter>
#include <QPaintEvent>
void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect rect(0, 0, width(), height());
    painter.setViewport(rect);
    painter.setWindow(rect);
    painter.setPen(m_pen);

    // 计算窗口的中心点
    int centerX = width() / 2;
    int centerY = height() / 2;

    // 定义矩形的大小
    int rectWidth = width() / 2;
    int rectHeight = height() / 2;

    // 计算矩形的左上角坐标
    int rectX = centerX - rectWidth / 2;
    int rectY = centerY - rectHeight / 2;

    // 绘制矩形
    painter.drawRect(rectX, rectY, rectWidth, rectHeight);

    event->accept();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_Pen_triggered()
{
    bool ok = false;
    QPen pen = TPenDialog::getPen(m_pen, &ok);
    if(ok)
    {
        m_pen = pen;
        this->repaint();
    }
}

