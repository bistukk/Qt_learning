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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen_IODevice;
    QAction *actSave_IODevice;
    QAction *actSave_TextSafe;
    QAction *actOpen_TextStream;
    QAction *actSave_TextStreamSve;
    QAction *actQuit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *textEditDevice;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *textEditStream;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(516, 479);
        actOpen_IODevice = new QAction(MainWindow);
        actOpen_IODevice->setObjectName(QString::fromUtf8("actOpen_IODevice"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/804.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_IODevice->setIcon(icon);
        actSave_IODevice = new QAction(MainWindow);
        actSave_IODevice->setObjectName(QString::fromUtf8("actSave_IODevice"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_IODevice->setIcon(icon1);
        actSave_TextSafe = new QAction(MainWindow);
        actSave_TextSafe->setObjectName(QString::fromUtf8("actSave_TextSafe"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/066.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_TextSafe->setIcon(icon2);
        actOpen_TextStream = new QAction(MainWindow);
        actOpen_TextStream->setObjectName(QString::fromUtf8("actOpen_TextStream"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_TextStream->setIcon(icon3);
        actSave_TextStreamSve = new QAction(MainWindow);
        actSave_TextStreamSve->setObjectName(QString::fromUtf8("actSave_TextStreamSve"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/images/135.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_TextStreamSve->setIcon(icon4);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 501, 411));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEditDevice = new QPlainTextEdit(tab);
        textEditDevice->setObjectName(QString::fromUtf8("textEditDevice"));

        verticalLayout->addWidget(textEditDevice);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEditStream = new QPlainTextEdit(tab_2);
        textEditStream->setObjectName(QString::fromUtf8("textEditStream"));

        verticalLayout_2->addWidget(textEditStream);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/images/090.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon7, QString());
        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        toolBar->addAction(actOpen_IODevice);
        toolBar->addAction(actSave_IODevice);
        toolBar->addAction(actSave_TextSafe);
        toolBar->addSeparator();
        toolBar->addAction(actOpen_TextStream);
        toolBar->addAction(actSave_TextStreamSve);
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actOpen_IODevice->setText(QCoreApplication::translate("MainWindow", "QFile\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actOpen_IODevice->setToolTip(QCoreApplication::translate("MainWindow", "\347\224\250QFile\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actSave_IODevice->setText(QCoreApplication::translate("MainWindow", "QFile\345\217\246\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actSave_IODevice->setToolTip(QCoreApplication::translate("MainWindow", "\347\224\250QFile\345\217\246\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actSave_TextSafe->setText(QCoreApplication::translate("MainWindow", "QSaveFile\345\217\246\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actSave_TextSafe->setToolTip(QCoreApplication::translate("MainWindow", "\347\224\250QSave\345\217\246\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actOpen_TextStream->setText(QCoreApplication::translate("MainWindow", "QTextStream\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actOpen_TextStream->setToolTip(QCoreApplication::translate("MainWindow", "\347\224\250QTextStream\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actSave_TextStreamSve->setText(QCoreApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", nullptr));
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\223\215\344\275\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "QTextSteam\346\223\215\344\275\234", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
