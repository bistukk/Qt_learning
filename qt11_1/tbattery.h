#ifndef TBATTERY_H
#define TBATTERY_H

#include <QWidget>

class TBattery : public QWidget
{
    Q_OBJECT
private:
    QColor colorBackground = Qt::white;
    QColor colorBorder = Qt::black;
    QColor colorWarning = Qt::red;
    QColor colorPower = Qt::green;

    int m_powerLevel = 60;//当前电量， 0-100
    int m_warnLevel = 20;

public:
    explicit TBattery(QWidget *parent = nullptr);

    int powerLevel() const;
    void setPowerLevel(int newPowerLevel);
    int warnLevel() const;
    void setWarnLevel(int newWarnLevel);

signals:


    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event) override;
};



#endif // TBATTERY_H
