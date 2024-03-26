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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
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
    QAction *actRecAppend;
    QAction *actRecInsert;
    QAction *actRecDelete;
    QAction *actPhoto;
    QAction *actPhotoClear;
    QAction *actScan;
    QAction *actSubmit;
    QAction *actRevert;
    QAction *actQuit;
    QWidget *centralwidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBoxSort;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboFields;
    QRadioButton *radioBtnAsend;
    QRadioButton *radioButton_2;
    QGroupBox *groupBoxFilter;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *dbComboDep;
    QLabel *label_8;
    QComboBox *dbComboProvince;
    QLabel *label_6;
    QLineEdit *dbEditName;
    QLabel *label_5;
    QLabel *label_7;
    QSpinBox *dbSpinEmpNo;
    QComboBox *dbComboSex;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *dbSpinSalary;
    QDateEdit *dbEditBirth;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *dbLabPhoto;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *dbEditMemo;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(812, 598);
        actOpenDB = new QAction(MainWindow);
        actOpenDB->setObjectName(QString::fromUtf8("actOpenDB"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpenDB->setIcon(icon);
        actRecAppend = new QAction(MainWindow);
        actRecAppend->setObjectName(QString::fromUtf8("actRecAppend"));
        actRecAppend->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecAppend->setIcon(icon1);
        actRecInsert = new QAction(MainWindow);
        actRecInsert->setObjectName(QString::fromUtf8("actRecInsert"));
        actRecInsert->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/306.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecInsert->setIcon(icon2);
        actRecDelete = new QAction(MainWindow);
        actRecDelete->setObjectName(QString::fromUtf8("actRecDelete"));
        actRecDelete->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecDelete->setIcon(icon3);
        actPhoto = new QAction(MainWindow);
        actPhoto->setObjectName(QString::fromUtf8("actPhoto"));
        actPhoto->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/images/00.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        actPhoto->setIcon(icon4);
        actPhotoClear = new QAction(MainWindow);
        actPhotoClear->setObjectName(QString::fromUtf8("actPhotoClear"));
        actPhotoClear->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPhotoClear->setIcon(icon5);
        actScan = new QAction(MainWindow);
        actScan->setObjectName(QString::fromUtf8("actScan"));
        actScan->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/images/up.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actScan->setIcon(icon6);
        actSubmit = new QAction(MainWindow);
        actSubmit->setObjectName(QString::fromUtf8("actSubmit"));
        actSubmit->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/images/save1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSubmit->setIcon(icon7);
        actRevert = new QAction(MainWindow);
        actRevert->setObjectName(QString::fromUtf8("actRevert"));
        actRevert->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/images/ubdo.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRevert->setIcon(icon8);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 10, 776, 518));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBoxSort = new QGroupBox(groupBox);
        groupBoxSort->setObjectName(QString::fromUtf8("groupBoxSort"));
        groupBoxSort->setEnabled(false);
        horizontalLayout = new QHBoxLayout(groupBoxSort);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBoxSort);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboFields = new QComboBox(groupBoxSort);
        comboFields->setObjectName(QString::fromUtf8("comboFields"));

        horizontalLayout->addWidget(comboFields);

        radioBtnAsend = new QRadioButton(groupBoxSort);
        radioBtnAsend->setObjectName(QString::fromUtf8("radioBtnAsend"));

        horizontalLayout->addWidget(radioBtnAsend);

        radioButton_2 = new QRadioButton(groupBoxSort);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        horizontalLayout_3->addWidget(groupBoxSort);

        groupBoxFilter = new QGroupBox(groupBox);
        groupBoxFilter->setObjectName(QString::fromUtf8("groupBoxFilter"));
        groupBoxFilter->setEnabled(false);
        horizontalLayout_2 = new QHBoxLayout(groupBoxFilter);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_3 = new QRadioButton(groupBoxFilter);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBoxFilter);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout_2->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(groupBoxFilter);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        horizontalLayout_2->addWidget(radioButton_5);


        horizontalLayout_3->addWidget(groupBoxFilter);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(groupBox_4);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addWidget(groupBox_4);

        splitter->addWidget(groupBox);
        groupBox_5 = new QGroupBox(splitter);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout = new QGridLayout(groupBox_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        dbComboDep = new QComboBox(groupBox_6);
        dbComboDep->addItem(QString());
        dbComboDep->setObjectName(QString::fromUtf8("dbComboDep"));

        gridLayout->addWidget(dbComboDep, 9, 1, 1, 1);

        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 10, 0, 1, 1);

        dbComboProvince = new QComboBox(groupBox_6);
        dbComboProvince->addItem(QString());
        dbComboProvince->setObjectName(QString::fromUtf8("dbComboProvince"));

        gridLayout->addWidget(dbComboProvince, 6, 1, 3, 1);

        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        dbEditName = new QLineEdit(groupBox_6);
        dbEditName->setObjectName(QString::fromUtf8("dbEditName"));

        gridLayout->addWidget(dbEditName, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 8, 0, 2, 1);

        dbSpinEmpNo = new QSpinBox(groupBox_6);
        dbSpinEmpNo->setObjectName(QString::fromUtf8("dbSpinEmpNo"));
        dbSpinEmpNo->setMaximum(9999);

        gridLayout->addWidget(dbSpinEmpNo, 0, 1, 1, 1);

        dbComboSex = new QComboBox(groupBox_6);
        dbComboSex->addItem(QString());
        dbComboSex->setObjectName(QString::fromUtf8("dbComboSex"));

        gridLayout->addWidget(dbComboSex, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        dbSpinSalary = new QSpinBox(groupBox_6);
        dbSpinSalary->setObjectName(QString::fromUtf8("dbSpinSalary"));
        dbSpinSalary->setMaximum(1000000);
        dbSpinSalary->setValue(1000);

        gridLayout->addWidget(dbSpinSalary, 10, 1, 1, 1);

        dbEditBirth = new QDateEdit(groupBox_6);
        dbEditBirth->setObjectName(QString::fromUtf8("dbEditBirth"));
        dbEditBirth->setDateTime(QDateTime(QDate(2017, 2, 19), QTime(16, 0, 0)));

        gridLayout->addWidget(dbEditBirth, 4, 1, 1, 1);


        horizontalLayout_4->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_3 = new QVBoxLayout(groupBox_7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dbLabPhoto = new QLabel(groupBox_7);
        dbLabPhoto->setObjectName(QString::fromUtf8("dbLabPhoto"));

        verticalLayout_3->addWidget(dbLabPhoto);


        horizontalLayout_4->addWidget(groupBox_7);


        verticalLayout_4->addLayout(horizontalLayout_4);

        groupBox_8 = new QGroupBox(groupBox_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_8);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        dbEditMemo = new QPlainTextEdit(groupBox_8);
        dbEditMemo->setObjectName(QString::fromUtf8("dbEditMemo"));

        horizontalLayout_5->addWidget(dbEditMemo);


        verticalLayout_4->addWidget(groupBox_8);

        splitter->addWidget(groupBox_5);
        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        toolBar->addAction(actOpenDB);
        toolBar->addSeparator();
        toolBar->addAction(actRecAppend);
        toolBar->addAction(actRecInsert);
        toolBar->addAction(actRecDelete);
        toolBar->addSeparator();
        toolBar->addAction(actPhoto);
        toolBar->addAction(actPhotoClear);
        toolBar->addAction(actScan);
        toolBar->addSeparator();
        toolBar->addAction(actSubmit);
        toolBar->addAction(actRevert);
        toolBar->addSeparator();
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actOpenDB->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actOpenDB->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#if QT_CONFIG(tooltip)
        actRecAppend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        actRecInsert->setToolTip(QCoreApplication::translate("MainWindow", "\345\207\272\345\205\245\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actRecDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actPhoto->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        actPhoto->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actPhotoClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        actPhotoClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actScan->setText(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
#if QT_CONFIG(tooltip)
        actScan->setToolTip(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
#endif // QT_CONFIG(tooltip)
        actSubmit->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actSubmit->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actRevert->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
#if QT_CONFIG(tooltip)
        actRevert->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        groupBoxSort->setTitle(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\345\255\227\346\256\265", nullptr));
        radioBtnAsend->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        groupBoxFilter->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\277\207\346\273\244", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "\345\205\250\346\230\276\347\244\272", nullptr));
        groupBox_4->setTitle(QString());
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        groupBox_6->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\217\267", nullptr));
        dbComboDep->setItemText(0, QCoreApplication::translate("MainWindow", "\351\224\200\345\224\256\351\203\250", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "\345\267\245\350\265\204", nullptr));
        dbComboProvince->setItemText(0, QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\347\234\201\344\273\275", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\203\250\351\227\250", nullptr));
        dbComboSex->setItemText(0, QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207", nullptr));
        dbLabPhoto->setText(QCoreApplication::translate("MainWindow", "dbLabPhoto", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\345\244\207\346\263\250", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
