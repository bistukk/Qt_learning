#ifndef TCHARTVIEW_H
#define TCHARTVIEW_H

#include <QChartView>

class TChartView : public QChartView
{
    Q_OBJECT
private:
    QPoint beginPoint;
    QPoint endPoint;
    bool m_customZoom=false;
public:
    TChartView(QWidget *parent = nullptr);
    void setCustomZoomRect(bool custom);
    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void wheelEvent(QWheelEvent *event) override;
    virtual void keyPressEvent(QKeyEvent *event) override;
signals:
    void mouseMovePoint(QPoint point);
};



#endif // TCHARTVIEW_H
