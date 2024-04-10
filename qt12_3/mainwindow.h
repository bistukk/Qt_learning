#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QChart *chart;
    QLabel *lab_chartXY;
    QLabel *lab_hoverXY;
    QLabel *lab_clickXY;

    void createChart();
    void prepareData();
    int getIndexFromX(QXYSeries *series, qreal xValue, qreal tol = 0.05);//根据X的值返回点的索引

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void do_series_clicked(const QPointF &point);//序列被点击
    void do_series_hovered(const QPointF &point, bool state);//进入或离开序列
    void do_mouseMovePoint(QPoint point);
    void do_legendMarkerClicked();
    void on_actDeselectAll_triggered();

    void on_actZoomOut_triggered();

    void on_actZoomIn_triggered();

    void on_action_triggered();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
