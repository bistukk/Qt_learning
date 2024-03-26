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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actTab_SetSize;
    QAction *actTab_SetHeader;
    QAction *actFile_Quit;
    QAction *actTab_Locate;
    QWidget *centralwidget;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(437, 439);
        actTab_SetSize = new QAction(MainWindow);
        actTab_SetSize->setObjectName(QString::fromUtf8("actTab_SetSize"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/130.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetSize->setIcon(icon);
        actTab_SetHeader = new QAction(MainWindow);
        actTab_SetHeader->setObjectName(QString::fromUtf8("actTab_SetHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/124.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetHeader->setIcon(icon1);
        actFile_Quit = new QAction(MainWindow);
        actFile_Quit->setObjectName(QString::fromUtf8("actFile_Quit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Quit->setIcon(icon2);
        actTab_Locate = new QAction(MainWindow);
        actTab_Locate->setObjectName(QString::fromUtf8("actTab_Locate"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/304.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_Locate->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 30, 341, 311));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actTab_SetSize);
        toolBar->addAction(actTab_SetHeader);
        toolBar->addAction(actTab_Locate);
        toolBar->addAction(actFile_Quit);

        retranslateUi(MainWindow);
        QObject::connect(actFile_Quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actTab_SetSize->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
#if QT_CONFIG(tooltip)
        actTab_SetSize->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\347\232\204\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
#endif // QT_CONFIG(tooltip)
        actTab_SetHeader->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        actTab_SetHeader->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
#endif // QT_CONFIG(tooltip)
        actFile_Quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\350\275\257\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actTab_Locate->setText(QCoreApplication::translate("MainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
#if QT_CONFIG(tooltip)
        actTab_Locate->setToolTip(QCoreApplication::translate("MainWindow", "\345\256\232\344\275\215\345\210\260\346\237\220\344\270\252\345\215\225\345\205\203\346\240\274", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
