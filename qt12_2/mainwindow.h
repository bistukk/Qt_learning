#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QChart;
class QLineSeries;
class QValueAxis;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QChart *chart;
    QLineSeries *curSeries;
    QValueAxis *curAxis;

    void createChart();
    void prepareData();
    void updateFromChart();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actDraw_triggered();

    void on_btnTitleSetText_clicked();

    void on_btnTitleColor_clicked();

    void on_btnTitleFont_clicked();

    void on_groupBox_2_clicked(bool checked);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_btnLegendlabelColor_clicked();

    void on_btnLegendFont_clicked();

    void on_pushButton_7_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_radioSeries0_clicked();

    void on_radioSeries1_clicked();

    void on_groupBox_Series_clicked(bool checked);

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_chkBoxUseOpenGL_clicked(bool checked);

    void on_sliderOpacity_sliderMoved(int position);

    void on_groupBox_Points_clicked(bool checked);

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_pushButton_11_clicked();

    void on_groupBox_PointLabel_clicked(bool checked);

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_8_clicked();

    void on_radioButton_9_clicked();

    void on_radioButton_10_clicked();



    void on_groupBox_Axis_clicked(bool checked);

    void on_chkBoxAxisReverse_clicked(bool checked);

    void on_pushButton_14_clicked();

    void on_groupBox_AxisTitle_clicked(bool checked);

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_groupBox_AxisLabel_clicked(bool checked);

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_groupBox_Ticks_clicked(bool checked);

    void on_radioTick_Fixed_clicked();

    void on_radioTick_Dynamic_clicked();

    void on_radioTick_Fixed_toggled(bool checked);

    void on_spinTick_Count_valueChanged(int arg1);

    void on_spinTick_Anchor_valueChanged(double arg1);

    void on_spinTick_Intv_valueChanged(double arg1);

    void on_btnAxisLinePen_clicked();

    void on_btnAxisLinePenColor_clicked();

    void on_groupBox_GridLine_clicked(bool checked);

    void on_btnGridLinePen_clicked();

    void on_btnGridLineColor_clicked();

    void on_spinMinorTickCount_valueChanged(int arg1);

    void on_btnMinorPen_clicked();

    void on_btnMinorColor_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
