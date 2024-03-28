/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAlign_Left;
    QPushButton *btnAlign_Center;
    QPushButton *btnAlign_Right;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnFont_Bold;
    QPushButton *btnFont_Italic;
    QPushButton *btnFont_Underline;
    QFrame *line_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkReadOnly;
    QCheckBox *chkEnabled;
    QCheckBox *chkClear;
    QFrame *line_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(345, 252);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAlign_Left = new QPushButton(Widget);
        btnAlign_Left->setObjectName(QString::fromUtf8("btnAlign_Left"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/pre2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlign_Left->setIcon(icon);
        btnAlign_Left->setCheckable(true);
        btnAlign_Left->setChecked(true);
        btnAlign_Left->setAutoExclusive(true);
        btnAlign_Left->setFlat(true);

        horizontalLayout->addWidget(btnAlign_Left);

        btnAlign_Center = new QPushButton(Widget);
        btnAlign_Center->setObjectName(QString::fromUtf8("btnAlign_Center"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/102.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlign_Center->setIcon(icon1);
        btnAlign_Center->setCheckable(true);
        btnAlign_Center->setAutoExclusive(true);
        btnAlign_Center->setFlat(true);

        horizontalLayout->addWidget(btnAlign_Center);

        btnAlign_Right = new QPushButton(Widget);
        btnAlign_Right->setObjectName(QString::fromUtf8("btnAlign_Right"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/next2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlign_Right->setIcon(icon2);
        btnAlign_Right->setCheckable(true);
        btnAlign_Right->setAutoExclusive(true);
        btnAlign_Right->setFlat(true);

        horizontalLayout->addWidget(btnAlign_Right);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnFont_Bold = new QPushButton(Widget);
        btnFont_Bold->setObjectName(QString::fromUtf8("btnFont_Bold"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/BLD.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_Bold->setIcon(icon3);
        btnFont_Bold->setCheckable(true);
        btnFont_Bold->setChecked(true);
        btnFont_Bold->setAutoExclusive(false);
        btnFont_Bold->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_Bold);

        btnFont_Italic = new QPushButton(Widget);
        btnFont_Italic->setObjectName(QString::fromUtf8("btnFont_Italic"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/ITL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_Italic->setIcon(icon4);
        btnFont_Italic->setCheckable(true);
        btnFont_Italic->setAutoExclusive(false);
        btnFont_Italic->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_Italic);

        btnFont_Underline = new QPushButton(Widget);
        btnFont_Underline->setObjectName(QString::fromUtf8("btnFont_Underline"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/318.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_Underline->setIcon(icon5);
        btnFont_Underline->setCheckable(true);
        btnFont_Underline->setAutoExclusive(false);
        btnFont_Underline->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_Underline);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(Widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        chkReadOnly = new QCheckBox(groupBox);
        chkReadOnly->setObjectName(QString::fromUtf8("chkReadOnly"));

        horizontalLayout_3->addWidget(chkReadOnly);

        chkEnabled = new QCheckBox(groupBox);
        chkEnabled->setObjectName(QString::fromUtf8("chkEnabled"));

        horizontalLayout_3->addWidget(chkEnabled);

        chkClear = new QCheckBox(groupBox);
        chkClear->setObjectName(QString::fromUtf8("chkClear"));

        horizontalLayout_3->addWidget(chkClear);


        verticalLayout->addWidget(groupBox);

        line_3 = new QFrame(Widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioBlack = new QRadioButton(groupBox_2);
        radioBlack->setObjectName(QString::fromUtf8("radioBlack"));

        horizontalLayout_4->addWidget(radioBlack);

        radioRed = new QRadioButton(groupBox_2);
        radioRed->setObjectName(QString::fromUtf8("radioRed"));

        horizontalLayout_4->addWidget(radioRed);

        radioBlue = new QRadioButton(groupBox_2);
        radioBlue->setObjectName(QString::fromUtf8("radioBlue"));

        horizontalLayout_4->addWidget(radioBlue);


        verticalLayout->addWidget(groupBox_2);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setPointSize(15);
        lineEdit->setFont(font);

        verticalLayout->addWidget(lineEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnAlign_Left->setText(QCoreApplication::translate("Widget", "\345\261\205\345\267\246", nullptr));
        btnAlign_Center->setText(QCoreApplication::translate("Widget", "\345\261\205\344\270\255", nullptr));
        btnAlign_Right->setText(QCoreApplication::translate("Widget", "\345\261\205\345\217\263", nullptr));
        btnFont_Bold->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        btnFont_Italic->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        btnFont_Underline->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        groupBox->setTitle(QString());
        chkReadOnly->setText(QCoreApplication::translate("Widget", "Readonly", nullptr));
        chkEnabled->setText(QCoreApplication::translate("Widget", "Enabled", nullptr));
        chkClear->setText(QCoreApplication::translate("Widget", "ClearButtonEnable", nullptr));
        groupBox_2->setTitle(QString());
        radioBlack->setText(QCoreApplication::translate("Widget", "Black", nullptr));
        radioRed->setText(QCoreApplication::translate("Widget", "Red", nullptr));
        radioBlue->setText(QCoreApplication::translate("Widget", "Blue", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "\346\265\213\350\257\225\347\224\250\347\232\204\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
