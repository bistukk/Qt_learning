/********************************************************************************
** Form generated from reading UI file 'tdialogdata.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGDATA_H
#define UI_TDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogData
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *spinEmpNo;
    QDateEdit *editBirth;
    QComboBox *comboSex;
    QLabel *label_6;
    QComboBox *comboProvince;
    QLineEdit *editName;
    QComboBox *comboDep;
    QDoubleSpinBox *spinSalary;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *LabPhoto;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *btnOK;
    QPushButton *btnClose;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *editMemo;

    void setupUi(QDialog *TDialogData)
    {
        if (TDialogData->objectName().isEmpty())
            TDialogData->setObjectName(QString::fromUtf8("TDialogData"));
        TDialogData->resize(448, 408);
        gridLayout_2 = new QGridLayout(TDialogData);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(TDialogData);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinEmpNo = new QSpinBox(groupBox);
        spinEmpNo->setObjectName(QString::fromUtf8("spinEmpNo"));
        spinEmpNo->setMaximum(100000);

        gridLayout->addWidget(spinEmpNo, 0, 1, 2, 1);

        editBirth = new QDateEdit(groupBox);
        editBirth->setObjectName(QString::fromUtf8("editBirth"));
        editBirth->setDateTime(QDateTime(QDate(2017, 2, 19), QTime(16, 0, 0)));

        gridLayout->addWidget(editBirth, 6, 1, 2, 1);

        comboSex = new QComboBox(groupBox);
        comboSex->addItem(QString());
        comboSex->addItem(QString());
        comboSex->setObjectName(QString::fromUtf8("comboSex"));

        gridLayout->addWidget(comboSex, 4, 1, 2, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 10, 0, 2, 1);

        comboProvince = new QComboBox(groupBox);
        comboProvince->addItem(QString());
        comboProvince->addItem(QString());
        comboProvince->addItem(QString());
        comboProvince->addItem(QString());
        comboProvince->addItem(QString());
        comboProvince->addItem(QString());
        comboProvince->setObjectName(QString::fromUtf8("comboProvince"));

        gridLayout->addWidget(comboProvince, 8, 1, 3, 1);

        editName = new QLineEdit(groupBox);
        editName->setObjectName(QString::fromUtf8("editName"));

        gridLayout->addWidget(editName, 2, 1, 2, 1);

        comboDep = new QComboBox(groupBox);
        comboDep->addItem(QString());
        comboDep->addItem(QString());
        comboDep->addItem(QString());
        comboDep->setObjectName(QString::fromUtf8("comboDep"));

        gridLayout->addWidget(comboDep, 11, 1, 1, 1);

        spinSalary = new QDoubleSpinBox(groupBox);
        spinSalary->setObjectName(QString::fromUtf8("spinSalary"));
        spinSalary->setMaximum(1000000.000000000000000);
        spinSalary->setValue(1000.000000000000000);

        gridLayout->addWidget(spinSalary, 12, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 12, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TDialogData);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        LabPhoto = new QLabel(groupBox_2);
        LabPhoto->setObjectName(QString::fromUtf8("LabPhoto"));
        LabPhoto->setMinimumSize(QSize(100, 0));

        verticalLayout->addWidget(LabPhoto);


        horizontalLayout->addWidget(groupBox_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton = new QPushButton(TDialogData);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/00.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(TDialogData);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        verticalLayout_3->addWidget(pushButton_2);

        btnOK = new QPushButton(TDialogData);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon2);

        verticalLayout_3->addWidget(btnOK);

        btnClose = new QPushButton(TDialogData);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon3);

        verticalLayout_3->addWidget(btnClose);


        gridLayout_2->addLayout(verticalLayout_3, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(TDialogData);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        editMemo = new QPlainTextEdit(groupBox_3);
        editMemo->setObjectName(QString::fromUtf8("editMemo"));

        verticalLayout_2->addWidget(editMemo);


        gridLayout_2->addWidget(groupBox_3, 1, 0, 1, 1);


        retranslateUi(TDialogData);
        QObject::connect(btnOK, &QPushButton::clicked, TDialogData, qOverload<>(&QDialog::accept));
        QObject::connect(btnClose, &QPushButton::clicked, TDialogData, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogData);
    } // setupUi

    void retranslateUi(QDialog *TDialogData)
    {
        TDialogData->setWindowTitle(QCoreApplication::translate("TDialogData", "Dialog", nullptr));
        groupBox->setTitle(QString());
        comboSex->setItemText(0, QCoreApplication::translate("TDialogData", "\347\224\267", nullptr));
        comboSex->setItemText(1, QCoreApplication::translate("TDialogData", "\345\245\263", nullptr));

        label_6->setText(QCoreApplication::translate("TDialogData", "\351\203\250\351\227\250", nullptr));
        comboProvince->setItemText(0, QCoreApplication::translate("TDialogData", "\345\214\227\344\272\254", nullptr));
        comboProvince->setItemText(1, QCoreApplication::translate("TDialogData", "\344\270\212\346\265\267", nullptr));
        comboProvince->setItemText(2, QCoreApplication::translate("TDialogData", "\345\271\277\350\245\277", nullptr));
        comboProvince->setItemText(3, QCoreApplication::translate("TDialogData", "\346\267\261\345\234\263", nullptr));
        comboProvince->setItemText(4, QCoreApplication::translate("TDialogData", "\346\235\255\345\267\236", nullptr));
        comboProvince->setItemText(5, QCoreApplication::translate("TDialogData", "\345\271\277\345\267\236", nullptr));

        comboDep->setItemText(0, QCoreApplication::translate("TDialogData", "\351\224\200\345\224\256\351\203\250", nullptr));
        comboDep->setItemText(1, QCoreApplication::translate("TDialogData", "\346\212\200\346\234\257\351\203\250", nullptr));
        comboDep->setItemText(2, QCoreApplication::translate("TDialogData", "\347\256\241\347\220\206\351\203\250", nullptr));

        label_7->setText(QCoreApplication::translate("TDialogData", "\345\267\245\350\265\204", nullptr));
        label_5->setText(QCoreApplication::translate("TDialogData", "\345\207\272\347\224\237\347\234\201\344\273\275", nullptr));
        label_4->setText(QCoreApplication::translate("TDialogData", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogData", "\346\200\247\345\210\253", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogData", "\346\200\247\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("TDialogData", "\345\267\245\345\217\267", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TDialogData", "\347\205\247\347\211\207", nullptr));
        LabPhoto->setText(QCoreApplication::translate("TDialogData", "dbLabPhoto", nullptr));
        pushButton->setText(QCoreApplication::translate("TDialogData", "\345\257\274\345\205\245\347\205\247\347\211\207", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TDialogData", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
        btnOK->setText(QCoreApplication::translate("TDialogData", "\347\241\256\345\256\232", nullptr));
        btnClose->setText(QCoreApplication::translate("TDialogData", "\345\217\226\346\266\210", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TDialogData", "\345\244\207\346\263\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogData: public Ui_TDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGDATA_H
