/********************************************************************************
** Form generated from reading UI file 'tdialogheaders.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGHEADERS_H
#define UI_TDIALOGHEADERS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogHeaders
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *btnOk;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnCancel;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *TDialogHeaders)
    {
        if (TDialogHeaders->objectName().isEmpty())
            TDialogHeaders->setObjectName(QString::fromUtf8("TDialogHeaders"));
        TDialogHeaders->resize(400, 338);
        verticalLayout_3 = new QVBoxLayout(TDialogHeaders);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(TDialogHeaders);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);


        horizontalLayout->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnOk = new QPushButton(TDialogHeaders);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/322.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOk->setIcon(icon);

        verticalLayout_2->addWidget(btnOk);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        btnCancel = new QPushButton(TDialogHeaders);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        verticalLayout_2->addWidget(btnCancel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(TDialogHeaders);
        QObject::connect(btnOk, &QPushButton::clicked, TDialogHeaders, qOverload<>(&QDialog::accept));
        QObject::connect(btnCancel, &QPushButton::clicked, TDialogHeaders, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogHeaders);
    } // setupUi

    void retranslateUi(QDialog *TDialogHeaders)
    {
        TDialogHeaders->setWindowTitle(QCoreApplication::translate("TDialogHeaders", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogHeaders", "\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        btnOk->setText(QCoreApplication::translate("TDialogHeaders", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("TDialogHeaders", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogHeaders: public Ui_TDialogHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGHEADERS_H
