#include "widget.h"
#include "ui_widget.h"
#include <QResizeEvent>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QLabel>
void Widget::resizeEvent(QResizeEvent *event)
{
    QString str = QString::asprintf("Graphics View坐标, 左上角为(0,0), 宽度=%d, 高度=%d",
                                    ui->graphicsView->width(), ui->graphicsView->height());
    ui->labViewSize->setText(str);

    QRectF rectF = ui->graphicsView->sceneRect();
    str = QString::asprintf("QGrapicsView::sceneRect=(left, top, Width, Height))"
                            "=%.0f,%.0f,%.0f,%.0f", rectF.left(),rectF.top(),rectF.width(), rectF.height());
    ui->labSceneRect->setText(str);
    event->accept();
}

void Widget::do_mouseMovePoint(QPoint point)
{
    ui->labViewCord->setText(QString::asprintf("View坐标:%d. %d", point.x(), point.y()));
    QPointF pointScene = ui->graphicsView->mapToScene(point);
    ui->labSceneCord->setText(QString::asprintf("Scene坐标:%.0f,%.0f", pointScene.x(), pointScene.y()));

}

void Widget::do_mouseClicked(QPoint point)
{
    QPointF pointScene = ui->graphicsView->mapToScene(point);
    QGraphicsItem *item = nullptr;
    item = ui->graphicsView->scene()->itemAt(pointScene, ui->graphicsView->transform());
    if(item != nullptr)
    {
        QPointF pointItem = item->mapFromScene(pointScene);
        ui->labItemCord->setText(QString::asprintf("Item坐标:%.0f, %.0f",pointItem.x(), pointItem.y()));

    }

}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QRectF rect(-200, -100, 400, 200);
    QGraphicsScene *scene = new QGraphicsScene(rect, this);
    ui->graphicsView->setScene(scene);

    //画出scence rect
    QGraphicsRectItem *item = new QGraphicsRectItem(rect);
    item->setFlags(QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsFocusable);
    QPen pen;
    pen.setWidth(2);
    item->setPen(pen);
    scene->addItem(item);

    //画出椭圆
    QGraphicsEllipseItem *item2 = new QGraphicsEllipseItem(-100, -50, 200, 100);
    item2->setFlags(QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsFocusScope|QGraphicsItem::ItemIsMovable);
    item2->setBrush(QBrush(Qt::blue));
    scene->addItem(item2);

    QGraphicsEllipseItem *item3 = new QGraphicsEllipseItem(-50, -50, 100, 100);
    item3->setPos(rect.right(), rect.bottom());
    item3->setFlags(QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsFocusScope|QGraphicsItem::ItemIsMovable);
    item3->setBrush(QBrush(Qt::red));
    scene->addItem(item3);

    ui->labViewCord->setText("View坐标");
    ui->labSceneCord->setText("Scene坐标");
    ui->labItemCord->setText("Item坐标");

    ui->graphicsView->setCursor(Qt::CrossCursor);
    ui->graphicsView->setDragMode(QGraphicsView::RubberBandDrag);
    ui->graphicsView->setMouseTracking(true);

    connect(ui->graphicsView, &TGraphicsView::mouseMovePoint, this, &Widget::do_mouseMovePoint);
    connect(ui->graphicsView, &TGraphicsView::mouseClicked,this, &Widget::do_mouseClicked);
}

Widget::~Widget()
{
    delete ui;
}

