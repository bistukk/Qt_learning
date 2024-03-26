//#ifndef WIDGET_H
//#define WIDGET_H

//#include <QWidget>

//QT_BEGIN_NAMESPACE
//namespace Ui { class Widget; }
//QT_END_NAMESPACE

//class Widget : public QWidget
//{
//    Q_OBJECT

//public:
//    Widget(QWidget *parent = nullptr);
//    ~Widget();

//private:
//    Ui::Widget *ui;
//};
//#endif // WIDGET_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QNetworkAccessManager>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void downloadSubtitles();

private:
    QLineEdit *urlLineEdit;
    QPushButton *downloadButton;
    QNetworkAccessManager *networkManager;
};

#endif // WIDGET_H
