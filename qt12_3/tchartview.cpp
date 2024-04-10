#include "tchartview.h"
#include <QKeyEvent>
void TChartView::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        beginPoint=event->pos();
    }
    QChartView::mousePressEvent(event);
}

void TChartView::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        endPoint=event->pos();

        if((dragMode()==QGraphicsView::ScrollHandDrag)
                &&(rubberBand()==QChartView::NoRubberBand))
        {
            chart()->scroll(beginPoint.x()-endPoint.x(),endPoint.y()-beginPoint.y());
        }else if(m_customZoom&&dragMode()==QGraphicsView::RubberBandDrag)
        {
            QRectF rectF;
            rectF.setTopLeft(beginPoint);
            rectF.setBottomRight(endPoint);
            chart()->zoomIn(rectF);
        }
    }
    QChartView::mouseReleaseEvent(event);
}

void TChartView::mouseMoveEvent(QMouseEvent *event)
{
    emit mouseMovePoint(event->pos());
    QChartView::mouseMoveEvent(event);
}

void TChartView::wheelEvent(QWheelEvent *event)
{
    QPoint numDegrees=event->angleDelta()/8;
    if(!numDegrees.isNull())
    {
        int stepY=numDegrees.y()/15;//每15度算一步
        if(stepY>0)//forward,走近看->大
            chart()->zoom(1.1*stepY);
        else
            chart()->zoom(-1.0*stepY*0.9);
    }
    event->accept();
}

void TChartView::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()){
    case Qt::Key_Left:
        chart()->scroll(10,0);
        break;
    case Qt::Key_Right:
        chart()->scroll(-10,0);
        break;
    case Qt::Key_Up:
        chart()->scroll(0,-10);
        break;
    case Qt::Key_Down:
        chart()->scroll(0,10);
        break;
    case Qt::Key_PageUp:
        chart()->scroll(0,-50);
        break;
    case Qt::Key_PageDown:
        chart()->scroll(0,50);
        break;
    case Qt::Key_Escape:
        chart()->zoomReset();
        break;
    default:
        QGraphicsView::keyPressEvent(event);
    }
}

TChartView::TChartView(QWidget *parent):QChartView(parent)
{
   //setMouseTracking(true);
    setDragMode(QGraphicsView::NoDrag);
    setRubberBand(QChartView::NoRubberBand);
}

void TChartView::setCustomZoomRect(bool custom)
{
    m_customZoom=custom;
}
