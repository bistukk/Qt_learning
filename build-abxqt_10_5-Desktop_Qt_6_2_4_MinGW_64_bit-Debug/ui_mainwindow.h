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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <tgraphicsview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actZoomIn;
    QAction *actZoomOut;
    QAction *actRestore;
    QAction *actRotateLeft;
    QAction *actRotateRight;
    QAction *actEdit_Font;
    QAction *actEdit_Back;
    QAction *actGroup;
    QAction *actGroupBreak;
    QAction *actEdit_Delete;
    QAction *actHelp;
    QAction *actQuit;
    QAction *actItem_Rect;
    QAction *actItem_Ellipse;
    QAction *actItem_Round;
    QAction *actItem_Triangle;
    QAction *actItem_Trapezoid;
    QAction *actItem_Line;
    QAction *actItem_Text;
    QWidget *centralwidget;
    TGraphicsView *view;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(598, 464);
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName(QString::fromUtf8("actZoomIn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomIn->setIcon(icon);
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QString::fromUtf8("actZoomOut"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomOut->setIcon(icon1);
        actRestore = new QAction(MainWindow);
        actRestore->setObjectName(QString::fromUtf8("actRestore"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/420.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRestore->setIcon(icon2);
        actRotateLeft = new QAction(MainWindow);
        actRotateLeft->setObjectName(QString::fromUtf8("actRotateLeft"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/rotateleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRotateLeft->setIcon(icon3);
        actRotateRight = new QAction(MainWindow);
        actRotateRight->setObjectName(QString::fromUtf8("actRotateRight"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRotateRight->setIcon(icon4);
        actEdit_Font = new QAction(MainWindow);
        actEdit_Font->setObjectName(QString::fromUtf8("actEdit_Font"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/528.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Font->setIcon(icon5);
        actEdit_Back = new QAction(MainWindow);
        actEdit_Back->setObjectName(QString::fromUtf8("actEdit_Back"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/526.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Back->setIcon(icon6);
        actGroup = new QAction(MainWindow);
        actGroup->setObjectName(QString::fromUtf8("actGroup"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/UNGROUP.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actGroup->setIcon(icon7);
        actGroupBreak = new QAction(MainWindow);
        actGroupBreak->setObjectName(QString::fromUtf8("actGroupBreak"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actGroupBreak->setIcon(icon8);
        actEdit_Delete = new QAction(MainWindow);
        actEdit_Delete->setObjectName(QString::fromUtf8("actEdit_Delete"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/108.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Delete->setIcon(icon9);
        actHelp = new QAction(MainWindow);
        actHelp->setObjectName(QString::fromUtf8("actHelp"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/BEBULB.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actHelp->setIcon(icon10);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon11);
        actItem_Rect = new QAction(MainWindow);
        actItem_Rect->setObjectName(QString::fromUtf8("actItem_Rect"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/BUTTON.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Rect->setIcon(icon12);
        actItem_Ellipse = new QAction(MainWindow);
        actItem_Ellipse->setObjectName(QString::fromUtf8("actItem_Ellipse"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/ELLIPSE.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Ellipse->setIcon(icon13);
        actItem_Round = new QAction(MainWindow);
        actItem_Round->setObjectName(QString::fromUtf8("actItem_Round"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/images/08.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Round->setIcon(icon14);
        actItem_Triangle = new QAction(MainWindow);
        actItem_Triangle->setObjectName(QString::fromUtf8("actItem_Triangle"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/images/Icon1242.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Triangle->setIcon(icon15);
        actItem_Trapezoid = new QAction(MainWindow);
        actItem_Trapezoid->setObjectName(QString::fromUtf8("actItem_Trapezoid"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/images/FREEFORM.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Trapezoid->setIcon(icon16);
        actItem_Line = new QAction(MainWindow);
        actItem_Line->setObjectName(QString::fromUtf8("actItem_Line"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/images/LINE.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Line->setIcon(icon17);
        actItem_Text = new QAction(MainWindow);
        actItem_Text->setObjectName(QString::fromUtf8("actItem_Text"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/images/800.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Text->setIcon(icon18);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        view = new TGraphicsView(centralwidget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(40, 30, 411, 321));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        toolBar_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_2);

        toolBar->addAction(actZoomIn);
        toolBar->addAction(actZoomOut);
        toolBar->addAction(actRestore);
        toolBar->addSeparator();
        toolBar->addAction(actRotateLeft);
        toolBar->addAction(actRotateRight);
        toolBar->addAction(actEdit_Font);
        toolBar->addAction(actEdit_Back);
        toolBar->addAction(actGroup);
        toolBar->addAction(actGroupBreak);
        toolBar->addSeparator();
        toolBar->addAction(actEdit_Delete);
        toolBar->addSeparator();
        toolBar->addAction(actHelp);
        toolBar->addAction(actQuit);
        toolBar_2->addAction(actItem_Rect);
        toolBar_2->addAction(actItem_Ellipse);
        toolBar_2->addAction(actItem_Round);
        toolBar_2->addAction(actItem_Triangle);
        toolBar_2->addAction(actItem_Trapezoid);
        toolBar_2->addAction(actItem_Line);
        toolBar_2->addAction(actItem_Text);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_CONFIG(tooltip)
        actZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actRestore->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
#if QT_CONFIG(tooltip)
        actRestore->setToolTip(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
#endif // QT_CONFIG(tooltip)
        actRotateLeft->setText(QCoreApplication::translate("MainWindow", "\345\267\246\346\227\213\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        actRotateLeft->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\346\227\213\350\275\254", nullptr));
#endif // QT_CONFIG(tooltip)
        actRotateRight->setText(QCoreApplication::translate("MainWindow", "\345\217\263\346\227\213\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        actRotateRight->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\263\346\227\213\350\275\254", nullptr));
#endif // QT_CONFIG(tooltip)
        actEdit_Font->setText(QCoreApplication::translate("MainWindow", "\345\211\215\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Font->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\344\272\216\346\234\200\345\211\215\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actEdit_Back->setText(QCoreApplication::translate("MainWindow", "\345\220\216\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Back->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\344\272\216\346\234\200\345\220\216\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actGroup->setText(QCoreApplication::translate("MainWindow", "\347\273\204\345\220\210", nullptr));
#if QT_CONFIG(tooltip)
        actGroup->setToolTip(QCoreApplication::translate("MainWindow", "\347\273\204\345\220\210", nullptr));
#endif // QT_CONFIG(tooltip)
        actGroupBreak->setText(QCoreApplication::translate("MainWindow", "\346\211\223\346\225\243", nullptr));
#if QT_CONFIG(tooltip)
        actGroupBreak->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\346\225\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actEdit_Delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Delete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#endif // QT_CONFIG(tooltip)
        actHelp->setText(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
#if QT_CONFIG(tooltip)
        actHelp->setToolTip(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Rect->setText(QCoreApplication::translate("MainWindow", "\347\237\251\345\275\242", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Rect->setToolTip(QCoreApplication::translate("MainWindow", "\347\237\251\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Ellipse->setText(QCoreApplication::translate("MainWindow", "\346\244\255\345\234\206", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Ellipse->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\244\255\345\234\206\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Round->setText(QCoreApplication::translate("MainWindow", "\345\234\206\345\275\242", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Round->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\206\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Triangle->setText(QCoreApplication::translate("MainWindow", "\344\270\211\350\247\222\345\275\242", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Triangle->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\211\350\247\222\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Trapezoid->setText(QCoreApplication::translate("MainWindow", "\346\242\257\345\275\242", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Trapezoid->setToolTip(QCoreApplication::translate("MainWindow", "\346\242\257\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Line->setText(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Line->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\264\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Text->setText(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Text->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
