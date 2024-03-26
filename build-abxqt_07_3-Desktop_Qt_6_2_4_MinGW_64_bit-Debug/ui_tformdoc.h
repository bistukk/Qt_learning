/********************************************************************************
** Form generated from reading UI file 'tformdoc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFORMDOC_H
#define UI_TFORMDOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFormDoc
{
public:
    QAction *actPaste;
    QAction *actFont;
    QAction *actClose;
    QAction *actUndo;
    QAction *actRedo;
    QAction *actSave;
    QAction *actCopy;
    QAction *actCut;
    QAction *actOpen;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *TFormDoc)
    {
        if (TFormDoc->objectName().isEmpty())
            TFormDoc->setObjectName(QString::fromUtf8("TFormDoc"));
        TFormDoc->resize(345, 262);
        actPaste = new QAction(TFormDoc);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon);
        actFont = new QAction(TFormDoc);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon1);
        actClose = new QAction(TFormDoc);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon2);
        actUndo = new QAction(TFormDoc);
        actUndo->setObjectName(QString::fromUtf8("actUndo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actUndo->setIcon(icon3);
        actRedo = new QAction(TFormDoc);
        actRedo->setObjectName(QString::fromUtf8("actRedo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRedo->setIcon(icon4);
        actSave = new QAction(TFormDoc);
        actSave->setObjectName(QString::fromUtf8("actSave"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon5);
        actCopy = new QAction(TFormDoc);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon6);
        actCut = new QAction(TFormDoc);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon7);
        actOpen = new QAction(TFormDoc);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon8);
        plainTextEdit = new QPlainTextEdit(TFormDoc);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(53, 39, 251, 181));

        retranslateUi(TFormDoc);
        QObject::connect(actCopy, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::copy));
        QObject::connect(actCut, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::cut));
        QObject::connect(actPaste, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::paste));
        QObject::connect(actRedo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::redo));
        QObject::connect(actClose, &QAction::triggered, TFormDoc, qOverload<>(&QWidget::close));
        QObject::connect(actUndo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::undo));

        QMetaObject::connectSlotsByName(TFormDoc);
    } // setupUi

    void retranslateUi(QWidget *TFormDoc)
    {
        TFormDoc->setWindowTitle(QCoreApplication::translate("TFormDoc", "Form", nullptr));
        actPaste->setText(QCoreApplication::translate("TFormDoc", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actPaste->setToolTip(QCoreApplication::translate("TFormDoc", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actPaste->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actFont->setText(QCoreApplication::translate("TFormDoc", "\345\255\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFont->setToolTip(QCoreApplication::translate("TFormDoc", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("TFormDoc", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("TFormDoc", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actUndo->setText(QCoreApplication::translate("TFormDoc", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        actUndo->setToolTip(QCoreApplication::translate("TFormDoc", "\346\222\244\351\224\200\347\274\226\350\276\221\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actUndo->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actRedo->setText(QCoreApplication::translate("TFormDoc", "\351\207\215\345\244\215", nullptr));
#if QT_CONFIG(tooltip)
        actRedo->setToolTip(QCoreApplication::translate("TFormDoc", "\351\207\215\345\244\215\347\274\226\350\276\221\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
        actSave->setText(QCoreApplication::translate("TFormDoc", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actSave->setToolTip(QCoreApplication::translate("TFormDoc", "\345\217\226\346\266\210\344\277\256\346\224\271\346\240\207\345\277\227", nullptr));
#endif // QT_CONFIG(tooltip)
        actCopy->setText(QCoreApplication::translate("TFormDoc", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actCopy->setToolTip(QCoreApplication::translate("TFormDoc", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCopy->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actCut->setText(QCoreApplication::translate("TFormDoc", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actCut->setToolTip(QCoreApplication::translate("TFormDoc", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCut->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actOpen->setText(QCoreApplication::translate("TFormDoc", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actOpen->setToolTip(QCoreApplication::translate("TFormDoc", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class TFormDoc: public Ui_TFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMDOC_H
