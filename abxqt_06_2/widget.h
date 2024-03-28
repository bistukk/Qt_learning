#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void do_doubleClick();

private:
    Ui::Widget *ui;

    // QWidget interface
protected:
    virtual void mouseDoubleClickEvent(QMouseEvent *event) override;
};


#endif // WIDGET_H
