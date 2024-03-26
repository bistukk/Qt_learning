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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label;
    QTimeEdit *timeEdit;
    QLineEdit *editTime;
    QPushButton *btnQDebugTime;
    QPushButton *btnSetTime;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLineEdit *editDate;
    QPushButton *btnQDebugDate;
    QPushButton *btnSetDate;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *editDateTime;
    QPushButton *btnQDebugDataTIme;
    QPushButton *btnSetDateTime;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *editCalendar;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(651, 332);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setTime(QTime(15, 0, 1));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        editTime = new QLineEdit(groupBox);
        editTime->setObjectName(QString::fromUtf8("editTime"));

        gridLayout->addWidget(editTime, 1, 2, 1, 1);

        btnQDebugTime = new QPushButton(groupBox);
        btnQDebugTime->setObjectName(QString::fromUtf8("btnQDebugTime"));

        gridLayout->addWidget(btnQDebugTime, 2, 1, 1, 1);

        btnSetTime = new QPushButton(groupBox);
        btnSetTime->setObjectName(QString::fromUtf8("btnSetTime"));

        gridLayout->addWidget(btnSetTime, 2, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 3, 1, 1, 1);

        editDate = new QLineEdit(groupBox);
        editDate->setObjectName(QString::fromUtf8("editDate"));

        gridLayout->addWidget(editDate, 3, 2, 1, 1);

        btnQDebugDate = new QPushButton(groupBox);
        btnQDebugDate->setObjectName(QString::fromUtf8("btnQDebugDate"));

        gridLayout->addWidget(btnQDebugDate, 4, 1, 1, 1);

        btnSetDate = new QPushButton(groupBox);
        btnSetDate->setObjectName(QString::fromUtf8("btnSetDate"));

        gridLayout->addWidget(btnSetDate, 4, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout->addWidget(dateTimeEdit, 5, 1, 1, 1);

        editDateTime = new QLineEdit(groupBox);
        editDateTime->setObjectName(QString::fromUtf8("editDateTime"));

        gridLayout->addWidget(editDateTime, 5, 2, 1, 1);

        btnQDebugDataTIme = new QPushButton(groupBox);
        btnQDebugDataTIme->setObjectName(QString::fromUtf8("btnQDebugDataTIme"));

        gridLayout->addWidget(btnQDebugDataTIme, 6, 1, 1, 1);

        btnSetDateTime = new QPushButton(groupBox);
        btnSetDateTime->setObjectName(QString::fromUtf8("btnSetDateTime"));

        gridLayout->addWidget(btnSetDateTime, 6, 2, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        editCalendar = new QLineEdit(groupBox_2);
        editCalendar->setObjectName(QString::fromUtf8("editCalendar"));

        gridLayout_2->addWidget(editCalendar, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_2->addWidget(calendarWidget, 1, 0, 1, 2);


        horizontalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "H:mm:ss", nullptr));
        editTime->setInputMask(QCoreApplication::translate("Widget", "99:99:99;_", nullptr));
        btnQDebugTime->setText(QCoreApplication::translate("Widget", "qDebug-Time", nullptr));
        btnSetTime->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264fromString", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237", nullptr));
        editDate->setInputMask(QCoreApplication::translate("Widget", "9999-99-99;a", nullptr));
        btnQDebugDate->setText(QCoreApplication::translate("Widget", "qDebug-Date ", nullptr));
        btnSetDate->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237fromString", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy-MM-dd H:mm", nullptr));
        editDateTime->setInputMask(QCoreApplication::translate("Widget", "9999-99-99 99:99:99", nullptr));
        btnQDebugDataTIme->setText(QCoreApplication::translate("Widget", "qDebug-Date Time", nullptr));
        btnSetDateTime->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264\346\227\245\346\234\237fromString", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
