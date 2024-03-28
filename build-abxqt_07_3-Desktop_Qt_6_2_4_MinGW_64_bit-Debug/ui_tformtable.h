/********************************************************************************
** Form generated from reading UI file 'tformtable.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFORMTABLE_H
#define UI_TFORMTABLE_H

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

class Ui_TFormTable
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

    void setupUi(QMainWindow *TFormTable)
    {
        if (TFormTable->objectName().isEmpty())
            TFormTable->setObjectName(QString::fromUtf8("TFormTable"));
        TFormTable->resize(437, 439);
        actTab_SetSize = new QAction(TFormTable);
        actTab_SetSize->setObjectName(QString::fromUtf8("actTab_SetSize"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetSize->setIcon(icon);
        actTab_SetHeader = new QAction(TFormTable);
        actTab_SetHeader->setObjectName(QString::fromUtf8("actTab_SetHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetHeader->setIcon(icon1);
        actFile_Quit = new QAction(TFormTable);
        actFile_Quit->setObjectName(QString::fromUtf8("actFile_Quit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Quit->setIcon(icon2);
        actTab_Locate = new QAction(TFormTable);
        actTab_Locate->setObjectName(QString::fromUtf8("actTab_Locate"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_Locate->setIcon(icon3);
        centralwidget = new QWidget(TFormTable);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 30, 341, 311));
        TFormTable->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TFormTable);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TFormTable->setStatusBar(statusbar);
        toolBar = new QToolBar(TFormTable);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TFormTable->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actTab_SetSize);
        toolBar->addAction(actTab_SetHeader);
        toolBar->addAction(actTab_Locate);
        toolBar->addAction(actFile_Quit);

        retranslateUi(TFormTable);
        QObject::connect(actFile_Quit, &QAction::triggered, TFormTable, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(TFormTable);
    } // setupUi

    void retranslateUi(QMainWindow *TFormTable)
    {
        TFormTable->setWindowTitle(QCoreApplication::translate("TFormTable", "MainWindow", nullptr));
        actTab_SetSize->setText(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
#if QT_CONFIG(tooltip)
        actTab_SetSize->setToolTip(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\347\232\204\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
#endif // QT_CONFIG(tooltip)
        actTab_SetHeader->setText(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        actTab_SetHeader->setToolTip(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
#endif // QT_CONFIG(tooltip)
        actFile_Quit->setText(QCoreApplication::translate("TFormTable", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Quit->setToolTip(QCoreApplication::translate("TFormTable", "\351\200\200\345\207\272\346\234\254\350\275\257\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actTab_Locate->setText(QCoreApplication::translate("TFormTable", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
#if QT_CONFIG(tooltip)
        actTab_Locate->setToolTip(QCoreApplication::translate("TFormTable", "\345\256\232\344\275\215\345\210\260\346\237\220\344\270\252\345\215\225\345\205\203\346\240\274", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("TFormTable", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TFormTable: public Ui_TFormTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMTABLE_H
