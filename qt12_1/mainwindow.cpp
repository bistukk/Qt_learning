#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCharts>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QChartView *chartView = new QChartView(this);
    QChart *chart = new QChart();
    chart->setTitle("简单的函数曲线");
    chartView->setChart(chart);

    //序列
    QLineSeries *series0 = new QLineSeries();
    QLineSeries *series1 = new QLineSeries();
    series0->setName("Sin曲线");
    series1->setName("Cos曲线");
    chart->addSeries(series0);
    chart->addSeries(series1);

    //QPen
    qreal x = 0, intv = 0.1;
    for(int i = 0; i < 100; ++i)//添加100个点
    {
        series0->append(x, qSin(x));
        series1->append(x, qCos(x));
        x += intv;
    }

    //轴
    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0, 10);
    axisX->setTitleText("时间(秒)");
    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(-2, 2);
    axisY->setTitleText("值");

    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY,Qt::AlignLeft);

    series0->attachAxis(axisX);
    series0->attachAxis(axisY);

    series1->attachAxis(axisX);
    series1->attachAxis(axisY);

    setCentralWidget(chartView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

