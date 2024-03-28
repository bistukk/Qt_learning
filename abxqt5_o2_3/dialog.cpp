#include "dialog.h"
#include "QHBoxLayout"
#include "QVBoxLayout"

void Dialog::iniUi()
{
    checkBoxUnderline = new QCheckBox(tr("Underline"));
    checkBoxItalic = new QCheckBox(tr("Italic"));
    checkBoxBold = new QCheckBox(tr("Bold"));
    QHBoxLayout *HLayout1 = new QHBoxLayout;
    HLayout1->addWidget(checkBoxUnderline);
    HLayout1->addWidget(checkBoxItalic);
    HLayout1->addWidget(checkBoxBold);

    rBtnGreen = new QRadioButton("Green");
    rBtnRed = new QRadioButton("Red");
    rBtnBlack = new QRadioButton("Black");

    QHBoxLayout *HLayout2 = new QHBoxLayout;
    HLayout2->addWidget(rBtnGreen);
    HLayout2->addWidget(rBtnRed);
    HLayout2->addWidget(rBtnBlack);

    plainTxtEdit = new QPlainTextEdit();
    QFont font = plainTxtEdit->font();
    font.setPointSize(20);
    plainTxtEdit->setFont(font);
    plainTxtEdit->setPlainText("Hello World!\n\nThis is KK.!");

    btnOK = new QPushButton("OK");
    btnClose = new QPushButton("Close");
    btnCancle = new QPushButton("Cancle");

    QHBoxLayout *HLayout3 = new QHBoxLayout;
    HLayout3->addWidget(btnOK);
    HLayout3->addStretch();
    HLayout3->addWidget(btnClose);
    HLayout3->addStretch();
    HLayout3->addWidget(btnCancle);

    QVBoxLayout *VLayout = new QVBoxLayout;
    VLayout->addLayout(HLayout1);
    VLayout->addLayout(HLayout2);
    VLayout->addWidget(plainTxtEdit);
    VLayout->addLayout(HLayout3);
    setLayout(VLayout);
}

void Dialog::iniSignalSlots()
{
    connect(btnOK, SIGNAL(clicked()), this, SLOT(accept()));
    connect(btnCancle, SIGNAL(clicked()), this, SLOT(reject()));
    connect(btnClose, SIGNAL(clicked()), this, SLOT(close()));

    connect(checkBoxUnderline, SIGNAL(clicked(bool)), this, SLOT(on_checkUnderline(bool)));
    connect(checkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(on_checkItalic(bool)));
    connect(checkBoxBold, SIGNAL(clicked(bool)), this, SLOT(on_checkBold(bool)));

    connect(rBtnBlack, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(rBtnGreen, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(rBtnRed, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
}

void Dialog::on_checkUnderline(bool checked)
{
    QFont font = plainTxtEdit->font();
    font.setUnderline(checked);
    plainTxtEdit->setFont(font);
}

void Dialog::on_checkItalic(bool checked)
{
    QFont font = plainTxtEdit->font();
    font.setItalic(checked);
    plainTxtEdit->setFont(font);
}

void Dialog::on_checkBold(bool checked)
{
    QFont font = plainTxtEdit->font();
    font.setBold(checked);
    plainTxtEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette plet = plainTxtEdit->palette();
    if(rBtnGreen->isChecked())
        plet.setColor(QPalette::Text, Qt::green);
    else if(rBtnRed->isChecked())
        plet.setColor(QPalette::Text, Qt::red);
    else if(rBtnBlack->isChecked())
        plet.setColor(QPalette::Text, Qt::black);
    else
        plet.setColor(QPalette::Text, Qt::black);
    plainTxtEdit->setPalette(plet);
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    iniUi();
    iniSignalSlots();
}

Dialog::~Dialog()
{
}

