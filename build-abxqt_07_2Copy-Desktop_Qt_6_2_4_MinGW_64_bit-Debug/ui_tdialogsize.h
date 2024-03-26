/********************************************************************************
** Form generated from reading UI file 'tdialogsize.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGSIZE_H
#define UI_TDIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TDialogSize
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxColumn;
    QLabel *label_2;
    QSpinBox *spinBoxRow;
    QVBoxLayout *verticalLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *TDialogSize)
    {
        if (TDialogSize->objectName().isEmpty())
            TDialogSize->setObjectName(QString::fromUtf8("TDialogSize"));
        TDialogSize->resize(283, 169);
        layoutWidget = new QWidget(TDialogSize);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 251, 131));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QString::fromUtf8("spinBoxColumn"));
        spinBoxColumn->setValue(6);

        gridLayout->addWidget(spinBoxColumn, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));
        spinBoxRow->setValue(10);

        gridLayout->addWidget(spinBoxRow, 1, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnOk = new QPushButton(layoutWidget);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/322.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOk->setIcon(icon);

        verticalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        verticalLayout->addWidget(btnCancel);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TDialogSize);
        QObject::connect(btnOk, &QPushButton::clicked, TDialogSize, qOverload<>(&QDialog::accept));
        QObject::connect(btnCancel, &QPushButton::clicked, TDialogSize, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogSize);
    } // setupUi

    void retranslateUi(QDialog *TDialogSize)
    {
        TDialogSize->setWindowTitle(QCoreApplication::translate("TDialogSize", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogSize", "\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("TDialogSize", "\345\210\227\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogSize", "\350\241\214\346\225\260", nullptr));
        btnOk->setText(QCoreApplication::translate("TDialogSize", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("TDialogSize", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogSize: public Ui_TDialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGSIZE_H
