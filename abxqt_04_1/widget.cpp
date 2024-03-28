#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnGetChars_clicked()
{
    QString str = ui->editStr->text();
    if(str.isEmpty()) return;

    for(qint16 i = 0; i <str.size(); i++){
        QChar ch = str.at(i);
        char16_t uniCode = ch.unicode();

        QString chStr(ch);
        QString info = chStr + QString::asprintf("\t, Unicode编码=0x%X", uniCode);
        ui->plainTextEdit->appendPlainText(info);
    }
}


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnCharJudge_clicked()
{
    QString str = ui->editChar->text();
    if(str.isEmpty()) return;

    QChar ch = str.at(0);
    char16_t uniCode = ch.unicode();

    //QString chStr(ch);
    QString info = str  + QString::asprintf("\t, Unicode编码=0x%X", uniCode);
    ui->plainTextEdit->appendPlainText(info);

    ui->chkDigit->setChecked(ch.isDigit());
    ui->chkLetter->setChecked(ch.isLetter());
    ui->chkLetterOrNumbber->setChecked(ch.isLetterOrNumber());
    ui->chkUpper->setChecked(ch.isUpper());
    ui->chkLower->setChecked(ch.isLower());
    ui->chkMark->setChecked(ch.isMark());
    ui->chkSpace->setChecked(ch.isSpace());
    ui->chkSymbol->setChecked(ch.isSymbol());
    ui->chkPunct->setChecked(ch.isPunct());
}


void Widget::on_btnChange_clicked()
{
    QString str = "Dimple";
    ui->plainTextEdit->appendPlainText(str);
    //QChar chp =  QChar::fromLatin1('P');
    QChar chp = 'p';
    str[0] = chp;
    ui->plainTextEdit->appendPlainText("\n" + str);
}


void Widget::on_btnShift_clicked()
{
    QString str = "Hello,北京！";
    ui->plainTextEdit->appendPlainText(str);
    //QChar chp =  QChar::fromLatin1('P');
    QChar chp = 'p';
    QString nn = "南宁";
    str[6] = nn.at(0);/*QChar(0x9752);*/
    str[7] = nn.at(1);/*QChar(0x5C9B);*/
    ui->plainTextEdit->appendPlainText("\n" + str);
}


void Widget::on_btnCompare_clicked()
{
    QString Hustr="河to湖";
    QChar He= QChar::fromUcs2(Hustr[0].unicode());
    QChar Hu= QChar(Hustr[3].unicode());
    QString str="他们来自河南或河北";
    ui->plainTextEdit->appendPlainText(str);
    for(int i=0;i<str.size();i++)
    {
        if(str.at(i)==He)
            str[i]=Hu;
    }
    ui->plainTextEdit->appendPlainText("\n" + str);
}

