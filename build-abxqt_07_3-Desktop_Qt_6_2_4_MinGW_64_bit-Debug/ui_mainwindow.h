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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actWidgetInsite;
    QAction *actWidget;
    QAction *actWindowInsite;
    QAction *actWindow;
    QAction *actQuit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QStatusBar *statusbar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(516, 427);
        actWidgetInsite = new QAction(MainWindow);
        actWidgetInsite->setObjectName(QString::fromUtf8("actWidgetInsite"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actWidgetInsite->setIcon(icon);
        actWidget = new QAction(MainWindow);
        actWidget->setObjectName(QString::fromUtf8("actWidget"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/804.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actWidget->setIcon(icon1);
        actWindowInsite = new QAction(MainWindow);
        actWindowInsite->setObjectName(QString::fromUtf8("actWindowInsite"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actWindowInsite->setIcon(icon2);
        actWindow = new QAction(MainWindow);
        actWindow->setObjectName(QString::fromUtf8("actWindow"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actWindow->setIcon(icon3);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(100, 20, 301, 261));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actWidgetInsite);
        mainToolBar->addAction(actWidget);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actWindowInsite);
        mainToolBar->addAction(actWindow);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actWidgetInsite->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Widget", nullptr));
#if QT_CONFIG(tooltip)
        actWidgetInsite->setToolTip(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#endif // QT_CONFIG(tooltip)
        actWidget->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        actWidget->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272Widget\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actWindowInsite->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        actWindowInsite->setToolTip(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#endif // QT_CONFIG(tooltip)
        actWindow->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        actWindow->setToolTip(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Page", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
