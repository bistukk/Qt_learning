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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnStar;
    QPushButton *btnStop;
    QPushButton *btnOneShot;
    QLabel *label;
    QSpinBox *spinBoxintv;
    QRadioButton *radioContinue;
    QRadioButton *radioOneShot;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioPrecise;
    QRadioButton *radioCoarse;
    QRadioButton *radioCoarseTimer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *lcdMin;
    QLCDNumber *lcdHour;
    QLCDNumber *lcdSec;
    QLabel *labelElapsed;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(377, 434);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnStar = new QPushButton(groupBox);
        btnStar->setObjectName(QString::fromUtf8("btnStar"));

        gridLayout->addWidget(btnStar, 0, 0, 1, 1);

        btnStop = new QPushButton(groupBox);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        gridLayout->addWidget(btnStop, 0, 1, 1, 1);

        btnOneShot = new QPushButton(groupBox);
        btnOneShot->setObjectName(QString::fromUtf8("btnOneShot"));

        gridLayout->addWidget(btnOneShot, 0, 2, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBoxintv = new QSpinBox(groupBox);
        spinBoxintv->setObjectName(QString::fromUtf8("spinBoxintv"));
        spinBoxintv->setMaximum(99999);
        spinBoxintv->setValue(2000);

        gridLayout->addWidget(spinBoxintv, 1, 1, 1, 1);

        radioContinue = new QRadioButton(groupBox);
        radioContinue->setObjectName(QString::fromUtf8("radioContinue"));
        radioContinue->setChecked(true);

        gridLayout->addWidget(radioContinue, 1, 2, 1, 1);

        radioOneShot = new QRadioButton(groupBox);
        radioOneShot->setObjectName(QString::fromUtf8("radioOneShot"));

        gridLayout->addWidget(radioOneShot, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioPrecise = new QRadioButton(groupBox_2);
        radioPrecise->setObjectName(QString::fromUtf8("radioPrecise"));

        horizontalLayout->addWidget(radioPrecise);

        radioCoarse = new QRadioButton(groupBox_2);
        radioCoarse->setObjectName(QString::fromUtf8("radioCoarse"));
        radioCoarse->setChecked(true);

        horizontalLayout->addWidget(radioCoarse);

        radioCoarseTimer = new QRadioButton(groupBox_2);
        radioCoarseTimer->setObjectName(QString::fromUtf8("radioCoarseTimer"));

        horizontalLayout->addWidget(radioCoarseTimer);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lcdMin = new QLCDNumber(groupBox_3);
        lcdMin->setObjectName(QString::fromUtf8("lcdMin"));
        lcdMin->setDigitCount(2);
        lcdMin->setProperty("value", QVariant(23.000000000000000));

        horizontalLayout_2->addWidget(lcdMin);

        lcdHour = new QLCDNumber(groupBox_3);
        lcdHour->setObjectName(QString::fromUtf8("lcdHour"));
        lcdHour->setDigitCount(2);
        lcdHour->setProperty("value", QVariant(23.000000000000000));

        horizontalLayout_2->addWidget(lcdHour);

        lcdSec = new QLCDNumber(groupBox_3);
        lcdSec->setObjectName(QString::fromUtf8("lcdSec"));
        lcdSec->setDigitCount(2);
        lcdSec->setProperty("value", QVariant(23.000000000000000));

        horizontalLayout_2->addWidget(lcdSec);


        verticalLayout->addWidget(groupBox_3);

        labelElapsed = new QLabel(Widget);
        labelElapsed->setObjectName(QString::fromUtf8("labelElapsed"));

        verticalLayout->addWidget(labelElapsed);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        btnStar->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        btnOneShot->setText(QCoreApplication::translate("Widget", "\345\212\250\346\200\201\345\210\233\345\273\272\345\215\225\346\254\241\345\256\232\346\227\266\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        spinBoxintv->setSuffix(QCoreApplication::translate("Widget", " ms", nullptr));
        radioContinue->setText(QCoreApplication::translate("Widget", "\350\277\236\347\273\255\345\256\232\346\227\266", nullptr));
        radioOneShot->setText(QCoreApplication::translate("Widget", "\345\215\225\346\254\241\345\256\232\346\227\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250\347\262\276\345\272\246", nullptr));
        radioPrecise->setText(QCoreApplication::translate("Widget", "PreciseTimer", nullptr));
        radioCoarse->setText(QCoreApplication::translate("Widget", "CoarseTimer", nullptr));
        radioCoarseTimer->setText(QCoreApplication::translate("Widget", "VeryCoasrseTimer", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\210\345\260\217\346\227\266\357\274\232\345\210\206\357\274\232\347\247\222\357\274\211", nullptr));
        labelElapsed->setText(QCoreApplication::translate("Widget", "\346\265\201\351\200\235\347\232\204\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
