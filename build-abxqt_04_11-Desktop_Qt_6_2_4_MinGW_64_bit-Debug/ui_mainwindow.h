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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actListIni;
    QAction *actListClear;
    QAction *actListInsert;
    QAction *actListappend;
    QAction *actListDelete;
    QAction *actQuit;
    QAction *actSelAll;
    QAction *actSelNone;
    QAction *actSelInvs;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QToolButton *tBtnListIni;
    QToolButton *tBtnListClear;
    QToolButton *tBtnListInsert;
    QToolButton *tBtnListAppend;
    QToolButton *tBtnListDelete;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QRadioButton *chkBoxSorting;
    QToolButton *tBtnSortAsc;
    QToolButton *tBtnSortDes;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *tBtnClearText;
    QToolButton *tBtnAddLine;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *editCurrntItemText;
    QCheckBox *chkListEditable;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *tBtnSeleltItem;
    QToolButton *tBtnSelALL;
    QToolButton *tBtnSelNone;
    QToolButton *tBtnSelInvs;
    QListWidget *listWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(641, 451);
        actListIni = new QAction(MainWindow);
        actListIni->setObjectName(QString::fromUtf8("actListIni"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListIni->setIcon(icon);
        actListClear = new QAction(MainWindow);
        actListClear->setObjectName(QString::fromUtf8("actListClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListClear->setIcon(icon1);
        actListInsert = new QAction(MainWindow);
        actListInsert->setObjectName(QString::fromUtf8("actListInsert"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/318.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListInsert->setIcon(icon2);
        actListappend = new QAction(MainWindow);
        actListappend->setObjectName(QString::fromUtf8("actListappend"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListappend->setIcon(icon3);
        actListDelete = new QAction(MainWindow);
        actListDelete->setObjectName(QString::fromUtf8("actListDelete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListDelete->setIcon(icon4);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon5);
        actSelAll = new QAction(MainWindow);
        actSelAll->setObjectName(QString::fromUtf8("actSelAll"));
        actSelNone = new QAction(MainWindow);
        actSelNone->setObjectName(QString::fromUtf8("actSelNone"));
        actSelInvs = new QAction(MainWindow);
        actSelInvs->setObjectName(QString::fromUtf8("actSelInvs"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMaximumSize(QSize(200, 16777215));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 153, 284));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tBtnListIni = new QToolButton(page);
        tBtnListIni->setObjectName(QString::fromUtf8("tBtnListIni"));
        tBtnListIni->setAutoRaise(true);

        gridLayout->addWidget(tBtnListIni, 0, 0, 1, 1);

        tBtnListClear = new QToolButton(page);
        tBtnListClear->setObjectName(QString::fromUtf8("tBtnListClear"));
        tBtnListClear->setAutoRaise(true);

        gridLayout->addWidget(tBtnListClear, 1, 0, 1, 1);

        tBtnListInsert = new QToolButton(page);
        tBtnListInsert->setObjectName(QString::fromUtf8("tBtnListInsert"));
        tBtnListInsert->setAutoRaise(true);

        gridLayout->addWidget(tBtnListInsert, 2, 0, 1, 1);

        tBtnListAppend = new QToolButton(page);
        tBtnListAppend->setObjectName(QString::fromUtf8("tBtnListAppend"));
        tBtnListAppend->setAutoRaise(true);

        gridLayout->addWidget(tBtnListAppend, 3, 0, 1, 1);

        tBtnListDelete = new QToolButton(page);
        tBtnListDelete->setObjectName(QString::fromUtf8("tBtnListDelete"));
        tBtnListDelete->setAutoRaise(true);

        gridLayout->addWidget(tBtnListDelete, 4, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/410.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon6, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 153, 284));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chkBoxSorting = new QRadioButton(page_2);
        chkBoxSorting->setObjectName(QString::fromUtf8("chkBoxSorting"));
        QFont font;
        font.setPointSize(12);
        chkBoxSorting->setFont(font);

        gridLayout_2->addWidget(chkBoxSorting, 0, 0, 1, 1);

        tBtnSortAsc = new QToolButton(page_2);
        tBtnSortAsc->setObjectName(QString::fromUtf8("tBtnSortAsc"));
        tBtnSortAsc->setFont(font);
        tBtnSortAsc->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnSortAsc->setArrowType(Qt::UpArrow);

        gridLayout_2->addWidget(tBtnSortAsc, 1, 0, 1, 1);

        tBtnSortDes = new QToolButton(page_2);
        tBtnSortDes->setObjectName(QString::fromUtf8("tBtnSortDes"));
        tBtnSortDes->setFont(font);
        tBtnSortDes->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnSortDes->setArrowType(Qt::DownArrow);

        gridLayout_2->addWidget(tBtnSortDes, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 162, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/408.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_2, icon7, QString::fromUtf8("\345\210\227\350\241\250\346\216\222\345\272\217"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 154, 270));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tBtnClearText = new QToolButton(page_3);
        tBtnClearText->setObjectName(QString::fromUtf8("tBtnClearText"));

        horizontalLayout_4->addWidget(tBtnClearText);

        tBtnAddLine = new QToolButton(page_3);
        tBtnAddLine->setObjectName(QString::fromUtf8("tBtnAddLine"));

        horizontalLayout_4->addWidget(tBtnAddLine);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(page_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_3->addWidget(plainTextEdit, 1, 0, 1, 1);

        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/412.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon8, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));
        splitter->addWidget(toolBox);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        editCurrntItemText = new QLineEdit(groupBox);
        editCurrntItemText->setObjectName(QString::fromUtf8("editCurrntItemText"));

        horizontalLayout_2->addWidget(editCurrntItemText);

        chkListEditable = new QCheckBox(groupBox);
        chkListEditable->setObjectName(QString::fromUtf8("chkListEditable"));
        chkListEditable->setChecked(true);

        horizontalLayout_2->addWidget(chkListEditable);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tBtnSeleltItem = new QToolButton(groupBox);
        tBtnSeleltItem->setObjectName(QString::fromUtf8("tBtnSeleltItem"));
        tBtnSeleltItem->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout_3->addWidget(tBtnSeleltItem);

        tBtnSelALL = new QToolButton(groupBox);
        tBtnSelALL->setObjectName(QString::fromUtf8("tBtnSelALL"));

        horizontalLayout_3->addWidget(tBtnSelALL);

        tBtnSelNone = new QToolButton(groupBox);
        tBtnSelNone->setObjectName(QString::fromUtf8("tBtnSelNone"));

        horizontalLayout_3->addWidget(tBtnSelNone);

        tBtnSelInvs = new QToolButton(groupBox);
        tBtnSelInvs->setObjectName(QString::fromUtf8("tBtnSelInvs"));

        horizontalLayout_3->addWidget(tBtnSelInvs);


        verticalLayout->addLayout(horizontalLayout_3);

        listWidget = new QListWidget(groupBox);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/check2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        __qlistwidgetitem->setIcon(icon9);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        __qlistwidgetitem1->setIcon(icon9);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout->addWidget(listWidget);

        splitter->addWidget(groupBox);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actListIni);
        toolBar->addAction(actListClear);
        toolBar->addAction(actListInsert);
        toolBar->addAction(actListappend);
        toolBar->addAction(actListDelete);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actListIni->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actListIni->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListIni->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actListClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actListClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actListInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListInsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListInsert->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actListappend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListappend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListappend->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actListDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actSelAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        actSelNone->setText(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
        actSelInvs->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
        tBtnListIni->setText(QCoreApplication::translate("MainWindow", "tBtnListIni", nullptr));
        tBtnListClear->setText(QCoreApplication::translate("MainWindow", "tBtnListClear", nullptr));
        tBtnListInsert->setText(QCoreApplication::translate("MainWindow", "tBtnListInsert", nullptr));
        tBtnListAppend->setText(QCoreApplication::translate("MainWindow", "tBtnListAppend", nullptr));
        tBtnListDelete->setText(QCoreApplication::translate("MainWindow", "tBtnListDelete", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234", nullptr));
        chkBoxSorting->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        tBtnSortAsc->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        tBtnSortDes->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\346\216\222\345\272\217", nullptr));
        tBtnClearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        tBtnAddLine->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\251\272\350\241\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        chkListEditable->setText(QCoreApplication::translate("MainWindow", "\351\241\271\345\217\257\347\274\226\350\276\221", nullptr));
        tBtnSeleltItem->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\200\211\351\241\271", nullptr));
        tBtnSelALL->setText(QCoreApplication::translate("MainWindow", "tBtnSelALL", nullptr));
        tBtnSelNone->setText(QCoreApplication::translate("MainWindow", "tBtnSelNone", nullptr));
        tBtnSelInvs->setText(QCoreApplication::translate("MainWindow", "tBtnSelNone", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "New Item_2", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
