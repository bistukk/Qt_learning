#include "tgraphicsview.h"
#include <QMouseEvent>
TGraphicsView::TGraphicsView(QWidget *parent):QGraphicsView(parent)
{
    resize(QSize(600, 300));

}


void TGraphicsView::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        emit mouseClicked(event->pos());
    }
    QGraphicsView::mousePressEvent(event);

}

void TGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    emit mouseMovePoint(event->pos());
    QGraphicsView::mouseMoveEvent(event);

}
