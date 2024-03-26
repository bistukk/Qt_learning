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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btnMove;
    QLabel *labMove;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        btnMove = new QPushButton(Widget);
        btnMove->setObjectName(QString::fromUtf8("btnMove"));
        btnMove->setGeometry(QRect(10, 50, 191, 91));
        labMove = new QLabel(Widget);
        labMove->setObjectName(QString::fromUtf8("labMove"));
        labMove->setGeometry(QRect(80, 240, 121, 31));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        labMove->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labMove->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnMove->setText(QCoreApplication::translate("Widget", "Movable Button \n"
"\346\214\211W,S,A,D\347\247\273\345\212\250", nullptr));
        labMove->setText(QCoreApplication::translate("Widget", "\347\202\271\345\207\273\351\274\240\346\240\207\345\267\246\351\224\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
