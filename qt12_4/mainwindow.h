#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QtCharts>
#include <QBarSet>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    enum{COL_NAME, COL_MATH, COL_CHINESE, COL_ENGLTSH, COL_AVERAGE};//列编号常量
    int studCount = 10;
    QStandardItemModel *dataModel;
    void generateData();
    void countData();
    void removeAllAxis(QChart *chart);//删除某个chart的轴

    void iniBarChart();
    void drawBarChart(bool isVertical = true);

    void iniStackedBar();
    void drawStackedBar(bool isVertical= true);

    void iniPercentBar();
    void drawPercentBar(bool isVertical= true);

    void iniPieChart();
    void drawPieChart();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void do_barClicked(int index, QBarSet *barset);

    void do_barHovered(bool status, int index, QBarSet *barset);

    void do_pieHovered(QPieSlice *slice, bool state);

    void on_btnBuildStackedBar_clicked();

    void on_btnBuildBarChart_clicked();

    void on_btnBuildBarChartH_clicked();

    void on_btnBuildStackedBarH_clicked();

    void on_btnPercentBar_clicked();

    void on_btnPercentBarH_clicked();

    void on_btnDrawPieChart_clicked();

    void on_chkBox_PieLegend_clicked(bool checked);

    void on_toolBtn_GenData_clicked();

    void on_toolBtn_Counting_clicked();

    void on_comboTheme_currentIndexChanged(int index);

    void on_comboAnimation_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
