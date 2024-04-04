#include "tgraphicsview.h"
#include <QMouseEvent>

void TGraphicsView::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        emit mouseClicked(event->pos());
    }
    QGraphicsView::mousePressEvent(event);
}

void TGraphicsView::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        emit mouseDoubleClicked(event->pos());
    }
    QGraphicsView::mouseDoubleClickEvent(event);
}

void TGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    emit mouseMousePoint(event->pos());
    QGraphicsView::mouseMoveEvent(event);
}

void TGraphicsView::keyPressEvent(QKeyEvent *event)
{
    emit keyPress(event);
    QGraphicsView::keyPressEvent(event);
}

TGraphicsView::TGraphicsView(QWidget *parent):QGraphicsView(parent)
{

}
