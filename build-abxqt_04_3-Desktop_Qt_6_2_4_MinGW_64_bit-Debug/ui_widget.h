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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *editNum;
    QLabel *label_2;
    QLineEdit *editPrice;
    QPushButton *btnDebug;
    QPushButton *btnCal;
    QLineEdit *editTotal;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *editDec;
    QPushButton *btnDec;
    QLabel *label_5;
    QLineEdit *editBin;
    QPushButton *btnBin;
    QLabel *label_6;
    QLineEdit *editHex;
    QPushButton *btnHex;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(373, 354);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 41, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editNum = new QLineEdit(groupBox);
        editNum->setObjectName(QString::fromUtf8("editNum"));
        editNum->setGeometry(QRect(50, 30, 113, 23));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 30, 41, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editPrice = new QLineEdit(groupBox);
        editPrice->setObjectName(QString::fromUtf8("editPrice"));
        editPrice->setGeometry(QRect(230, 30, 113, 23));
        btnDebug = new QPushButton(groupBox);
        btnDebug->setObjectName(QString::fromUtf8("btnDebug"));
        btnDebug->setGeometry(QRect(49, 110, 91, 24));
        btnCal = new QPushButton(groupBox);
        btnCal->setObjectName(QString::fromUtf8("btnCal"));
        btnCal->setGeometry(QRect(230, 110, 101, 24));
        editTotal = new QLineEdit(groupBox);
        editTotal->setObjectName(QString::fromUtf8("editTotal"));
        editTotal->setGeometry(QRect(230, 70, 113, 23));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 70, 41, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        editDec = new QLineEdit(groupBox_2);
        editDec->setObjectName(QString::fromUtf8("editDec"));

        gridLayout->addWidget(editDec, 0, 1, 1, 1);

        btnDec = new QPushButton(groupBox_2);
        btnDec->setObjectName(QString::fromUtf8("btnDec"));

        gridLayout->addWidget(btnDec, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        editBin = new QLineEdit(groupBox_2);
        editBin->setObjectName(QString::fromUtf8("editBin"));

        gridLayout->addWidget(editBin, 1, 1, 1, 1);

        btnBin = new QPushButton(groupBox_2);
        btnBin->setObjectName(QString::fromUtf8("btnBin"));

        gridLayout->addWidget(btnBin, 1, 2, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        editHex = new QLineEdit(groupBox_2);
        editHex->setObjectName(QString::fromUtf8("editHex"));

        gridLayout->addWidget(editHex, 2, 1, 1, 1);

        btnHex = new QPushButton(groupBox_2);
        btnHex->setObjectName(QString::fromUtf8("btnHex"));

        gridLayout->addWidget(btnHex, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\347\232\204\350\276\223\345\205\245\345\222\214\350\276\223\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        editNum->setText(QCoreApplication::translate("Widget", "12", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        editPrice->setText(QCoreApplication::translate("Widget", "5.5", nullptr));
        btnDebug->setText(QCoreApplication::translate("Widget", "qDebug()\346\265\213\350\257\225", nullptr));
        btnCal->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\200\273\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266\357\274\232", nullptr));
        editDec->setText(QCoreApplication::translate("Widget", "231", nullptr));
        btnDec->setText(QCoreApplication::translate("Widget", "DEC-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266\357\274\232", nullptr));
        btnBin->setText(QCoreApplication::translate("Widget", "BIN-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", nullptr));
        btnHex->setText(QCoreApplication::translate("Widget", "HEX-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
