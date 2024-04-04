#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsItem>
#include <QRandomGenerator>
#include <QInputDialog>
#include <QKeyEvent>
#include <QLabel>
#include <QColorDialog>

void MainWindow::setItemProperty(QGraphicsItem *item, QString description)
{
    item->setFlags(QGraphicsItem::ItemIsMovable|
                   QGraphicsItem::ItemIsFocusable|
                   QGraphicsItem::ItemIsSelectable);
    item->setZValue(++frontZ);//叠放顺序
    qint32 v1=QRandomGenerator::global()->bounded(boundValue);
    qint32 v2=QRandomGenerator::global()->bounded(boundValue);
    if(v1%2==0) v1=-v1;
    if(v2%2==0) v2=-v2;
    item->setPos(v1,v2);

    item->setData(ItemId,++seqNum);
    item->setData(ItemDescription,description);

    ui->view->scene()->addItem(item);
    ui->view->scene()->clearSelection();
    item->setSelected(true);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->view);

    QGraphicsScene * scene=new QGraphicsScene(-300,-200,600,400);
    ui->view->setScene(scene);
    ui->view->setCursor(Qt::CrossCursor);
    ui->view->setMouseTracking(true);
    ui->view->setDragMode(QGraphicsView::RubberBandDrag);

    labViewCord=new QLabel("view 坐标：");
    labViewCord->setMinimumWidth(150);
    ui->statusbar->addWidget(labViewCord);

    labSceneCord=new QLabel("Scene 坐标：");
    labSceneCord->setMinimumWidth(150);
    ui->statusbar->addWidget(labSceneCord);

    labItemCord=new QLabel("Item 坐标：");
    labItemCord->setMinimumWidth(150);
    ui->statusbar->addWidget(labItemCord);

    labItemInfo=new QLabel("ItemInfo: ");
    labItemInfo->setMinimumWidth(200);
    ui->statusbar->addWidget(labItemInfo);

    connect(ui->view,&TGraphicsView::keyPress,this,&MainWindow::do_keyPress);
    connect(ui->view,&TGraphicsView::mouseMousePoint,this,&MainWindow::do_mouseMovePoint);
    connect(ui->view,&TGraphicsView::mouseClicked,this,&MainWindow::do_mouseLicked);
    connect(ui->view,&TGraphicsView::mouseDoubleClicked,this,&MainWindow::do_mouseDoubleClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actItem_Rect_triggered()
{
    QGraphicsRectItem *item=new QGraphicsRectItem(-50,-25,100,50);
    item->setBrush(QBrush(Qt::yellow));
    setItemProperty(item,"矩形");
}


void MainWindow::on_actItem_Ellipse_triggered()
{
    QGraphicsEllipseItem *item=new QGraphicsEllipseItem(-50,-25,100,50);
    item->setBrush(QBrush(Qt::blue));
    setItemProperty(item,"椭圆");
}


void MainWindow::on_actItem_Circle_triggered()
{
    QGraphicsEllipseItem *item=new QGraphicsEllipseItem(-50,-50,100,100);
    item->setBrush(QBrush(Qt::cyan));
    setItemProperty(item,"圆形");
}


void MainWindow::on_actItem_Triangle_triggered()
{
    QPolygonF points;
    points.append(QPointF(0,-40));
    points.append(QPointF(60,40));
    points.append(QPointF(-60,40));
    QGraphicsPolygonItem *item=new QGraphicsPolygonItem(points);
    item->setBrush(QBrush(Qt::magenta));
    setItemProperty(item,"三角形");
}


void MainWindow::on_actItem_Polygon_triggered()
{
    QPolygonF points;
    points.append(QPointF(-40,-40));
    points.append(QPointF(40,-40));
    points.append(QPointF(100,40));
    points.append(QPointF(-100,40));
    QGraphicsPolygonItem *item=new QGraphicsPolygonItem(points);
    item->setBrush(QBrush(Qt::green));
    setItemProperty(item,"梯形");
}


void MainWindow::on_actItem_Line_triggered()
{
    QGraphicsLineItem *item=new QGraphicsLineItem(-100,0,100,0);
    QPen pen(Qt::red);
    pen.setWidth(3);
    item->setPen(pen);
    setItemProperty(item,"直线");
}


void MainWindow::on_actItem_Text_triggered()
{
    QString str=QInputDialog::getText(this,"输入文字","输入文字");
    if(str.isEmpty())
        return;
    QGraphicsTextItem *item=new QGraphicsTextItem(str);
    QFont font=this->font();
    font.setPointSize(20);
    font.setBold(true);
    item->setFont(font);
    setItemProperty(item,"文字");
}

void MainWindow::do_mouseMovePoint(QPoint point)
{
    labViewCord->setText(QString::asprintf("View 坐标：%d，%d",point.x(),point.y()));
    QPointF pointScene=ui->view->mapToScene(point);
    labSceneCord->setText(QString::asprintf("Scene 坐标：%.0f,%.0f",pointScene.x(),pointScene.y()));
}

void MainWindow::do_mouseLicked(QPoint point)
{
    QPointF pointScene=ui->view->mapToScene(point);
    QGraphicsItem *item=ui->view->scene()->itemAt(pointScene,ui->view->transform());

    if(item==nullptr)
        return;

    QPointF pointItem=item->mapFromScene(pointScene);
    labItemCord->setText(QString::asprintf("Item 坐标：%.0f,%.0f",pointItem.x(),pointItem.y()));
    labItemInfo->setText(item->data(ItemDescription).toString()+",ItemId="+
                         item->data(ItemId).toString());
}
#include <QFontDialog>
void MainWindow::do_mouseDoubleClicked(QPoint point)
{
    QPointF pointScene=ui->view->mapToScene(point);
    QGraphicsItem *item=ui->view->scene()->itemAt(pointScene,ui->view->transform());

    if(item==nullptr)
        return;

    switch (item->type()) {
    case QGraphicsRectItem::Type:
    {
        QGraphicsRectItem *theItem=qgraphicsitem_cast<QGraphicsRectItem *>(item);
        setBrushColor(theItem);
        break;
    }
    case QGraphicsEllipseItem::Type:
    {
        QGraphicsEllipseItem *theItem=qgraphicsitem_cast<QGraphicsEllipseItem *>(item);
        setBrushColor(theItem);
        break;
    }
    case QGraphicsPolygonItem::Type:
    {
        QGraphicsPolygonItem *theItem=qgraphicsitem_cast<QGraphicsPolygonItem *>(item);
        setBrushColor(theItem);
        break;
    }
    case QGraphicsLineItem::Type:
    {
        QGraphicsLineItem *theItem=qgraphicsitem_cast<QGraphicsLineItem *>(item);
        QPen pen=theItem->pen();
        QColor color=pen.color();
        color=QColorDialog::getColor(color,nullptr,"选择线条颜色");
        if(color.isValid())
        {
            pen.setColor(color);
            theItem->setPen(pen);
        }
        break;
    }
    case QGraphicsTextItem::Type:
    {
        QGraphicsTextItem *theItem=qgraphicsitem_cast<QGraphicsTextItem *>(item);
        QFont font=theItem->font();
        bool ok=false;
        font=QFontDialog::getFont(&ok,font,nullptr,"设置字体");
        if(ok)
            theItem->setFont(font);
        break;
    }
    default:
        break;
    }
}

void MainWindow::do_keyPress(QKeyEvent *event)
{
    if(ui->view->scene()->selectedItems().count()!=1)
        return;
    QGraphicsItem *item=ui->view->scene()->selectedItems().at(0);

    if(event->key()==Qt::Key_Delete)
        ui->view->scene()->removeItem(item);
    else if(event->key()==Qt::Key_Space)
        item->setRotation(item->rotation()+90);
    else if(event->key()==Qt::Key_Up)
        item->setX(item->x()+1);
    else if (event->key()==Qt::Key_Down)
        item->setY(item->y()+1);
    else if (event->key()==Qt::Key_Left)    //左移
        item->setX(item->x()-1);
    else if (event->key()==Qt::Key_Right)   //右移
        item->setX(item->x()+1);
    else if (event->key()==Qt::Key_PageUp)  //放大
        item->setScale(item->scale()+0.1);
    else if (event->key()==Qt::Key_PageDown)//缩小
        item->setScale(item->scale()-0.1);
}

template<class T>
void MainWindow::setBrushColor(T *item)
{
    QColor color=item->brush().color();
    color=QColorDialog::getColor(color,nullptr,"选择颜色");
    if(color.isValid())
        item->setBrush(QBrush(color));
}

void MainWindow::on_actZoomIn_triggered()
{
    int cnt=ui->view->scene()->selectedItems().count();
    if(cnt==1)
    {
        QGraphicsItem *item=ui->view->scene()->selectedItems().at(0);
        item->setScale(item->scale()+0.1);
    }else
        ui->view->scale(1.1,1.1);
}


void MainWindow::on_actZoomOut_triggered()
{
    int cnt=ui->view->scene()->selectedItems().count();
    if(cnt==1)
    {
        QGraphicsItem *item=ui->view->scene()->selectedItems().at(0);
        item->setScale(item->scale()-0.1);
    }else
        ui->view->scale(0.9,0.9);
}


void MainWindow::on_actRestore_triggered()
{
    int cnt=ui->view->scene()->selectedItems().count();
    if(cnt==1)
    {
        QGraphicsItem *item=ui->view->scene()->selectedItems().at(0);
        item->setScale(1.0);
        item->setRotation(0);
    }else
        ui->view->resetTransform();
}


void MainWindow::on_actRotateLeft_triggered()
{
    int cnt=ui->view->scene()->selectedItems().count();
    if(cnt==1)
    {
        QGraphicsItem *item=ui->view->scene()->selectedItems().at(0);
        item->setRotation(item->rotation()-30);
    }else
        ui->view->rotate(-30);
}


void MainWindow::on_actRotateRight_triggered()
{
    int cnt=ui->view->scene()->selectedItems().count();
    if(cnt==1)
    {
        QGraphicsItem *item=ui->view->scene()->selectedItems().at(0);
        item->setRotation(item->rotation()+30);
    }else
        ui->view->rotate(30);
}

void MainWindow::on_actEdit_Front_triggered()
{
    for(auto item:ui->view->scene()->selectedItems())
        item->setZValue(++frontZ);
}

void MainWindow::on_actEdit_Back_triggered()
{
    for(auto item:ui->view->scene()->selectedItems())
        item->setZValue(--backZ);
}


void MainWindow::on_actGroup_triggered()
{
    int cnt=ui->view->scene()->selectedItems().count();
    if(cnt==0)
        return;

    QGraphicsItemGroup *group=new QGraphicsItemGroup;
    ui->view->scene()->addItem(group);
    for(auto item:ui->view->scene()->selectedItems())
    {
        item->setSelected(false);
        item->clearFocus();
        group->addToGroup(item);
    }
    setItemProperty(group,"组合");
}


void MainWindow::on_actGroupBreak_triggered()
{
    for(auto item:ui->view->scene()->selectedItems())
    {
        QGraphicsItemGroup *group=dynamic_cast< QGraphicsItemGroup *>(item);
        if(group)
            ui->view->scene()->destroyItemGroup(group);
    }
}

void MainWindow::on_actEdit_Delete_triggered()
{
    for(auto item:ui->view->scene()->selectedItems())
    {
        ui->view->scene()->removeItem(item);
        delete item;
    }
}

#include <QDesktopServices>
void MainWindow::on_actHelp_triggered()
{
    QString helpFile=QCoreApplication::applicationDirPath()+"/补充示例samp10_5.pdf";
    QDesktopServices::openUrl(QUrl::fromLocalFile(helpFile));
}

