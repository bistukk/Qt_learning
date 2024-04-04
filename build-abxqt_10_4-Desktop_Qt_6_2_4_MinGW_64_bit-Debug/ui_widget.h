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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <tgraphicsview.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *labSceneRect;
    QLabel *labViewSize;
    TGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QLabel *labViewCord;
    QSpacerItem *horizontalSpacer;
    QLabel *labSceneCord;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labItemCord;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(430, 422);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labSceneRect = new QLabel(groupBox);
        labSceneRect->setObjectName(QString::fromUtf8("labSceneRect"));

        verticalLayout->addWidget(labSceneRect);

        labViewSize = new QLabel(groupBox);
        labViewSize->setObjectName(QString::fromUtf8("labViewSize"));

        verticalLayout->addWidget(labViewSize);


        verticalLayout_2->addWidget(groupBox);

        graphicsView = new TGraphicsView(Widget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_2->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labViewCord = new QLabel(Widget);
        labViewCord->setObjectName(QString::fromUtf8("labViewCord"));

        horizontalLayout->addWidget(labViewCord);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labSceneCord = new QLabel(Widget);
        labSceneCord->setObjectName(QString::fromUtf8("labSceneCord"));

        horizontalLayout->addWidget(labSceneCord);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labItemCord = new QLabel(Widget);
        labItemCord->setObjectName(QString::fromUtf8("labItemCord"));

        horizontalLayout->addWidget(labItemCord);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        labSceneRect->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        labViewSize->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        labViewCord->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        labSceneCord->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        labItemCord->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
