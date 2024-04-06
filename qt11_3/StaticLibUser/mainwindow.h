#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPen>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_Pen_triggered();

private:
    Ui::MainWindow *ui;

    QPen m_pen;
    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event) override;
};


#endif // MAINWINDOW_H
