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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpenDB;
    QAction *actQuit;
    QAction *actRecFirst;
    QAction *actRecPrevious;
    QAction *actRecNext;
    QAction *actRecLast;
    QWidget *centralwidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *dbSpinEmpNo;
    QLabel *label_2;
    QLineEdit *dbEditName;
    QLabel *label_3;
    QComboBox *dbComboSex;
    QLabel *label_4;
    QDateEdit *dbEditBirth;
    QLabel *label_5;
    QComboBox *dbComboProvince;
    QLabel *label_6;
    QComboBox *dbComboDep;
    QLabel *label_7;
    QDoubleSpinBox *dbSpinSalary;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *dbLabPhoto;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *dbEditMemo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(631, 600);
        actOpenDB = new QAction(MainWindow);
        actOpenDB->setObjectName(QString::fromUtf8("actOpenDB"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpenDB->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actRecFirst = new QAction(MainWindow);
        actRecFirst->setObjectName(QString::fromUtf8("actRecFirst"));
        actRecFirst->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/616.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecFirst->setIcon(icon2);
        actRecPrevious = new QAction(MainWindow);
        actRecPrevious->setObjectName(QString::fromUtf8("actRecPrevious"));
        actRecPrevious->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/308.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecPrevious->setIcon(icon3);
        actRecNext = new QAction(MainWindow);
        actRecNext->setObjectName(QString::fromUtf8("actRecNext"));
        actRecNext->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/images/314.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecNext->setIcon(icon4);
        actRecLast = new QAction(MainWindow);
        actRecLast->setObjectName(QString::fromUtf8("actRecLast"));
        actRecLast->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/images/630.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecLast->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 10, 593, 514));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        splitter->addWidget(groupBox);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dbSpinEmpNo = new QSpinBox(groupBox_4);
        dbSpinEmpNo->setObjectName(QString::fromUtf8("dbSpinEmpNo"));

        gridLayout->addWidget(dbSpinEmpNo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        dbEditName = new QLineEdit(groupBox_4);
        dbEditName->setObjectName(QString::fromUtf8("dbEditName"));

        gridLayout->addWidget(dbEditName, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dbComboSex = new QComboBox(groupBox_4);
        dbComboSex->addItem(QString());
        dbComboSex->addItem(QString());
        dbComboSex->setObjectName(QString::fromUtf8("dbComboSex"));

        gridLayout->addWidget(dbComboSex, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dbEditBirth = new QDateEdit(groupBox_4);
        dbEditBirth->setObjectName(QString::fromUtf8("dbEditBirth"));
        dbEditBirth->setDateTime(QDateTime(QDate(2017, 2, 20), QTime(0, 0, 0)));

        gridLayout->addWidget(dbEditBirth, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        dbComboProvince = new QComboBox(groupBox_4);
        dbComboProvince->addItem(QString());
        dbComboProvince->setObjectName(QString::fromUtf8("dbComboProvince"));

        gridLayout->addWidget(dbComboProvince, 4, 1, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        dbComboDep = new QComboBox(groupBox_4);
        dbComboDep->addItem(QString());
        dbComboDep->setObjectName(QString::fromUtf8("dbComboDep"));

        gridLayout->addWidget(dbComboDep, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        dbSpinSalary = new QDoubleSpinBox(groupBox_4);
        dbSpinSalary->setObjectName(QString::fromUtf8("dbSpinSalary"));
        dbSpinSalary->setMaximum(10000000.000000000000000);
        dbSpinSalary->setValue(1000.000000000000000);

        gridLayout->addWidget(dbSpinSalary, 6, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dbLabPhoto = new QLabel(groupBox_3);
        dbLabPhoto->setObjectName(QString::fromUtf8("dbLabPhoto"));

        verticalLayout_2->addWidget(dbLabPhoto);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dbEditMemo = new QPlainTextEdit(groupBox_5);
        dbEditMemo->setObjectName(QString::fromUtf8("dbEditMemo"));

        verticalLayout_3->addWidget(dbEditMemo);


        verticalLayout_4->addWidget(groupBox_5);

        splitter->addWidget(widget);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actOpenDB);
        toolBar->addAction(actRecFirst);
        toolBar->addAction(actRecPrevious);
        toolBar->addAction(actRecNext);
        toolBar->addAction(actRecLast);
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actOpenDB->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
#if QT_CONFIG(tooltip)
        actOpenDB->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecFirst->setText(QCoreApplication::translate("MainWindow", "\351\246\226\350\256\260\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actRecFirst->setToolTip(QCoreApplication::translate("MainWindow", "\347\247\273\345\210\260\351\246\226\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecPrevious->setText(QCoreApplication::translate("MainWindow", "\345\211\215\344\270\200\347\272\252\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actRecPrevious->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\215\344\270\200\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecNext->setText(QCoreApplication::translate("MainWindow", "\345\220\216\344\270\200\350\256\260\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actRecNext->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\216\344\270\200\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecLast->setText(QCoreApplication::translate("MainWindow", "\345\260\276\350\256\260\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actRecLast->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\276\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211\350\256\260\345\275\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        groupBox_4->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        dbComboSex->setItemText(0, QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        dbComboSex->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\347\234\201\344\273\275", nullptr));
        dbComboProvince->setItemText(0, QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\351\203\250\351\227\250", nullptr));
        dbComboDep->setItemText(0, QCoreApplication::translate("MainWindow", "\351\224\200\345\224\256\351\203\250", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "\345\267\245\350\265\204", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207", nullptr));
        dbLabPhoto->setText(QCoreApplication::translate("MainWindow", "dbLabPhoto", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\244\207\346\263\250", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
