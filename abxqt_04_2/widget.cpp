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


void Widget::on_btnfrontBack_clicked()
{
    ui->plainTextEdit->appendPlainText("front().back()函数测试");
    QString str1 = ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("front="+QString(str1.front()));
    ui->plainTextEdit->appendPlainText("back="+QString(str1.back()));
}


void Widget::on_btnLeftRight_clicked()
{
    ui->plainTextEdit->appendPlainText("left().right()函数测试");
    QString str1 = ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("left="+QString(str1.right(9)));
    ui->plainTextEdit->appendPlainText("right="+QString(str1.left(2)));
}


void Widget::on_btnFirstLast_clicked()
{
    ui->plainTextEdit->appendPlainText("first(), last()函数测试");
    QString str1 = ui->comboBoxStr1->currentText();
    QString str2 = ui->comboBox_2->currentText();
    ui->plainTextEdit->appendPlainText("str1:" + str1);
    ui->plainTextEdit->appendPlainText("str2:" + str2);
    int N = str1.lastIndexOf(str2);
    QString strFirst = str1.first(N+1);
    QString strLast = str1.last(str1.size() - N - 1);
    ui->plainTextEdit->appendPlainText("路径名称:"+strFirst);
    ui->plainTextEdit->appendPlainText("文件名称: "+strLast);
}


void Widget::on_btnSection_clicked()
{
    ui->plainTextEdit->appendPlainText("section函数测试");
    QString str1 = ui->comboBoxStr1->currentText();
    QString str2 = ui->comboBox_2->currentText();
    int N = ui->spinBox->value();
    QString strSection = str1.section(str2, N, N);
    ui->plainTextEdit->appendPlainText(strSection);
}


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnisNullisEmpty_clicked()
{
    ui->plainTextEdit->appendPlainText("isNull和isEmpty函数测试：");
    QString str1, str2 = "";
    ui->plainTextEdit->appendPlainText("QString str1, str2 = """);
    QString str = "str1.isNull()=";
    if(str1.isNull()) str += "true"; else str += "false";
    ui->plainTextEdit->appendPlainText(str);

    str = "str1.isEmpty()=";
    if(str1.isEmpty()) str += "true"; else str += "false";
    ui->plainTextEdit->appendPlainText(str);

    str = "str2.isNull()=";
    if(str2.isNull()) str += "true"; else str += "false";
    ui->plainTextEdit->appendPlainText(str);

    str = "str2.isEmpty()=";
    if(str2.isEmpty()) str += "true"; else str += "false";
    ui->plainTextEdit->appendPlainText(str);
}


void Widget::on_btnResize_clicked()
{
    ui->plainTextEdit->appendPlainText("resize函数测试：");
    QString str;
    str.resize(5, '0');
    ui->plainTextEdit->appendPlainText(str);
    str.resize(10, QChar(0x54C8));
    ui->plainTextEdit->appendPlainText(str);
}


void Widget::on_btnSizeLength_clicked()
{
    ui->plainTextEdit->appendPlainText("size, count, length函数测试：");
    QString str1 = ui->comboBoxStr1->currentText();

    ui->plainTextEdit->appendPlainText(QString::asprintf("size:%lld", str1.size()));
    ui->plainTextEdit->appendPlainText(QString::asprintf("count:%lld", str1.count()));
    ui->plainTextEdit->appendPlainText(QString::asprintf("length:%lld", str1.length()));
}


void Widget::on_btnFill_clicked()
{
    ui->plainTextEdit->appendPlainText("fill函数测试：");
    QString str = "Hello";
    str.fill('X');
    ui->plainTextEdit->appendPlainText(str);
    str.fill('A', 2);
    str.fill(QChar(0x54C8), 3);
    ui->plainTextEdit->appendPlainText(str);
}


void Widget::on_pushButton_9_clicked()
{
    ui->plainTextEdit->appendPlainText("trimme,simplified的数测试");
    QString str1=ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText("str1="+str1);
    QString str2=str1.trimmed();
    ui->plainTextEdit->appendPlainText("trimmed()=" + str2);
    str2=str1.simplified();
    ui->plainTextEdit->appendPlainText("simplified()=" + str2);
}


void Widget::on_btnInsert_clicked()
{
    ui->plainTextEdit->appendPlainText("insert的函数测试");
    QString str1="It is great";
    ui->plainTextEdit->appendPlainText(str1);
    int N= str1.lastIndexOf(" ");
    str1.insert(N, "n't");
    ui->plainTextEdit->appendPlainText(str1);
}


void Widget::on_btnRemove_clicked()
{
    //移除特定的字符
    ui->plainTextEdit->appendPlainText("remove移除特定的字符");
    QString str1="你们，我们，他们";
    ui->plainTextEdit->appendPlainText("str1="+str1);
    QString Destr="们";
    QChar DeChar=QChar(Destr[0].unicode());
    str1.remove(DeChar);
    ui->plainTextEdit->appendPlainText("str1= "+str1);
    //移除右侧N个字符
    ui->plainTextEdit->appendPlainText("remove移除右侧N个字符");
    str1="G:\\Qt6Book\iQtsamples\qw.cpp";
    ui->plainTextEdit->appendPlainText(str1);
    int N=str1.lastIndexOf("\\");str1.remove(N+1,20);
    ui->plainTextEdit->appendPlainText(str1);
}


//void Widget::on_btnReplace_clicked()
//{
//    //替换指定的字符
//    ui->plainTextEdit->appendPlainText("replace,替换指定的字符");
//    QString str1="Goooogle";
//    ui->plainTextEdit->appendPlainText(str1);
//    str1.replace('o','e');
//    ui->plainTextEdit->appendPlainText(str1);


//    //替换字符串
//    ui->plainTextEdit->appendPlainText("replace,普换字符串");
//    str1="It is great";
//    int N= str1.lastIndexOf("");
//    ui->plainTextEdit->appendPlainText(str1);

//    QString subStr="wonderful";
//    str1.replace(N+1,subStr.size(),subStr);
//    ui->plainTextEdit->appendPlainText(str1);

//    str1.replace(N+1,subStr.size(),"OK!");
//    qDebug(str1.toLocal8Bit().data());
//    ui->plainTextEdit->appendPlainText(str1);
//}

void Widget::on_btnReplace_clicked()
{
    // 替换指定的字符
    ui->plainTextEdit->appendPlainText("replace,替换指定的字符");
    QString str1 = "Goooogle";
    ui->plainTextEdit->appendPlainText(str1);
    str1.replace('o', 'e');
    ui->plainTextEdit->appendPlainText(str1);

    // 替换字符串
    ui->plainTextEdit->appendPlainText("replace,替换字符串");
    str1 = "It is great";
    ui->plainTextEdit->appendPlainText(str1);

    // 查找"great"并替换为"ok"
    int indexOfGreat = str1.indexOf("great");
    if (indexOfGreat != -1) {
        str1.replace(indexOfGreat, 5, "ok");
    }
    ui->plainTextEdit->appendPlainText(str1);

    qDebug() << str1; // 使用流式输出更为简洁
}



