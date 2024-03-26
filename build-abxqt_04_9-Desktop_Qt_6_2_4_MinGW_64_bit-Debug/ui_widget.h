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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnInitItems;
    QPushButton *btnClear_2;
    QCheckBox *chkEditabel;
    QComboBox *combItems;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnInitCities;
    QComboBox *comboCities;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(435, 435);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/aim.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnInitItems = new QPushButton(groupBox);
        btnInitItems->setObjectName(QString::fromUtf8("btnInitItems"));

        gridLayout->addWidget(btnInitItems, 0, 0, 1, 1);

        btnClear_2 = new QPushButton(groupBox);
        btnClear_2->setObjectName(QString::fromUtf8("btnClear_2"));

        gridLayout->addWidget(btnClear_2, 0, 1, 1, 1);

        chkEditabel = new QCheckBox(groupBox);
        chkEditabel->setObjectName(QString::fromUtf8("chkEditabel"));

        gridLayout->addWidget(chkEditabel, 0, 2, 1, 1);

        combItems = new QComboBox(groupBox);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/UNIT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        combItems->addItem(icon1, QString());
        combItems->addItem(icon1, QString());
        combItems->setObjectName(QString::fromUtf8("combItems"));

        gridLayout->addWidget(combItems, 1, 0, 1, 3);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnInitCities = new QPushButton(groupBox_2);
        btnInitCities->setObjectName(QString::fromUtf8("btnInitCities"));

        verticalLayout->addWidget(btnInitCities);

        comboCities = new QComboBox(groupBox_2);
        comboCities->setObjectName(QString::fromUtf8("comboCities"));

        verticalLayout->addWidget(comboCities);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btnClear = new QPushButton(groupBox_3);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        verticalLayout_2->addWidget(btnClear);

        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);


        verticalLayout_3->addWidget(groupBox_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "ComboBox demo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\347\256\200\345\215\225ComboBox", nullptr));
        btnInitItems->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        btnClear_2->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        chkEditabel->setText(QCoreApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", nullptr));
        combItems->setItemText(0, QCoreApplication::translate("Widget", "\345\215\227\346\230\214", nullptr));
        combItems->setItemText(1, QCoreApplication::translate("Widget", "\346\235\255\345\267\236", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256ComboBox", nullptr));
        btnInitCities->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", nullptr));
        comboCities->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\344\270\200\344\270\252\345\237\216\345\270\202", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\344\277\241\346\201\257", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
