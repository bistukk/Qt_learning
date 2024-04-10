/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actDraw;
    QAction *actQuit;
    QWidget *centralwidget;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnTitleSetText;
    QPushButton *btnTitleColor;
    QPushButton *btnTitleFont;
    QLineEdit *editTitle;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *btnLegendlabelColor;
    QPushButton *btnLegendFont;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QSpinBox *spinMarginLeft;
    QLabel *label_2;
    QSpinBox *spinMarginRight;
    QLabel *label_3;
    QSpinBox *spinMarginTop;
    QLabel *label_4;
    QSpinBox *spinMarginBottom;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioSeries0;
    QRadioButton *radioSeries1;
    QGroupBox *groupBox_Series;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_8;
    QLineEdit *editSeriesName;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QCheckBox *chkBoxUseOpenGL;
    QLabel *label_7;
    QSlider *sliderOpacity;
    QGroupBox *groupBox_Points;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_11;
    QGroupBox *groupBox_PointLabel;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QGroupBox *groupBox_Axis;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_2;
    QGridLayout *gridLayout_6;
    QLabel *label_9;
    QDoubleSpinBox *spinAxisMin;
    QCheckBox *chkBoxAxisReverse;
    QLabel *label_10;
    QDoubleSpinBox *spinAxisMax;
    QPushButton *pushButton_14;
    QGroupBox *groupBox_AxisTitle;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_15;
    QLineEdit *editAxisTitle;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QGroupBox *groupBox_AxisLabel;
    QGridLayout *gridLayout_8;
    QPushButton *pushButton_18;
    QLineEdit *editAxisLabelFormat;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QGroupBox *groupBox_Ticks;
    QGridLayout *gridLayout_9;
    QRadioButton *radioTick_Fixed;
    QRadioButton *radioTick_Dynamic;
    QLabel *label_11;
    QSpinBox *spinTick_Count;
    QLabel *label_12;
    QDoubleSpinBox *spinTick_Anchor;
    QLabel *label_13;
    QDoubleSpinBox *spinTick_Intv;
    QPushButton *btnAxisLinePen;
    QPushButton *btnAxisLinePenColor;
    QGroupBox *groupBox_GridLine;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnGridLinePen;
    QPushButton *btnGridLineColor;
    QGroupBox *groupBox_MinorGrid;
    QGridLayout *gridLayout_10;
    QLabel *label_14;
    QSpinBox *spinMinorTickCount;
    QPushButton *btnMinorPen;
    QPushButton *btnMinorColor;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QChartView *chartView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(896, 615);
        actDraw = new QAction(MainWindow);
        actDraw->setObjectName(QString::fromUtf8("actDraw"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/828.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDraw->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, -10, 891, 571));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 444, 481));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -75, 410, 536));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnTitleSetText = new QPushButton(groupBox);
        btnTitleSetText->setObjectName(QString::fromUtf8("btnTitleSetText"));

        gridLayout->addWidget(btnTitleSetText, 0, 0, 1, 1);

        btnTitleColor = new QPushButton(groupBox);
        btnTitleColor->setObjectName(QString::fromUtf8("btnTitleColor"));

        gridLayout->addWidget(btnTitleColor, 1, 0, 1, 1);

        btnTitleFont = new QPushButton(groupBox);
        btnTitleFont->setObjectName(QString::fromUtf8("btnTitleFont"));

        gridLayout->addWidget(btnTitleFont, 1, 1, 1, 1);

        editTitle = new QLineEdit(groupBox);
        editTitle->setObjectName(QString::fromUtf8("editTitle"));

        gridLayout->addWidget(editTitle, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setCheckable(true);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout_2->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_2->addWidget(radioButton_3, 1, 0, 1, 1);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_2->addWidget(radioButton_4, 1, 1, 1, 1);

        btnLegendlabelColor = new QPushButton(groupBox_2);
        btnLegendlabelColor->setObjectName(QString::fromUtf8("btnLegendlabelColor"));

        gridLayout_2->addWidget(btnLegendlabelColor, 2, 0, 1, 1);

        btnLegendFont = new QPushButton(groupBox_2);
        btnLegendFont->setObjectName(QString::fromUtf8("btnLegendFont"));

        gridLayout_2->addWidget(btnLegendFont, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        spinMarginLeft = new QSpinBox(groupBox_3);
        spinMarginLeft->setObjectName(QString::fromUtf8("spinMarginLeft"));

        gridLayout_3->addWidget(spinMarginLeft, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        spinMarginRight = new QSpinBox(groupBox_3);
        spinMarginRight->setObjectName(QString::fromUtf8("spinMarginRight"));

        gridLayout_3->addWidget(spinMarginRight, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        spinMarginTop = new QSpinBox(groupBox_3);
        spinMarginTop->setObjectName(QString::fromUtf8("spinMarginTop"));

        gridLayout_3->addWidget(spinMarginTop, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        spinMarginBottom = new QSpinBox(groupBox_3);
        spinMarginBottom->setObjectName(QString::fromUtf8("spinMarginBottom"));

        gridLayout_3->addWidget(spinMarginBottom, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 4, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_4->addWidget(comboBox, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox_4);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon2, QString::fromUtf8("\345\233\276\350\241\250\350\256\276\347\275\256"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 444, 481));
        verticalLayout_7 = new QVBoxLayout(page_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        scrollArea_2 = new QScrollArea(page_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -17, 410, 478));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_5 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioSeries0 = new QRadioButton(groupBox_5);
        radioSeries0->setObjectName(QString::fromUtf8("radioSeries0"));
        radioSeries0->setChecked(true);

        horizontalLayout_2->addWidget(radioSeries0);

        radioSeries1 = new QRadioButton(groupBox_5);
        radioSeries1->setObjectName(QString::fromUtf8("radioSeries1"));

        horizontalLayout_2->addWidget(radioSeries1);


        verticalLayout_6->addWidget(groupBox_5);

        groupBox_Series = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_Series->setObjectName(QString::fromUtf8("groupBox_Series"));
        groupBox_Series->setCheckable(true);
        groupBox_Series->setChecked(true);
        gridLayout_5 = new QGridLayout(groupBox_Series);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_8 = new QPushButton(groupBox_Series);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_5->addWidget(pushButton_8, 0, 0, 1, 1);

        editSeriesName = new QLineEdit(groupBox_Series);
        editSeriesName->setObjectName(QString::fromUtf8("editSeriesName"));

        gridLayout_5->addWidget(editSeriesName, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(groupBox_Series);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_5->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_Series);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_5->addWidget(pushButton_10, 1, 1, 1, 1);

        chkBoxUseOpenGL = new QCheckBox(groupBox_Series);
        chkBoxUseOpenGL->setObjectName(QString::fromUtf8("chkBoxUseOpenGL"));

        gridLayout_5->addWidget(chkBoxUseOpenGL, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox_Series);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 3, 0, 1, 1);

        sliderOpacity = new QSlider(groupBox_Series);
        sliderOpacity->setObjectName(QString::fromUtf8("sliderOpacity"));
        sliderOpacity->setValue(99);
        sliderOpacity->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(sliderOpacity, 3, 1, 1, 1);


        verticalLayout_6->addWidget(groupBox_Series);

        groupBox_Points = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_Points->setObjectName(QString::fromUtf8("groupBox_Points"));
        groupBox_Points->setEnabled(true);
        groupBox_Points->setCheckable(true);
        groupBox_Points->setChecked(false);
        horizontalLayout_3 = new QHBoxLayout(groupBox_Points);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(groupBox_Points);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        doubleSpinBox = new QDoubleSpinBox(groupBox_Points);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setValue(5.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox);

        pushButton_11 = new QPushButton(groupBox_Points);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        horizontalLayout_3->addWidget(pushButton_11);


        verticalLayout_6->addWidget(groupBox_Points);

        groupBox_PointLabel = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_PointLabel->setObjectName(QString::fromUtf8("groupBox_PointLabel"));
        groupBox_PointLabel->setEnabled(false);
        groupBox_PointLabel->setFlat(false);
        groupBox_PointLabel->setCheckable(true);
        groupBox_PointLabel->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(groupBox_PointLabel);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_12 = new QPushButton(groupBox_PointLabel);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(groupBox_PointLabel);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        horizontalLayout->addWidget(pushButton_13);


        verticalLayout_5->addLayout(horizontalLayout);

        groupBox_9 = new QGroupBox(groupBox_PointLabel);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_4 = new QVBoxLayout(groupBox_9);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioButton_7 = new QRadioButton(groupBox_9);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setChecked(true);

        verticalLayout_4->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(groupBox_9);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout_4->addWidget(radioButton_8);


        verticalLayout_5->addWidget(groupBox_9);


        verticalLayout_6->addWidget(groupBox_PointLabel);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_7->addWidget(scrollArea_2);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/dis3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_2, icon3, QString::fromUtf8("\346\233\262\347\272\277\350\256\276\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_10 = new QVBoxLayout(page_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        scrollArea_3 = new QScrollArea(page_3);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, -311, 410, 772));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupBox_10 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton_9 = new QRadioButton(groupBox_10);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setChecked(true);

        horizontalLayout_4->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(groupBox_10);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        horizontalLayout_4->addWidget(radioButton_10);


        verticalLayout_9->addWidget(groupBox_10);

        groupBox_Axis = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_Axis->setObjectName(QString::fromUtf8("groupBox_Axis"));
        groupBox_Axis->setCheckable(true);
        verticalLayout_8 = new QVBoxLayout(groupBox_Axis);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        frame_2 = new QFrame(groupBox_Axis);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_9, 0, 0, 1, 1);

        spinAxisMin = new QDoubleSpinBox(frame_2);
        spinAxisMin->setObjectName(QString::fromUtf8("spinAxisMin"));

        gridLayout_6->addWidget(spinAxisMin, 0, 1, 1, 1);

        chkBoxAxisReverse = new QCheckBox(frame_2);
        chkBoxAxisReverse->setObjectName(QString::fromUtf8("chkBoxAxisReverse"));

        gridLayout_6->addWidget(chkBoxAxisReverse, 0, 2, 1, 1);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_10, 1, 0, 1, 1);

        spinAxisMax = new QDoubleSpinBox(frame_2);
        spinAxisMax->setObjectName(QString::fromUtf8("spinAxisMax"));
        spinAxisMax->setValue(10.000000000000000);

        gridLayout_6->addWidget(spinAxisMax, 1, 1, 1, 1);

        pushButton_14 = new QPushButton(frame_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout_6->addWidget(pushButton_14, 1, 2, 1, 1);


        verticalLayout_8->addWidget(frame_2);

        groupBox_AxisTitle = new QGroupBox(groupBox_Axis);
        groupBox_AxisTitle->setObjectName(QString::fromUtf8("groupBox_AxisTitle"));
        groupBox_AxisTitle->setCheckable(true);
        gridLayout_7 = new QGridLayout(groupBox_AxisTitle);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pushButton_15 = new QPushButton(groupBox_AxisTitle);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout_7->addWidget(pushButton_15, 0, 0, 1, 1);

        editAxisTitle = new QLineEdit(groupBox_AxisTitle);
        editAxisTitle->setObjectName(QString::fromUtf8("editAxisTitle"));

        gridLayout_7->addWidget(editAxisTitle, 0, 1, 1, 1);

        pushButton_16 = new QPushButton(groupBox_AxisTitle);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        gridLayout_7->addWidget(pushButton_16, 1, 0, 1, 1);

        pushButton_17 = new QPushButton(groupBox_AxisTitle);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        gridLayout_7->addWidget(pushButton_17, 1, 1, 1, 1);


        verticalLayout_8->addWidget(groupBox_AxisTitle);

        groupBox_AxisLabel = new QGroupBox(groupBox_Axis);
        groupBox_AxisLabel->setObjectName(QString::fromUtf8("groupBox_AxisLabel"));
        groupBox_AxisLabel->setCheckable(true);
        gridLayout_8 = new QGridLayout(groupBox_AxisLabel);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        pushButton_18 = new QPushButton(groupBox_AxisLabel);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        gridLayout_8->addWidget(pushButton_18, 0, 0, 1, 1);

        editAxisLabelFormat = new QLineEdit(groupBox_AxisLabel);
        editAxisLabelFormat->setObjectName(QString::fromUtf8("editAxisLabelFormat"));

        gridLayout_8->addWidget(editAxisLabelFormat, 0, 1, 1, 1);

        pushButton_19 = new QPushButton(groupBox_AxisLabel);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        gridLayout_8->addWidget(pushButton_19, 1, 0, 1, 1);

        pushButton_20 = new QPushButton(groupBox_AxisLabel);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        gridLayout_8->addWidget(pushButton_20, 1, 1, 1, 1);


        verticalLayout_8->addWidget(groupBox_AxisLabel);

        groupBox_Ticks = new QGroupBox(groupBox_Axis);
        groupBox_Ticks->setObjectName(QString::fromUtf8("groupBox_Ticks"));
        groupBox_Ticks->setCheckable(true);
        gridLayout_9 = new QGridLayout(groupBox_Ticks);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        radioTick_Fixed = new QRadioButton(groupBox_Ticks);
        radioTick_Fixed->setObjectName(QString::fromUtf8("radioTick_Fixed"));
        radioTick_Fixed->setChecked(true);

        gridLayout_9->addWidget(radioTick_Fixed, 0, 0, 1, 1);

        radioTick_Dynamic = new QRadioButton(groupBox_Ticks);
        radioTick_Dynamic->setObjectName(QString::fromUtf8("radioTick_Dynamic"));

        gridLayout_9->addWidget(radioTick_Dynamic, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_Ticks);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_11, 1, 0, 1, 1);

        spinTick_Count = new QSpinBox(groupBox_Ticks);
        spinTick_Count->setObjectName(QString::fromUtf8("spinTick_Count"));
        spinTick_Count->setValue(10);

        gridLayout_9->addWidget(spinTick_Count, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_Ticks);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_12, 2, 0, 1, 1);

        spinTick_Anchor = new QDoubleSpinBox(groupBox_Ticks);
        spinTick_Anchor->setObjectName(QString::fromUtf8("spinTick_Anchor"));
        spinTick_Anchor->setEnabled(false);

        gridLayout_9->addWidget(spinTick_Anchor, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_Ticks);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_13, 3, 0, 1, 1);

        spinTick_Intv = new QDoubleSpinBox(groupBox_Ticks);
        spinTick_Intv->setObjectName(QString::fromUtf8("spinTick_Intv"));
        spinTick_Intv->setEnabled(false);
        spinTick_Intv->setValue(1.000000000000000);

        gridLayout_9->addWidget(spinTick_Intv, 3, 1, 1, 1);

        btnAxisLinePen = new QPushButton(groupBox_Ticks);
        btnAxisLinePen->setObjectName(QString::fromUtf8("btnAxisLinePen"));

        gridLayout_9->addWidget(btnAxisLinePen, 4, 0, 1, 1);

        btnAxisLinePenColor = new QPushButton(groupBox_Ticks);
        btnAxisLinePenColor->setObjectName(QString::fromUtf8("btnAxisLinePenColor"));

        gridLayout_9->addWidget(btnAxisLinePenColor, 4, 1, 1, 1);


        verticalLayout_8->addWidget(groupBox_Ticks);

        groupBox_GridLine = new QGroupBox(groupBox_Axis);
        groupBox_GridLine->setObjectName(QString::fromUtf8("groupBox_GridLine"));
        groupBox_GridLine->setCheckable(true);
        horizontalLayout_5 = new QHBoxLayout(groupBox_GridLine);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btnGridLinePen = new QPushButton(groupBox_GridLine);
        btnGridLinePen->setObjectName(QString::fromUtf8("btnGridLinePen"));

        horizontalLayout_5->addWidget(btnGridLinePen);

        btnGridLineColor = new QPushButton(groupBox_GridLine);
        btnGridLineColor->setObjectName(QString::fromUtf8("btnGridLineColor"));

        horizontalLayout_5->addWidget(btnGridLineColor);


        verticalLayout_8->addWidget(groupBox_GridLine);

        groupBox_MinorGrid = new QGroupBox(groupBox_Axis);
        groupBox_MinorGrid->setObjectName(QString::fromUtf8("groupBox_MinorGrid"));
        groupBox_MinorGrid->setCheckable(true);
        gridLayout_10 = new QGridLayout(groupBox_MinorGrid);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_14 = new QLabel(groupBox_MinorGrid);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_14, 0, 0, 1, 1);

        spinMinorTickCount = new QSpinBox(groupBox_MinorGrid);
        spinMinorTickCount->setObjectName(QString::fromUtf8("spinMinorTickCount"));
        spinMinorTickCount->setValue(4);

        gridLayout_10->addWidget(spinMinorTickCount, 0, 1, 1, 1);

        btnMinorPen = new QPushButton(groupBox_MinorGrid);
        btnMinorPen->setObjectName(QString::fromUtf8("btnMinorPen"));

        gridLayout_10->addWidget(btnMinorPen, 1, 0, 1, 1);

        btnMinorColor = new QPushButton(groupBox_MinorGrid);
        btnMinorColor->setObjectName(QString::fromUtf8("btnMinorColor"));

        gridLayout_10->addWidget(btnMinorColor, 1, 1, 1, 1);


        verticalLayout_8->addWidget(groupBox_MinorGrid);


        verticalLayout_9->addWidget(groupBox_Axis);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_10->addWidget(scrollArea_3);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/39.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon4, QString::fromUtf8("\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256"));
        splitter->addWidget(toolBox);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chartView = new QChartView(frame);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        chartView->setMinimumSize(QSize(300, 0));

        verticalLayout->addWidget(chartView);

        splitter->addWidget(frame);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actDraw);
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actDraw->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\347\273\230\345\233\276", nullptr));
#if QT_CONFIG(tooltip)
        actDraw->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\347\273\230\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\240\207\351\242\230", nullptr));
        btnTitleSetText->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\351\242\230", nullptr));
        btnTitleColor->setText(QCoreApplication::translate("MainWindow", "\346\240\207\351\242\230\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        btnTitleFont->setText(QCoreApplication::translate("MainWindow", "\346\240\207\351\242\230\345\255\227\344\275\223", nullptr));
        editTitle->setText(QCoreApplication::translate("MainWindow", "\347\256\200\345\215\225\345\207\275\346\225\260\346\230\276\347\244\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\344\276\213", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\344\270\212\346\226\271", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\344\270\213\346\226\271", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\345\267\246\344\276\247", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\345\217\263\344\276\247", nullptr));
        btnLegendlabelColor->setText(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        btnLegendFont->setText(QCoreApplication::translate("MainWindow", "\345\233\276\344\276\213\345\255\227\344\275\223", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\350\276\271\350\267\235", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\267\246\350\276\271\350\267\235", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\217\263\350\276\271\350\267\235", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\270\212\350\276\271\350\267\235", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\276\271\350\267\235", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\276\271\350\267\235", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\212\250\347\224\273\346\225\210\346\236\234\345\222\214\344\270\273\351\242\230", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\212\250\347\224\273\346\225\210\346\236\234", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "NoAnimation", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "GridAxisAnimations", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "SeriesAnimations", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "AllAnimations", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\344\270\273\351\242\230", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Light", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "BlueCerulean", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Dark", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "BrownSand", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "BlueNcs", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("MainWindow", "HighContrast", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("MainWindow", "Bluelcy", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("MainWindow", "Qt", nullptr));

        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\233\276\350\241\250\350\256\276\347\275\256", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\223\215\344\275\234\345\272\217\345\210\227", nullptr));
        radioSeries0->setText(QCoreApplication::translate("MainWindow", "Sin\346\233\262\347\272\277", nullptr));
        radioSeries1->setText(QCoreApplication::translate("MainWindow", "Cos\346\233\262\347\272\277", nullptr));
        groupBox_Series->setTitle(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\346\233\262\347\272\277", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\345\220\215\347\247\260", nullptr));
        editSeriesName->setText(QCoreApplication::translate("MainWindow", "Sin\346\233\262\347\272\277", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277\351\242\234\350\211\262", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277Pen", nullptr));
        chkBoxUseOpenGL->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250openGL", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\200\217\346\230\216\345\272\246", nullptr));
        groupBox_Points->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\345\244\247\345\260\217", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\351\242\234\350\211\262", nullptr));
        groupBox_PointLabel->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\346\240\207\347\255\276", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\346\240\207\347\255\276\351\242\234\350\211\262", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\346\240\207\347\255\276\345\255\227\344\275\223", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "\346\240\207\347\255\276\346\240\274\345\274\217", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "@yPoint", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainWindow", "(@xPoint, @yPoint)", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277\350\256\276\347\275\256", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\223\215\344\275\234\347\232\204\345\235\220\346\240\207\350\275\264\345\257\271\350\261\241", nullptr));
        radioButton_9->setText(QCoreApplication::translate("MainWindow", "X\350\275\264", nullptr));
        radioButton_10->setText(QCoreApplication::translate("MainWindow", "Y\350\275\264", nullptr));
        groupBox_Axis->setTitle(QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264(setVisible())", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\345\200\274", nullptr));
        chkBoxAxisReverse->setText(QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207\345\217\215\345\220\221", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\244\247\345\200\274", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\235\220\346\240\207\350\214\203\345\233\264", nullptr));
        groupBox_AxisTitle->setTitle(QCoreApplication::translate("MainWindow", "\350\275\264\346\240\207\351\242\230(setTitleVisble())", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\275\264\346\240\207\351\242\230", nullptr));
        editAxisTitle->setText(QCoreApplication::translate("MainWindow", "time(secs)", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        groupBox_AxisLabel->setTitle(QCoreApplication::translate("MainWindow", "\350\275\264\345\210\273\345\272\246\346\240\207\347\255\276(setLabelsVisible())", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\347\255\276\346\240\274\345\274\217", nullptr));
        editAxisLabelFormat->setText(QCoreApplication::translate("MainWindow", "%.1f", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        groupBox_Ticks->setTitle(QCoreApplication::translate("MainWindow", "\350\275\264\347\272\277\345\222\214\344\270\273\345\210\273\345\272\246(setLineVisible)", nullptr));
        radioTick_Fixed->setText(QCoreApplication::translate("MainWindow", "\345\233\272\345\256\232\345\210\273\345\272\246", nullptr));
        radioTick_Dynamic->setText(QCoreApplication::translate("MainWindow", "\345\212\250\346\200\201\345\210\273\345\272\246", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Tick\344\270\252\346\225\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\210\273\345\272\246\350\265\267\347\202\271\345\200\274", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\210\273\345\272\246\351\227\264\351\232\224\345\200\274", nullptr));
        btnAxisLinePen->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241Pen", nullptr));
        btnAxisLinePenColor->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241\351\242\234\350\211\262", nullptr));
        groupBox_GridLine->setTitle(QCoreApplication::translate("MainWindow", "\344\270\273\347\275\221\346\240\274\347\272\277(setGridLineVisible)", nullptr));
        btnGridLinePen->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241Pen", nullptr));
        btnGridLineColor->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241\351\242\234\350\211\262", nullptr));
        groupBox_MinorGrid->setTitle(QCoreApplication::translate("MainWindow", "\346\254\241\347\275\221\346\240\274\347\272\277(setMinorGridLineVisible)", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "MinorTick\344\270\252\346\225\260", nullptr));
        btnMinorPen->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241Pen", nullptr));
        btnMinorColor->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241\351\242\234\350\211\262", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
