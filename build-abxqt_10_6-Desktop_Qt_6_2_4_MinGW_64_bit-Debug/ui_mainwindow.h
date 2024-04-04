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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actFile_Open;
    QAction *actFile_Reload;
    QAction *actFile_Save;
    QAction *actFile_SaveAs;
    QAction *actFile_Preview;
    QAction *actFile_Print;
    QAction *actImage_ZoomIn;
    QAction *actImage_ZoomOut;
    QAction *actImage_RotateLeft;
    QAction *actImage_RotateRight;
    QAction *actImage_FilpUD;
    QAction *actImage_FilpLR;
    QAction *actQuit;
    QWidget *centralwidget;
    QSplitter *splitter;
    QFrame *frameLeft;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *editImg_Format;
    QLabel *label_2;
    QLineEdit *editImg_Width;
    QLabel *label_3;
    QLineEdit *editImg_Height;
    QLabel *label_4;
    QLineEdit *editImg_Depth;
    QLabel *label_5;
    QLineEdit *editImg_DPM;
    QLabel *label_6;
    QLineEdit *editImg_SizeByte;
    QLabel *label_7;
    QLineEdit *editImg_BitPlane;
    QCheckBox *chkBox_GrayScale;
    QCheckBox *chkBox_Alpha;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QComboBox *comboFormat;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioLSB;
    QRadioButton *radioButton_2;
    QPushButton *btnGetRGB565;
    QPushButton *btnSaveDataFile;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLabel *labPic;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(662, 600);
        actFile_Open = new QAction(MainWindow);
        actFile_Open->setObjectName(QString::fromUtf8("actFile_Open"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/001.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Open->setIcon(icon);
        actFile_Reload = new QAction(MainWindow);
        actFile_Reload->setObjectName(QString::fromUtf8("actFile_Reload"));
        actFile_Reload->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/126.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Reload->setIcon(icon1);
        actFile_Save = new QAction(MainWindow);
        actFile_Save->setObjectName(QString::fromUtf8("actFile_Save"));
        actFile_Save->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/save.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Save->setIcon(icon2);
        actFile_SaveAs = new QAction(MainWindow);
        actFile_SaveAs->setObjectName(QString::fromUtf8("actFile_SaveAs"));
        actFile_SaveAs->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/Save-as.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_SaveAs->setIcon(icon3);
        actFile_Preview = new QAction(MainWindow);
        actFile_Preview->setObjectName(QString::fromUtf8("actFile_Preview"));
        actFile_Preview->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/preview1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Preview->setIcon(icon4);
        actFile_Print = new QAction(MainWindow);
        actFile_Print->setObjectName(QString::fromUtf8("actFile_Print"));
        actFile_Print->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/print1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Print->setIcon(icon5);
        actImage_ZoomIn = new QAction(MainWindow);
        actImage_ZoomIn->setObjectName(QString::fromUtf8("actImage_ZoomIn"));
        actImage_ZoomIn->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actImage_ZoomIn->setIcon(icon6);
        actImage_ZoomOut = new QAction(MainWindow);
        actImage_ZoomOut->setObjectName(QString::fromUtf8("actImage_ZoomOut"));
        actImage_ZoomOut->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actImage_ZoomOut->setIcon(icon7);
        actImage_RotateLeft = new QAction(MainWindow);
        actImage_RotateLeft->setObjectName(QString::fromUtf8("actImage_RotateLeft"));
        actImage_RotateLeft->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/rotateleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actImage_RotateLeft->setIcon(icon8);
        actImage_RotateRight = new QAction(MainWindow);
        actImage_RotateRight->setObjectName(QString::fromUtf8("actImage_RotateRight"));
        actImage_RotateRight->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actImage_RotateRight->setIcon(icon9);
        actImage_FilpUD = new QAction(MainWindow);
        actImage_FilpUD->setObjectName(QString::fromUtf8("actImage_FilpUD"));
        actImage_FilpUD->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/flip-vertical.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actImage_FilpUD->setIcon(icon10);
        actImage_FilpLR = new QAction(MainWindow);
        actImage_FilpLR->setObjectName(QString::fromUtf8("actImage_FilpLR"));
        actImage_FilpLR->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/flip-horizontal.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actImage_FilpLR->setIcon(icon11);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon12);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 9, 641, 521));
        splitter->setOrientation(Qt::Horizontal);
        frameLeft = new QFrame(splitter);
        frameLeft->setObjectName(QString::fromUtf8("frameLeft"));
        frameLeft->setEnabled(false);
        frameLeft->setFrameShape(QFrame::StyledPanel);
        frameLeft->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameLeft);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(frameLeft);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        editImg_Format = new QLineEdit(groupBox);
        editImg_Format->setObjectName(QString::fromUtf8("editImg_Format"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editImg_Format);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        editImg_Width = new QLineEdit(groupBox);
        editImg_Width->setObjectName(QString::fromUtf8("editImg_Width"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editImg_Width);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        editImg_Height = new QLineEdit(groupBox);
        editImg_Height->setObjectName(QString::fromUtf8("editImg_Height"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editImg_Height);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        editImg_Depth = new QLineEdit(groupBox);
        editImg_Depth->setObjectName(QString::fromUtf8("editImg_Depth"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editImg_Depth);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        editImg_DPM = new QLineEdit(groupBox);
        editImg_DPM->setObjectName(QString::fromUtf8("editImg_DPM"));

        formLayout->setWidget(4, QFormLayout::FieldRole, editImg_DPM);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        editImg_SizeByte = new QLineEdit(groupBox);
        editImg_SizeByte->setObjectName(QString::fromUtf8("editImg_SizeByte"));

        formLayout->setWidget(5, QFormLayout::FieldRole, editImg_SizeByte);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        editImg_BitPlane = new QLineEdit(groupBox);
        editImg_BitPlane->setObjectName(QString::fromUtf8("editImg_BitPlane"));

        formLayout->setWidget(6, QFormLayout::FieldRole, editImg_BitPlane);

        chkBox_GrayScale = new QCheckBox(groupBox);
        chkBox_GrayScale->setObjectName(QString::fromUtf8("chkBox_GrayScale"));

        formLayout->setWidget(7, QFormLayout::LabelRole, chkBox_GrayScale);

        chkBox_Alpha = new QCheckBox(groupBox);
        chkBox_Alpha->setObjectName(QString::fromUtf8("chkBox_Alpha"));

        formLayout->setWidget(7, QFormLayout::FieldRole, chkBox_Alpha);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frameLeft);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboFormat = new QComboBox(groupBox_2);
        comboFormat->addItem(QString());
        comboFormat->addItem(QString());
        comboFormat->addItem(QString());
        comboFormat->addItem(QString());
        comboFormat->addItem(QString());
        comboFormat->addItem(QString());
        comboFormat->setObjectName(QString::fromUtf8("comboFormat"));

        verticalLayout->addWidget(comboFormat);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/824.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon13);

        verticalLayout->addWidget(pushButton);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frameLeft);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioLSB = new QRadioButton(groupBox_3);
        radioLSB->setObjectName(QString::fromUtf8("radioLSB"));
        radioLSB->setChecked(true);

        horizontalLayout->addWidget(radioLSB);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout_2->addLayout(horizontalLayout);

        btnGetRGB565 = new QPushButton(groupBox_3);
        btnGetRGB565->setObjectName(QString::fromUtf8("btnGetRGB565"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/images/116.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnGetRGB565->setIcon(icon14);

        verticalLayout_2->addWidget(btnGetRGB565);

        btnSaveDataFile = new QPushButton(groupBox_3);
        btnSaveDataFile->setObjectName(QString::fromUtf8("btnSaveDataFile"));
        btnSaveDataFile->setEnabled(false);
        btnSaveDataFile->setIcon(icon2);

        verticalLayout_2->addWidget(btnSaveDataFile);


        verticalLayout_3->addWidget(groupBox_3);

        splitter->addWidget(frameLeft);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 330, 471));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labPic = new QLabel(scrollAreaWidgetContents);
        labPic->setObjectName(QString::fromUtf8("labPic"));
        labPic->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labPic);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

        tabWidget->addTab(tab, icon13, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_6->addWidget(plainTextEdit);

        tabWidget->addTab(tab_2, icon14, QString());
        splitter->addWidget(tabWidget);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actFile_Open);
        toolBar->addAction(actFile_Reload);
        toolBar->addAction(actFile_Save);
        toolBar->addAction(actFile_SaveAs);
        toolBar->addAction(actFile_Preview);
        toolBar->addAction(actFile_Print);
        toolBar->addSeparator();
        toolBar->addAction(actImage_ZoomIn);
        toolBar->addAction(actImage_ZoomOut);
        toolBar->addAction(actImage_RotateLeft);
        toolBar->addAction(actImage_RotateRight);
        toolBar->addAction(actImage_FilpUD);
        toolBar->addAction(actImage_FilpLR);
        toolBar->addSeparator();
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actFile_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actFile_Reload->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\350\275\275\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Reload->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\350\275\275\345\205\245\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actFile_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\210\260\345\275\223\345\211\215\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actFile_SaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actFile_SaveAs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\345\233\276\347\211\207\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actFile_Preview->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Preview->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210", nullptr));
#endif // QT_CONFIG(tooltip)
        actFile_Print->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Print->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actImage_ZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actImage_ZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_CONFIG(tooltip)
        actImage_ZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actImage_ZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actImage_RotateLeft->setText(QCoreApplication::translate("MainWindow", "\345\267\246\346\227\213", nullptr));
#if QT_CONFIG(tooltip)
        actImage_RotateLeft->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\346\227\213", nullptr));
#endif // QT_CONFIG(tooltip)
        actImage_RotateRight->setText(QCoreApplication::translate("MainWindow", "\345\217\263\346\227\213", nullptr));
#if QT_CONFIG(tooltip)
        actImage_RotateRight->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\263\346\227\213", nullptr));
#endif // QT_CONFIG(tooltip)
        actImage_FilpUD->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\213\347\277\273\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        actImage_FilpUD->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\213\347\277\273\350\275\254", nullptr));
#endif // QT_CONFIG(tooltip)
        actImage_FilpLR->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\217\263\347\277\273\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        actImage_FilpLR->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\345\217\263\347\277\273\350\275\254", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\345\261\236\346\200\247", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\240\274\345\274\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\345\256\275\345\272\246", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\351\253\230\345\272\246", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\267\261\345\272\246", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\344\275\215\345\271\263\351\235\242\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\345\244\247\345\260\217", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "DPT\345\210\206\350\276\250\347\216\207", nullptr));
        chkBox_GrayScale->setText(QCoreApplication::translate("MainWindow", "\347\201\260\345\272\246\345\233\276", nullptr));
        chkBox_Alpha->setText(QCoreApplication::translate("MainWindow", "\345\205\267\346\234\211Alpha\351\200\232\351\201\223", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\240\274\345\274\217\350\275\254\346\215\242", nullptr));
        comboFormat->setItemText(0, QCoreApplication::translate("MainWindow", "16-bit RGB565 format", nullptr));
        comboFormat->setItemText(1, QCoreApplication::translate("MainWindow", "24-bit RGB888 format", nullptr));
        comboFormat->setItemText(2, QCoreApplication::translate("MainWindow", "32-bit RGB format", nullptr));
        comboFormat->setItemText(3, QCoreApplication::translate("MainWindow", "8-bit grayscale format", nullptr));
        comboFormat->setItemText(4, QCoreApplication::translate("MainWindow", "16-bit grayscale fomat", nullptr));
        comboFormat->setItemText(5, QCoreApplication::translate("MainWindow", "8-bit indexes into a colomap", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\240\274\345\274\217\350\275\254\346\215\242", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "RGB565\346\225\260\346\215\256", nullptr));
        radioLSB->setText(QCoreApplication::translate("MainWindow", "\344\275\216\345\255\227\350\212\202\345\234\250\345\211\215", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\351\253\230\345\255\227\350\212\202\345\234\250\345\211\215", nullptr));
        btnGetRGB565->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220RGB565\346\225\260\346\215\256", nullptr));
        btnSaveDataFile->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256\346\226\207\344\273\266", nullptr));
        labPic->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "RGB565", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
