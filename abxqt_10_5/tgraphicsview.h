#ifndef TGRAPHICSVIEW_H
#define TGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QObject>

class TGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    TGraphicsView(QWidget *parent = nullptr);

    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseDoubleClickEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void keyPressEvent(QKeyEvent *event) override;
signals:
    void mouseMousePoint(QPoint point);
    void mouseClicked(QPoint point);
    void mouseDoubleClicked(QPoint point);
    void keyPress(QKeyEvent *event);
};



#endif // TGRAPHICSVIEW_H
