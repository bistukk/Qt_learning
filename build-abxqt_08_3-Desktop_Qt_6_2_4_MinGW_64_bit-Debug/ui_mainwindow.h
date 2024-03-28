/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actClearOutput;
    QAction *actClose;
    QAction *actSaveAll;
    QAction *actReadAll;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *editFilename;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radio_LittelEndian;
    QRadioButton *radio_BigEndian;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radio_Single;
    QRadioButton *radio_Double;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spin_Int8;
    QPushButton *btnInt8_Write;
    QPushButton *btnInt8_Read;
    QLineEdit *edit_Int8;
    QLabel *label_2;
    QSpinBox *spin_UInt8;
    QPushButton *btnUInt8_Write;
    QPushButton *btnUInt8_Read;
    QLineEdit *edit_UInt8;
    QLabel *label_3;
    QSpinBox *spin_Int16;
    QPushButton *btnInt16_Write;
    QPushButton *btnInt16_Read;
    QLineEdit *edit_Int16;
    QLabel *label_4;
    QSpinBox *spin_UInt16;
    QPushButton *btnUInt16_Write;
    QPushButton *btnUInt16_Read;
    QLineEdit *edit_UInt16;
    QLabel *label_5;
    QSpinBox *spin_Int32;
    QPushButton *btnInt32_Write;
    QPushButton *btnInt32_Read;
    QLineEdit *edit_Int32;
    QLabel *label_6;
    QSpinBox *spin_Int64;
    QPushButton *btnInt64_Write;
    QPushButton *btnInt64_Read;
    QLineEdit *edit_Int64;
    QLabel *label_7;
    QPushButton *btnBool_Write;
    QPushButton *btnBool_Read;
    QLabel *label_8;
    QPushButton *btnFloat16_Write;
    QPushButton *btnFloat16_Read;
    QLineEdit *edit_Float16;
    QLabel *label_9;
    QPushButton *btnFloat_Write;
    QPushButton *btnFloat_Read;
    QLineEdit *edit_Float;
    QLabel *label_19;
    QPushButton *btnDouble_Write;
    QPushButton *btnDouble_Read;
    QLineEdit *edit_Double;
    QLabel *label_20;
    QPushButton *btnStr_Write;
    QPushButton *btnStr_Read;
    QLineEdit *edit_StrOut;
    QLabel *label_21;
    QPushButton *btnQStr_Write;
    QPushButton *btnQStr_Read;
    QLineEdit *edit_QStrOut;
    QLabel *label_22;
    QPushButton *btnFont_Write;
    QPushButton *btnFont_Read;
    QLabel *label_23;
    QPushButton *btnColor_Write;
    QPushButton *btnColor_Read;
    QCheckBox *chkBox_In;
    QCheckBox *chkBox_Out;
    QLineEdit *edit_StrIn;
    QLineEdit *edit_QStrIn;
    QPushButton *btnFont_In;
    QPushButton *btnColor_In;
    QDoubleSpinBox *spin_Double;
    QDoubleSpinBox *spin_Float;
    QDoubleSpinBox *spin_Float16;
    QLineEdit *editFont_Out;
    QLineEdit *editColor_Out;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(534, 683);
        actClearOutput = new QAction(MainWindow);
        actClearOutput->setObjectName(QString::fromUtf8("actClearOutput"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/clean.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClearOutput->setIcon(icon);
        actClose = new QAction(MainWindow);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon1);
        actSaveAll = new QAction(MainWindow);
        actSaveAll->setObjectName(QString::fromUtf8("actSaveAll"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/save.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSaveAll->setIcon(icon2);
        actReadAll = new QAction(MainWindow);
        actReadAll->setObjectName(QString::fromUtf8("actReadAll"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/126.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actReadAll->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        editFilename = new QLineEdit(groupBox);
        editFilename->setObjectName(QString::fromUtf8("editFilename"));

        horizontalLayout->addWidget(editFilename);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radio_LittelEndian = new QRadioButton(groupBox_2);
        radio_LittelEndian->setObjectName(QString::fromUtf8("radio_LittelEndian"));
        radio_LittelEndian->setChecked(true);

        horizontalLayout_2->addWidget(radio_LittelEndian);

        radio_BigEndian = new QRadioButton(groupBox_2);
        radio_BigEndian->setObjectName(QString::fromUtf8("radio_BigEndian"));

        horizontalLayout_2->addWidget(radio_BigEndian);


        horizontalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radio_Single = new QRadioButton(groupBox_3);
        radio_Single->setObjectName(QString::fromUtf8("radio_Single"));
        radio_Single->setChecked(true);

        horizontalLayout_3->addWidget(radio_Single);

        radio_Double = new QRadioButton(groupBox_3);
        radio_Double->setObjectName(QString::fromUtf8("radio_Double"));

        horizontalLayout_3->addWidget(radio_Double);


        horizontalLayout_4->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spin_Int8 = new QSpinBox(groupBox_4);
        spin_Int8->setObjectName(QString::fromUtf8("spin_Int8"));
        spin_Int8->setValue(85);

        gridLayout->addWidget(spin_Int8, 0, 1, 1, 1);

        btnInt8_Write = new QPushButton(groupBox_4);
        btnInt8_Write->setObjectName(QString::fromUtf8("btnInt8_Write"));

        gridLayout->addWidget(btnInt8_Write, 0, 2, 1, 1);

        btnInt8_Read = new QPushButton(groupBox_4);
        btnInt8_Read->setObjectName(QString::fromUtf8("btnInt8_Read"));

        gridLayout->addWidget(btnInt8_Read, 0, 3, 1, 1);

        edit_Int8 = new QLineEdit(groupBox_4);
        edit_Int8->setObjectName(QString::fromUtf8("edit_Int8"));

        gridLayout->addWidget(edit_Int8, 0, 4, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spin_UInt8 = new QSpinBox(groupBox_4);
        spin_UInt8->setObjectName(QString::fromUtf8("spin_UInt8"));
        spin_UInt8->setMaximum(1000);
        spin_UInt8->setValue(236);

        gridLayout->addWidget(spin_UInt8, 1, 1, 1, 1);

        btnUInt8_Write = new QPushButton(groupBox_4);
        btnUInt8_Write->setObjectName(QString::fromUtf8("btnUInt8_Write"));

        gridLayout->addWidget(btnUInt8_Write, 1, 2, 1, 1);

        btnUInt8_Read = new QPushButton(groupBox_4);
        btnUInt8_Read->setObjectName(QString::fromUtf8("btnUInt8_Read"));

        gridLayout->addWidget(btnUInt8_Read, 1, 3, 1, 1);

        edit_UInt8 = new QLineEdit(groupBox_4);
        edit_UInt8->setObjectName(QString::fromUtf8("edit_UInt8"));

        gridLayout->addWidget(edit_UInt8, 1, 4, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spin_Int16 = new QSpinBox(groupBox_4);
        spin_Int16->setObjectName(QString::fromUtf8("spin_Int16"));
        spin_Int16->setMinimum(-10000);
        spin_Int16->setValue(-1522);

        gridLayout->addWidget(spin_Int16, 2, 1, 1, 1);

        btnInt16_Write = new QPushButton(groupBox_4);
        btnInt16_Write->setObjectName(QString::fromUtf8("btnInt16_Write"));

        gridLayout->addWidget(btnInt16_Write, 2, 2, 1, 1);

        btnInt16_Read = new QPushButton(groupBox_4);
        btnInt16_Read->setObjectName(QString::fromUtf8("btnInt16_Read"));

        gridLayout->addWidget(btnInt16_Read, 2, 3, 1, 1);

        edit_Int16 = new QLineEdit(groupBox_4);
        edit_Int16->setObjectName(QString::fromUtf8("edit_Int16"));

        gridLayout->addWidget(edit_Int16, 2, 4, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spin_UInt16 = new QSpinBox(groupBox_4);
        spin_UInt16->setObjectName(QString::fromUtf8("spin_UInt16"));
        spin_UInt16->setMaximum(100000);
        spin_UInt16->setValue(54862);

        gridLayout->addWidget(spin_UInt16, 3, 1, 1, 1);

        btnUInt16_Write = new QPushButton(groupBox_4);
        btnUInt16_Write->setObjectName(QString::fromUtf8("btnUInt16_Write"));

        gridLayout->addWidget(btnUInt16_Write, 3, 2, 1, 1);

        btnUInt16_Read = new QPushButton(groupBox_4);
        btnUInt16_Read->setObjectName(QString::fromUtf8("btnUInt16_Read"));

        gridLayout->addWidget(btnUInt16_Read, 3, 3, 1, 1);

        edit_UInt16 = new QLineEdit(groupBox_4);
        edit_UInt16->setObjectName(QString::fromUtf8("edit_UInt16"));

        gridLayout->addWidget(edit_UInt16, 3, 4, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        spin_Int32 = new QSpinBox(groupBox_4);
        spin_Int32->setObjectName(QString::fromUtf8("spin_Int32"));
        spin_Int32->setMinimum(-10000);
        spin_Int32->setValue(-3546);

        gridLayout->addWidget(spin_Int32, 4, 1, 1, 1);

        btnInt32_Write = new QPushButton(groupBox_4);
        btnInt32_Write->setObjectName(QString::fromUtf8("btnInt32_Write"));

        gridLayout->addWidget(btnInt32_Write, 4, 2, 1, 1);

        btnInt32_Read = new QPushButton(groupBox_4);
        btnInt32_Read->setObjectName(QString::fromUtf8("btnInt32_Read"));

        gridLayout->addWidget(btnInt32_Read, 4, 3, 1, 1);

        edit_Int32 = new QLineEdit(groupBox_4);
        edit_Int32->setObjectName(QString::fromUtf8("edit_Int32"));

        gridLayout->addWidget(edit_Int32, 4, 4, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        spin_Int64 = new QSpinBox(groupBox_4);
        spin_Int64->setObjectName(QString::fromUtf8("spin_Int64"));
        spin_Int64->setMaximum(10000000);
        spin_Int64->setValue(2564851);

        gridLayout->addWidget(spin_Int64, 5, 1, 1, 1);

        btnInt64_Write = new QPushButton(groupBox_4);
        btnInt64_Write->setObjectName(QString::fromUtf8("btnInt64_Write"));

        gridLayout->addWidget(btnInt64_Write, 5, 2, 1, 1);

        btnInt64_Read = new QPushButton(groupBox_4);
        btnInt64_Read->setObjectName(QString::fromUtf8("btnInt64_Read"));

        gridLayout->addWidget(btnInt64_Read, 5, 3, 1, 1);

        edit_Int64 = new QLineEdit(groupBox_4);
        edit_Int64->setObjectName(QString::fromUtf8("edit_Int64"));

        gridLayout->addWidget(edit_Int64, 5, 4, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        btnBool_Write = new QPushButton(groupBox_4);
        btnBool_Write->setObjectName(QString::fromUtf8("btnBool_Write"));

        gridLayout->addWidget(btnBool_Write, 6, 2, 1, 1);

        btnBool_Read = new QPushButton(groupBox_4);
        btnBool_Read->setObjectName(QString::fromUtf8("btnBool_Read"));

        gridLayout->addWidget(btnBool_Read, 6, 3, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        btnFloat16_Write = new QPushButton(groupBox_4);
        btnFloat16_Write->setObjectName(QString::fromUtf8("btnFloat16_Write"));

        gridLayout->addWidget(btnFloat16_Write, 7, 2, 1, 1);

        btnFloat16_Read = new QPushButton(groupBox_4);
        btnFloat16_Read->setObjectName(QString::fromUtf8("btnFloat16_Read"));

        gridLayout->addWidget(btnFloat16_Read, 7, 3, 1, 1);

        edit_Float16 = new QLineEdit(groupBox_4);
        edit_Float16->setObjectName(QString::fromUtf8("edit_Float16"));

        gridLayout->addWidget(edit_Float16, 7, 4, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        btnFloat_Write = new QPushButton(groupBox_4);
        btnFloat_Write->setObjectName(QString::fromUtf8("btnFloat_Write"));

        gridLayout->addWidget(btnFloat_Write, 8, 2, 1, 1);

        btnFloat_Read = new QPushButton(groupBox_4);
        btnFloat_Read->setObjectName(QString::fromUtf8("btnFloat_Read"));

        gridLayout->addWidget(btnFloat_Read, 8, 3, 1, 1);

        edit_Float = new QLineEdit(groupBox_4);
        edit_Float->setObjectName(QString::fromUtf8("edit_Float"));

        gridLayout->addWidget(edit_Float, 8, 4, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_19, 9, 0, 1, 1);

        btnDouble_Write = new QPushButton(groupBox_4);
        btnDouble_Write->setObjectName(QString::fromUtf8("btnDouble_Write"));

        gridLayout->addWidget(btnDouble_Write, 9, 2, 1, 1);

        btnDouble_Read = new QPushButton(groupBox_4);
        btnDouble_Read->setObjectName(QString::fromUtf8("btnDouble_Read"));

        gridLayout->addWidget(btnDouble_Read, 9, 3, 1, 1);

        edit_Double = new QLineEdit(groupBox_4);
        edit_Double->setObjectName(QString::fromUtf8("edit_Double"));

        gridLayout->addWidget(edit_Double, 9, 4, 1, 1);

        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_20, 10, 0, 1, 1);

        btnStr_Write = new QPushButton(groupBox_4);
        btnStr_Write->setObjectName(QString::fromUtf8("btnStr_Write"));

        gridLayout->addWidget(btnStr_Write, 10, 2, 1, 1);

        btnStr_Read = new QPushButton(groupBox_4);
        btnStr_Read->setObjectName(QString::fromUtf8("btnStr_Read"));

        gridLayout->addWidget(btnStr_Read, 10, 3, 1, 1);

        edit_StrOut = new QLineEdit(groupBox_4);
        edit_StrOut->setObjectName(QString::fromUtf8("edit_StrOut"));

        gridLayout->addWidget(edit_StrOut, 10, 4, 1, 1);

        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_21, 11, 0, 1, 1);

        btnQStr_Write = new QPushButton(groupBox_4);
        btnQStr_Write->setObjectName(QString::fromUtf8("btnQStr_Write"));

        gridLayout->addWidget(btnQStr_Write, 11, 2, 1, 1);

        btnQStr_Read = new QPushButton(groupBox_4);
        btnQStr_Read->setObjectName(QString::fromUtf8("btnQStr_Read"));

        gridLayout->addWidget(btnQStr_Read, 11, 3, 1, 1);

        edit_QStrOut = new QLineEdit(groupBox_4);
        edit_QStrOut->setObjectName(QString::fromUtf8("edit_QStrOut"));

        gridLayout->addWidget(edit_QStrOut, 11, 4, 1, 1);

        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_22, 12, 0, 1, 1);

        btnFont_Write = new QPushButton(groupBox_4);
        btnFont_Write->setObjectName(QString::fromUtf8("btnFont_Write"));

        gridLayout->addWidget(btnFont_Write, 12, 2, 1, 1);

        btnFont_Read = new QPushButton(groupBox_4);
        btnFont_Read->setObjectName(QString::fromUtf8("btnFont_Read"));

        gridLayout->addWidget(btnFont_Read, 12, 3, 1, 1);

        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_23, 13, 0, 1, 1);

        btnColor_Write = new QPushButton(groupBox_4);
        btnColor_Write->setObjectName(QString::fromUtf8("btnColor_Write"));

        gridLayout->addWidget(btnColor_Write, 13, 2, 1, 1);

        btnColor_Read = new QPushButton(groupBox_4);
        btnColor_Read->setObjectName(QString::fromUtf8("btnColor_Read"));

        gridLayout->addWidget(btnColor_Read, 13, 3, 1, 1);

        chkBox_In = new QCheckBox(groupBox_4);
        chkBox_In->setObjectName(QString::fromUtf8("chkBox_In"));

        gridLayout->addWidget(chkBox_In, 6, 1, 1, 1);

        chkBox_Out = new QCheckBox(groupBox_4);
        chkBox_Out->setObjectName(QString::fromUtf8("chkBox_Out"));

        gridLayout->addWidget(chkBox_Out, 6, 4, 1, 1);

        edit_StrIn = new QLineEdit(groupBox_4);
        edit_StrIn->setObjectName(QString::fromUtf8("edit_StrIn"));

        gridLayout->addWidget(edit_StrIn, 10, 1, 1, 1);

        edit_QStrIn = new QLineEdit(groupBox_4);
        edit_QStrIn->setObjectName(QString::fromUtf8("edit_QStrIn"));

        gridLayout->addWidget(edit_QStrIn, 11, 1, 1, 1);

        btnFont_In = new QPushButton(groupBox_4);
        btnFont_In->setObjectName(QString::fromUtf8("btnFont_In"));

        gridLayout->addWidget(btnFont_In, 12, 1, 1, 1);

        btnColor_In = new QPushButton(groupBox_4);
        btnColor_In->setObjectName(QString::fromUtf8("btnColor_In"));

        gridLayout->addWidget(btnColor_In, 13, 1, 1, 1);

        spin_Double = new QDoubleSpinBox(groupBox_4);
        spin_Double->setObjectName(QString::fromUtf8("spin_Double"));
        spin_Double->setDecimals(4);
        spin_Double->setMinimum(-500.000000000000000);
        spin_Double->setValue(-456.523599999999988);

        gridLayout->addWidget(spin_Double, 9, 1, 1, 1);

        spin_Float = new QDoubleSpinBox(groupBox_4);
        spin_Float->setObjectName(QString::fromUtf8("spin_Float"));
        spin_Float->setDecimals(4);
        spin_Float->setMaximum(10000.000000000000000);
        spin_Float->setValue(1543.361400000000003);

        gridLayout->addWidget(spin_Float, 8, 1, 1, 1);

        spin_Float16 = new QDoubleSpinBox(groupBox_4);
        spin_Float16->setObjectName(QString::fromUtf8("spin_Float16"));
        spin_Float16->setMaximum(10000.000000000000000);
        spin_Float16->setValue(675.259999999999991);

        gridLayout->addWidget(spin_Float16, 7, 1, 1, 1);

        editFont_Out = new QLineEdit(groupBox_4);
        editFont_Out->setObjectName(QString::fromUtf8("editFont_Out"));

        gridLayout->addWidget(editFont_Out, 12, 4, 1, 1);

        editColor_Out = new QLineEdit(groupBox_4);
        editColor_Out->setObjectName(QString::fromUtf8("editColor_Out"));

        gridLayout->addWidget(editColor_Out, 13, 4, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actClearOutput);
        toolBar->addAction(actSaveAll);
        toolBar->addAction(actReadAll);
        toolBar->addSeparator();
        toolBar->addAction(actClose);

        retranslateUi(MainWindow);
        QObject::connect(actClose, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actClearOutput->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\346\241\206\345\205\250\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actClearOutput->setToolTip(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272\346\225\260\346\215\256\345\220\247\347\274\226\350\276\221\346\241\206\345\205\250\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actSaveAll->setText(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actSaveAll->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actReadAll->setText(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\344\273\216\346\226\207\344\273\266\350\257\273\345\217\226", nullptr));
#if QT_CONFIG(tooltip)
        actReadAll->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\344\273\216\346\226\207\344\273\266\350\257\273\345\217\226", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\347\224\250\346\226\207\344\273\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\255\227\350\212\202\345\272\217", nullptr));
        radio_LittelEndian->setText(QCoreApplication::translate("MainWindow", "LittleEndian", nullptr));
        radio_BigEndian->setText(QCoreApplication::translate("MainWindow", "BigEndian", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\265\256\347\202\271\346\225\260\347\262\276\345\272\246", nullptr));
        radio_Single->setText(QCoreApplication::translate("MainWindow", "SinglePrecision", nullptr));
        radio_Double->setText(QCoreApplication::translate("MainWindow", "DoublePrecision", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\260\206\347\274\226\347\240\201\346\225\260\346\215\256\345\272\217\345\210\227\345\214\226\346\226\271\345\274\217\350\257\273\345\206\231\346\265\213\350\257\225", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "qint8(-128~127)", nullptr));
        btnInt8_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnInt8_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "quint8(0~255)", nullptr));
        btnUInt8_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnUInt8_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "qint16(-32768~32767)", nullptr));
        btnInt16_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnInt16_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "quint16(0~65535)", nullptr));
        btnUInt16_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnUInt16_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "qint32", nullptr));
        btnInt32_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnInt32_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "qint64", nullptr));
        btnInt64_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnInt64_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Bool", nullptr));
        btnBool_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnBool_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "qfloat16", nullptr));
        btnFloat16_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnFloat16_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "float", nullptr));
        btnFloat_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnFloat_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "double", nullptr));
        btnDouble_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnDouble_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "char* string", nullptr));
        btnStr_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnStr_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "QString", nullptr));
        btnQStr_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnQStr_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "QFont", nullptr));
        btnFont_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnFont_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "QColor", nullptr));
        btnColor_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnColor_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        chkBox_In->setText(QCoreApplication::translate("MainWindow", "\345\270\203\345\260\224\345\200\274", nullptr));
        chkBox_Out->setText(QCoreApplication::translate("MainWindow", "\345\270\203\345\260\224\345\200\274", nullptr));
        edit_StrIn->setText(QCoreApplication::translate("MainWindow", "Hello", nullptr));
        edit_QStrIn->setText(QCoreApplication::translate("MainWindow", "HelloQ", nullptr));
        btnFont_In->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\255\227\344\275\223", nullptr));
        btnColor_In->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        editFont_Out->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
        editColor_Out->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
