/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnOpen;
    QPushButton *btnOpenMulti;
    QPushButton *btnSelDir;
    QPushButton *btnSave;
    QPushButton *btnColor;
    QPushButton *btnFont;
    QPushButton *btnProgress;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnMsgQuestion;
    QPushButton *btnMsgInfomation;
    QPushButton *btnMsgWarning;
    QPushButton *btnMsgCritical;
    QPushButton *btnMsgAbout;
    QPushButton *btnMsgAboutQt;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *btnInputFloat;
    QPushButton *btnInputItem;
    QPushButton *btnInputInt;
    QPushButton *btnInputString;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClearText;
    QPushButton *btnClose;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(436, 349);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnOpen = new QPushButton(groupBox);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));

        gridLayout->addWidget(btnOpen, 0, 0, 1, 1);

        btnOpenMulti = new QPushButton(groupBox);
        btnOpenMulti->setObjectName(QString::fromUtf8("btnOpenMulti"));

        gridLayout->addWidget(btnOpenMulti, 0, 1, 1, 1);

        btnSelDir = new QPushButton(groupBox);
        btnSelDir->setObjectName(QString::fromUtf8("btnSelDir"));

        gridLayout->addWidget(btnSelDir, 1, 0, 1, 1);

        btnSave = new QPushButton(groupBox);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        gridLayout->addWidget(btnSave, 1, 1, 1, 1);

        btnColor = new QPushButton(groupBox);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));

        gridLayout->addWidget(btnColor, 2, 0, 1, 1);

        btnFont = new QPushButton(groupBox);
        btnFont->setObjectName(QString::fromUtf8("btnFont"));

        gridLayout->addWidget(btnFont, 2, 1, 1, 1);

        btnProgress = new QPushButton(groupBox);
        btnProgress->setObjectName(QString::fromUtf8("btnProgress"));

        gridLayout->addWidget(btnProgress, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnMsgQuestion = new QPushButton(groupBox_2);
        btnMsgQuestion->setObjectName(QString::fromUtf8("btnMsgQuestion"));

        gridLayout_2->addWidget(btnMsgQuestion, 0, 0, 1, 1);

        btnMsgInfomation = new QPushButton(groupBox_2);
        btnMsgInfomation->setObjectName(QString::fromUtf8("btnMsgInfomation"));

        gridLayout_2->addWidget(btnMsgInfomation, 0, 1, 1, 1);

        btnMsgWarning = new QPushButton(groupBox_2);
        btnMsgWarning->setObjectName(QString::fromUtf8("btnMsgWarning"));

        gridLayout_2->addWidget(btnMsgWarning, 1, 0, 1, 1);

        btnMsgCritical = new QPushButton(groupBox_2);
        btnMsgCritical->setObjectName(QString::fromUtf8("btnMsgCritical"));

        gridLayout_2->addWidget(btnMsgCritical, 1, 1, 1, 1);

        btnMsgAbout = new QPushButton(groupBox_2);
        btnMsgAbout->setObjectName(QString::fromUtf8("btnMsgAbout"));

        gridLayout_2->addWidget(btnMsgAbout, 2, 0, 1, 1);

        btnMsgAboutQt = new QPushButton(groupBox_2);
        btnMsgAboutQt->setObjectName(QString::fromUtf8("btnMsgAboutQt"));

        gridLayout_2->addWidget(btnMsgAboutQt, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnInputFloat = new QPushButton(groupBox_3);
        btnInputFloat->setObjectName(QString::fromUtf8("btnInputFloat"));

        gridLayout_3->addWidget(btnInputFloat, 1, 0, 1, 1);

        btnInputItem = new QPushButton(groupBox_3);
        btnInputItem->setObjectName(QString::fromUtf8("btnInputItem"));

        gridLayout_3->addWidget(btnInputItem, 1, 1, 1, 1);

        btnInputInt = new QPushButton(groupBox_3);
        btnInputInt->setObjectName(QString::fromUtf8("btnInputInt"));

        gridLayout_3->addWidget(btnInputInt, 0, 1, 1, 1);

        btnInputString = new QPushButton(groupBox_3);
        btnInputString->setObjectName(QString::fromUtf8("btnInputString"));

        gridLayout_3->addWidget(btnInputString, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnClearText = new QPushButton(groupBox_4);
        btnClearText->setObjectName(QString::fromUtf8("btnClearText"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClearText->setIcon(icon);

        horizontalLayout->addWidget(btnClearText);

        btnClose = new QPushButton(groupBox_4);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);

        horizontalLayout->addWidget(btnClose);


        gridLayout_4->addWidget(groupBox_4, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Dialog);
        QObject::connect(btnClose, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));
        QObject::connect(btnClearText, &QPushButton::clicked, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\345\257\271\350\257\235\346\241\206", nullptr));
        btnOpen->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        btnOpenMulti->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", nullptr));
        btnSelDir->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\345\267\262\346\234\211\347\233\256\345\275\225", nullptr));
        btnSave->setText(QCoreApplication::translate("Dialog", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        btnColor->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        btnFont->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\345\255\227\344\275\223", nullptr));
        btnProgress->setText(QCoreApplication::translate("Dialog", "\350\277\233\345\272\246\345\257\271\345\257\271\350\257\235\346\241\206", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\346\266\210\346\201\257\346\241\206 QMessageBox", nullptr));
        btnMsgQuestion->setText(QCoreApplication::translate("Dialog", "question", nullptr));
        btnMsgInfomation->setText(QCoreApplication::translate("Dialog", "information", nullptr));
        btnMsgWarning->setText(QCoreApplication::translate("Dialog", "warning", nullptr));
        btnMsgCritical->setText(QCoreApplication::translate("Dialog", "critical", nullptr));
        btnMsgAbout->setText(QCoreApplication::translate("Dialog", "about", nullptr));
        btnMsgAboutQt->setText(QCoreApplication::translate("Dialog", "aboutQt", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206 QInputDialog", nullptr));
        btnInputFloat->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\346\265\256\347\202\271\346\225\260", nullptr));
        btnInputItem->setText(QCoreApplication::translate("Dialog", "\346\235\241\347\233\256\351\200\211\346\213\251\350\276\223\345\205\245", nullptr));
        btnInputInt->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\346\225\264\346\225\260", nullptr));
        btnInputString->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        groupBox_4->setTitle(QString());
        btnClearText->setText(QCoreApplication::translate("Dialog", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271", nullptr));
        btnClose->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
