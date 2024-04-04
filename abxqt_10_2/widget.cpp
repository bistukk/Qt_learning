#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPaintEvent>
#include <QPainterPath>
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    QFont font;
    font.setPixelSize(14);
    painter.setFont(font);
    QPen penLine;
    penLine.setWidth(2);
    penLine.setColor(Qt::blue);
    penLine.setStyle(Qt::SolidLine);
    penLine.setCapStyle(Qt::FlatCap);
    penLine.setJoinStyle(Qt::BevelJoin);
    painter.setPen(penLine);
    QBrush brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    //五角星数据
    qreal R = 100;//半径
    const qreal Pi = 3.1415926;
    qreal deg = Pi * (360/5) / 180;
    QPoint points[5] = {
        QPoint(R, 0),
        QPoint(R*qCos(deg), -R*qSin(deg)),
        QPoint(R*qCos(2*deg), -R*qSin(2*deg)),
        QPoint(R*qCos(3*deg), -R*qSin(3*deg)),
        QPoint(R*qCos(4*deg), -R*qSin(4*deg))
    };

    QPainterPath starPath;
    starPath.moveTo(points[0]);
    starPath.lineTo(points[2]);
    starPath.lineTo(points[4]);
    starPath.lineTo(points[1]);
    starPath.lineTo(points[3]);
    starPath.closeSubpath();

    starPath.addText(points[0], font, "0");
    starPath.addText(points[1], font, "1");
    starPath.addText(points[2], font, "2");
    starPath.addText(points[3], font, "3");
    starPath.addText(points[4], font, "4");

    //画家开始绘制
    painter.save();
    painter.translate(100, 120);
    painter.drawPath(starPath);
    painter.drawText(0, 0, "S1");
    painter.restore();

    painter.translate(300, 120);
    painter.scale(0.8, 0.8);
    painter.rotate(90);
    painter.drawPath(starPath);
    painter.drawText(0, 0, "S2");

    painter.resetTransform();
    painter.translate(500, 120);
    painter.rotate(-145);
    painter.drawPath(starPath);
    painter.drawText(0, 0, "S3");

    event->accept();
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
    resize(600, 300);
}

Widget::~Widget()
{
    delete ui;
}

