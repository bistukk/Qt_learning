/********************************************************************************
** Form generated from reading UI file 'tlogindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLOGINDIALOG_H
#define UI_TLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TLoginDialog
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *editUser;
    QLabel *label_3;
    QLineEdit *editPSWD;
    QCheckBox *checkBoxSave;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *TLoginDialog)
    {
        if (TLoginDialog->objectName().isEmpty())
            TLoginDialog->setObjectName(QString::fromUtf8("TLoginDialog"));
        TLoginDialog->resize(564, 364);
        label = new QLabel(TLoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 546, 314));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/back2.jpg")));
        label->setScaledContents(true);
        widget = new QWidget(TLoginDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 329, 546, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        editUser = new QLineEdit(widget);
        editUser->setObjectName(QString::fromUtf8("editUser"));

        horizontalLayout->addWidget(editUser);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        editPSWD = new QLineEdit(widget);
        editPSWD->setObjectName(QString::fromUtf8("editPSWD"));
        editPSWD->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(editPSWD);

        checkBoxSave = new QCheckBox(widget);
        checkBoxSave->setObjectName(QString::fromUtf8("checkBoxSave"));

        horizontalLayout->addWidget(checkBoxSave);

        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(TLoginDialog);
        QObject::connect(btnCancel, &QPushButton::clicked, TLoginDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *TLoginDialog)
    {
        TLoginDialog->setWindowTitle(QCoreApplication::translate("TLoginDialog", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("TLoginDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("TLoginDialog", "\345\257\206\347\240\201", nullptr));
        checkBoxSave->setText(QCoreApplication::translate("TLoginDialog", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", nullptr));
        btnOK->setText(QCoreApplication::translate("TLoginDialog", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("TLoginDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TLoginDialog: public Ui_TLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLOGINDIALOG_H
