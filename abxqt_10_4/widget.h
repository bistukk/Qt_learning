#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
private:


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

    // QWidget interface
protected:
    virtual void resizeEvent(QResizeEvent *event) override;
private slots:
    void do_mouseMovePoint(QPoint point);
    void do_mouseClicked(QPoint point);

};


#endif // WIDGET_H
