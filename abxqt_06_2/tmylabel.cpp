#include "tmylabel.h"
#include <QEvent>
TMyLabel::TMyLabel(QWidget *parent) : QLabel(parent)
{
    setAttribute(Qt::WA_Hover, true);
}

void TMyLabel::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    emit doubleClicked();
}


bool TMyLabel::event(QEvent *event)
{
    if(event->type() == QEvent::HoverEnter)
    {
        QPalette plet = this->palette();
        plet.setColor(QPalette::WindowText, Qt::red);
        setPalette(plet);
    }
    else if( event->type() == QEvent::HoverLeave)
    {
        QPalette plet = this->palette();
        plet.setColor(QPalette::WindowText, Qt::black);
        setPalette(plet);
    }

    return QLabel::event(event);
}
