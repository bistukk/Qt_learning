#include "tbattery.h"
#include <QPainter>
#include <QPaintEvent>
void TBattery::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect rect(0, 0, width(), height());
    painter.setViewport(rect);
    painter.setWindow(0, 0, 120, 50);//窗口,逻辑坐标(映射到上面的坐标)
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);

    //绘制电池
    QPen pen(colorBorder);
    pen.setWidth(2);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::FlatCap);
    pen.setJoinStyle(Qt::BevelJoin);
    painter.setPen(pen);

    QBrush brush(colorBackground);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    rect.setRect(1, 1, 109, 48);//绘制边框
    painter.drawRect(rect);//绘制边框

    brush.setColor(colorBorder);
    painter.setBrush(brush);
    rect.setRect(110, 15, 10, 20);
    painter.drawRect(rect);//绘制正极

    if(m_powerLevel > m_warnLevel)
    {
        brush.setColor(colorPower);
        pen.setColor(colorWarning);
    }
    else
    {
        brush.setColor(colorWarning);
        pen.setColor(colorWarning);
    }
    painter.setPen(pen);
    painter.setBrush(brush);
    if(m_powerLevel > 0)
    {
        rect.setRect(5, 5, m_powerLevel, 40);
        painter.drawRect(rect);
    }

    QString powStr = QString::asprintf("%d%%", m_powerLevel);
    QFontMetrics textSize(this->font());
    QRect textRect = textSize.boundingRect(powStr);
    painter.setFont(this->font());
    pen.setColor(colorBorder);
    painter.setPen(pen);
    painter.drawText(55-textRect.width()/2, 25+textRect.height()/2,powStr);

    event->accept();
}

int TBattery::powerLevel() const
{
    return m_powerLevel;
}

void TBattery::setPowerLevel(int newPowerLevel)
{
    m_powerLevel = newPowerLevel;
    repaint();
}

int TBattery::warnLevel() const
{
    return m_warnLevel;
}

void TBattery::setWarnLevel(int newWarnLevel)
{
    m_warnLevel = newWarnLevel;
    repaint();
}

TBattery::TBattery(QWidget *parent)
    : QWidget{parent}
{

}
