/********************************************************************************
** Form generated from reading UI file 'tdialoglocate.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGLOCATE_H
#define UI_TDIALOGLOCATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogLocate
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxColumn;
    QCheckBox *chkBoxColumn;
    QLabel *label_2;
    QSpinBox *spinBoxRow;
    QCheckBox *chkBoxRow;
    QLabel *label_3;
    QLineEdit *editCaption;
    QVBoxLayout *verticalLayout;
    QPushButton *btnSetText;
    QPushButton *btnClose;

    void setupUi(QDialog *TDialogLocate)
    {
        if (TDialogLocate->objectName().isEmpty())
            TDialogLocate->setObjectName(QString::fromUtf8("TDialogLocate"));
        TDialogLocate->resize(400, 179);
        horizontalLayout = new QHBoxLayout(TDialogLocate);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(TDialogLocate);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QString::fromUtf8("spinBoxColumn"));

        gridLayout->addWidget(spinBoxColumn, 0, 1, 1, 1);

        chkBoxColumn = new QCheckBox(groupBox);
        chkBoxColumn->setObjectName(QString::fromUtf8("chkBoxColumn"));

        gridLayout->addWidget(chkBoxColumn, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));

        gridLayout->addWidget(spinBoxRow, 1, 1, 1, 1);

        chkBoxRow = new QCheckBox(groupBox);
        chkBoxRow->setObjectName(QString::fromUtf8("chkBoxRow"));

        gridLayout->addWidget(chkBoxRow, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        editCaption = new QLineEdit(groupBox);
        editCaption->setObjectName(QString::fromUtf8("editCaption"));

        gridLayout->addWidget(editCaption, 2, 1, 1, 2);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnSetText = new QPushButton(TDialogLocate);
        btnSetText->setObjectName(QString::fromUtf8("btnSetText"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/165.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        btnSetText->setIcon(icon);

        verticalLayout->addWidget(btnSetText);

        btnClose = new QPushButton(TDialogLocate);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);

        verticalLayout->addWidget(btnClose);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TDialogLocate);
        QObject::connect(btnClose, &QPushButton::clicked, TDialogLocate, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(TDialogLocate);
    } // setupUi

    void retranslateUi(QDialog *TDialogLocate)
    {
        TDialogLocate->setWindowTitle(QCoreApplication::translate("TDialogLocate", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogLocate", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("TDialogLocate", "\345\210\227\345\217\267", nullptr));
        chkBoxColumn->setText(QCoreApplication::translate("TDialogLocate", "\345\210\227\345\242\236", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogLocate", "\350\241\214\345\217\267", nullptr));
        chkBoxRow->setText(QCoreApplication::translate("TDialogLocate", "\350\241\214\345\242\236", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogLocate", "\346\226\207\345\255\227", nullptr));
        btnSetText->setText(QCoreApplication::translate("TDialogLocate", "\350\256\276\347\275\256\346\226\207\345\255\227", nullptr));
        btnClose->setText(QCoreApplication::translate("TDialogLocate", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogLocate: public Ui_TDialogLocate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGLOCATE_H
