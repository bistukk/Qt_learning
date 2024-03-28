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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actSetRoot;
    QAction *actQuit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioShowAll;
    QRadioButton *radioShowDir;
    QGroupBox *groupBoxFilter;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chkBoxEnableFilter;
    QComboBox *comboFilters;
    QPushButton *btnApplyFilters;
    QTreeView *treeView;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QListView *listView;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labFileType;
    QLabel *labFileSize;
    QLabel *labFileName;
    QCheckBox *chkIsDir;
    QLabel *labPath;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(660, 547);
        actSetRoot = new QAction(MainWindow);
        actSetRoot->setObjectName(QString::fromUtf8("actSetRoot"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/fold.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSetRoot->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        frame = new QFrame(splitter_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioShowAll = new QRadioButton(frame);
        radioShowAll->setObjectName(QString::fromUtf8("radioShowAll"));

        horizontalLayout_3->addWidget(radioShowAll);

        radioShowDir = new QRadioButton(frame);
        radioShowDir->setObjectName(QString::fromUtf8("radioShowDir"));

        horizontalLayout_3->addWidget(radioShowDir);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBoxFilter = new QGroupBox(frame);
        groupBoxFilter->setObjectName(QString::fromUtf8("groupBoxFilter"));
        horizontalLayout_4 = new QHBoxLayout(groupBoxFilter);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        chkBoxEnableFilter = new QCheckBox(groupBoxFilter);
        chkBoxEnableFilter->setObjectName(QString::fromUtf8("chkBoxEnableFilter"));

        horizontalLayout_4->addWidget(chkBoxEnableFilter);

        comboFilters = new QComboBox(groupBoxFilter);
        comboFilters->addItem(QString());
        comboFilters->addItem(QString());
        comboFilters->addItem(QString());
        comboFilters->setObjectName(QString::fromUtf8("comboFilters"));
        comboFilters->setEnabled(false);
        comboFilters->setEditable(false);

        horizontalLayout_4->addWidget(comboFilters);

        btnApplyFilters = new QPushButton(groupBoxFilter);
        btnApplyFilters->setObjectName(QString::fromUtf8("btnApplyFilters"));
        btnApplyFilters->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnApplyFilters->setIcon(icon2);

        horizontalLayout_4->addWidget(btnApplyFilters);


        verticalLayout->addWidget(groupBoxFilter);


        verticalLayout_3->addLayout(verticalLayout);

        treeView = new QTreeView(frame);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout_3->addWidget(treeView);

        splitter_2->addWidget(frame);

        verticalLayout_5->addWidget(splitter_2);

        splitter_3->addWidget(groupBox);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_2->addWidget(listView);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout_2->addWidget(tableView);

        splitter->addWidget(groupBox_3);
        splitter_3->addWidget(splitter);

        verticalLayout_4->addWidget(splitter_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labFileType = new QLabel(centralwidget);
        labFileType->setObjectName(QString::fromUtf8("labFileType"));

        horizontalLayout_5->addWidget(labFileType);

        labFileSize = new QLabel(centralwidget);
        labFileSize->setObjectName(QString::fromUtf8("labFileSize"));

        horizontalLayout_5->addWidget(labFileSize);

        labFileName = new QLabel(centralwidget);
        labFileName->setObjectName(QString::fromUtf8("labFileName"));

        horizontalLayout_5->addWidget(labFileName);

        chkIsDir = new QCheckBox(centralwidget);
        chkIsDir->setObjectName(QString::fromUtf8("chkIsDir"));

        horizontalLayout_5->addWidget(chkIsDir);


        verticalLayout_4->addLayout(horizontalLayout_5);

        labPath = new QLabel(centralwidget);
        labPath->setObjectName(QString::fromUtf8("labPath"));

        verticalLayout_4->addWidget(labPath);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actSetRoot);
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actSetRoot->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\271\347\233\256\345\275\225", nullptr));
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "TreeView", nullptr));
        radioShowAll->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\233\256\345\275\225\345\222\214\346\226\207\344\273\266", nullptr));
        radioShowDir->setText(QCoreApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272\347\233\256\345\275\225", nullptr));
        groupBoxFilter->setTitle(QString());
        chkBoxEnableFilter->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\350\277\207\346\273\244", nullptr));
        comboFilters->setItemText(0, QCoreApplication::translate("MainWindow", "*.h;*.cpp;*.ui", nullptr));
        comboFilters->setItemText(1, QCoreApplication::translate("MainWindow", "*.txt", nullptr));
        comboFilters->setItemText(2, QCoreApplication::translate("MainWindow", "*.jpg", nullptr));

        btnApplyFilters->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "ListView", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "TableView", nullptr));
        labFileType->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213\357\274\232", nullptr));
        labFileSize->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", nullptr));
        labFileName->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        chkIsDir->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\345\220\246\346\230\257\347\233\256\345\275\225", nullptr));
        labPath->setText(QCoreApplication::translate("MainWindow", "\350\267\257\345\276\204\345\220\215\357\274\232", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
