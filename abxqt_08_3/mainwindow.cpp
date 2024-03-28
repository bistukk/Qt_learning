#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QDebug>
#include <QFloat16>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox_4->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    m_filename = QFileDialog::getSaveFileName(this, "选择一个文件",
                   QApplication::applicationFilePath(),
                                              "数据流文件(*.stream)");

    if(!m_filename.isEmpty())
    {
        ui->editFilename->setText(m_filename);
        ui->actSaveAll->setEnabled(true);
        ui->actReadAll->setEnabled(true);
        ui->groupBox_4->setEnabled(true);
    }
}


void MainWindow::on_btnColor_In_clicked()
{
    QPalette plet = ui->btnColor_In->palette();
    QColor color = plet.buttonText().color();
    color = QColorDialog::getColor(color);
    if(color.isValid())
    {
        plet.setColor(QPalette::ButtonText, color);
        ui->btnColor_In->setPalette(plet);
    }
}


void MainWindow::on_btnFont_In_clicked()
{
    QFont font = ui->btnFont_In->font();
    bool OK = false;
    font = QFontDialog::getFont(&OK, font, this);
    if(OK)
    {
        qDebug() << "进入了OK" << Qt::endl;
        ui->btnFont_In->setFont(font);
    }
}


void MainWindow::on_btnInt8_Write_clicked()
{
    qint8 value = ui->spin_Int8->value();
    writeByStream(value);
}


void MainWindow::on_btnInt8_Read_clicked()
{
    qint8 value;
    readByStream(value);
    ui->edit_Int8->setText(QString("%1").arg(value));
}


void MainWindow::on_btnUInt8_Write_clicked()
{
    quint8 value = ui->spin_UInt8->value();
    writeByStream(value);
}


void MainWindow::on_btnUInt8_Read_clicked()
{
    quint8 value;
    readByStream(value);
    ui->edit_UInt8->setText(QString("%1").arg(value));
}


void MainWindow::on_btnInt16_Write_clicked()
{
    qint16 value = ui->spin_Int16->value();
    writeByStream(value);
}


void MainWindow::on_btnInt16_Read_clicked()
{
    qint16 value;
    readByStream(value);
    ui->edit_Int16->setText(QString("%1").arg(value));
}


void MainWindow::on_btnUInt16_Write_clicked()
{
    quint16 value = ui->spin_UInt16->value();
    writeByStream(value);
}


void MainWindow::on_btnUInt16_Read_clicked()
{
    quint16 value;
    readByStream(value);
    ui->edit_UInt16->setText(QString("%1").arg(value));
}


void MainWindow::on_btnInt32_Write_clicked()
{
    qint32 value = ui->spin_Int32->value();
    writeByStream(value);
}


void MainWindow::on_btnInt32_Read_clicked()
{
    qint32 value;
    readByStream(value);
    ui->edit_Int32->setText(QString("%1").arg(value));
}


void MainWindow::on_btnInt64_Write_clicked()
{
    qint64 value = ui->spin_Int64->value();
    writeByStream(value);
}


void MainWindow::on_btnInt64_Read_clicked()
{
    qint64 value;
    readByStream(value);
    ui->edit_Int64->setText(QString("%1").arg(value));
}


void MainWindow::on_btnBool_Write_clicked()
{
    bool value = ui->chkBox_In->isChecked();
    writeByStream(value);
}


void MainWindow::on_btnBool_Read_clicked()
{
    bool value;
    readByStream(value);
    ui->chkBox_Out->setChecked(value);
}


void MainWindow::on_btnDouble_Write_clicked()
{
    double value = ui->spin_Double->value();
    writeByStream(value);
}


void MainWindow::on_btnDouble_Read_clicked()
{
    double value;
    readByStream(value);
    ui->edit_Double->setText(QString::asprintf("%.4f", value));
}


void MainWindow::on_btnFont_Write_clicked()
{
    QFont font = ui->btnFont_In->font();
    writeByStream(font);
}


void MainWindow::on_btnFont_Read_clicked()
{
    QFont font;
    readByStream(font);
    ui->editFont_Out->setFont(font);
}


void MainWindow::on_btnStr_Write_clicked()
{
    QString str = ui->edit_StrIn->text();
    char* value = str.toLocal8Bit().data();
    writeByStream(value);
}


void MainWindow::on_btnStr_Read_clicked()
{
    char* value;
    readByStream(value);
    QString str(value); //
    ui->edit_StrOut->setText(str);
}


void MainWindow::on_btnColor_Write_clicked()
{
    QPalette plet = ui->btnColor_In->palette();
    QColor color = plet.buttonText().color();
    writeByStream(color);
}




void MainWindow::on_btnColor_Read_clicked()
{
    QColor color;
    readByStream(color);
    QPalette plet = ui->editColor_Out->palette();
    plet.setColor(QPalette::Text, color);
    ui->editColor_Out->setPalette(plet);
}


void MainWindow::on_actClearOutput_triggered()
{
    ui->edit_Int8->clear();
    ui->edit_UInt8->clear();
    ui->edit_Int16->clear();
    ui->edit_UInt16->clear();
    ui->edit_Int32->clear();
    ui->edit_Int64->clear();

    ui->edit_Float16->clear();
    ui->edit_Float->clear();
    ui->edit_Double->clear();

    ui->edit_StrOut->clear();
    ui->edit_QStrOut->clear();

    QFont font = this->font();
    ui->editFont_Out->setFont(font);

    QPalette plet = this->palette();
    ui->editColor_Out->setPalette(plet);
}


void MainWindow::on_actSaveAll_triggered()
{
    QFile fileDevice(m_filename);
    if(!fileDevice.open(QIODevice::WriteOnly))
        return;
    QDataStream fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_2);
    if(ui->radio_BigEndian->isChecked())
        fileStream.setByteOrder(QDataStream::BigEndian);
    else
        fileStream.setByteOrder((QDataStream::LittleEndian));

    if(ui->radio_Single->isChecked())
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    else
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);


    qint8 int8_Value = ui->spin_Int8->value();
    fileStream << int8_Value;

    quint8 uint8_Value = ui->spin_UInt8->value();
    fileStream << uint8_Value;

    qint16 int16_Value = ui->spin_Int16->value();
    fileStream << int16_Value;

    quint16 uint16_Value = ui->spin_UInt16->value();
    fileStream << uint16_Value;

    qint32 int32_Value = ui->spin_Int32->value();
    fileStream << int32_Value;

    qint64 int64_Value = ui->spin_Int64->value();
    fileStream << int64_Value;

    bool bool_Value = ui->chkBox_In->isChecked();
    fileStream << bool_Value;

    qfloat16 float16_Value = ui->spin_Float16->value();
    fileStream << float16_Value;

    float float_Value = ui->spin_Float->value();
    fileStream << float_Value;

    double double_Value = ui->spin_Double->value();
    fileStream << double_Value;

    QString str = ui->edit_StrIn->text();
    char* charStr =str.toLocal8Bit().data();
    fileStream << charStr;

    QString str_Value = ui->edit_QStrIn->text();
    fileStream << str_Value;

    QFont font = ui->btnFont_In->font();
    fileStream << font;

    QPalette plet = ui->btnColor_In->palette();
    QColor color = plet.buttonText().color();
    fileStream << color;


    fileDevice.close();

}


void MainWindow::on_actReadAll_triggered()
{
    if(!QFile::exists(m_filename))
        return;

    QFile fileDevice(m_filename);
    if(!fileDevice.open(QIODevice::ReadOnly))
        return;

    QDataStream fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_2);
    if(ui->radio_BigEndian->isChecked())
        fileStream.setByteOrder(QDataStream::BigEndian);
    else
        fileStream.setByteOrder((QDataStream::LittleEndian));

    if(ui->radio_Single->isChecked())
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    else
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);

    fileStream.startTransaction();

    qint8 int8_value = 0;
    fileStream >> int8_value;
    ui->edit_Int8->setText(QString("%1").arg(int8_value));

    quint8 uint8_value = 0;
    fileStream >> uint8_value;
    ui->edit_UInt8->setText(QString("%1").arg(uint8_value));

    qint16 int16_value = 0;
    fileStream >> int16_value;
    ui->edit_Int16->setText(QString("%1").arg(int16_value));

    quint16 uint16_value = 0;
    fileStream >> uint16_value;
    ui->edit_UInt16->setText(QString("%1").arg(uint16_value));

    qint32 int32_value = 0;
    fileStream >> int32_value;
    ui->edit_Int32->setText(QString("%1").arg(int32_value));

    qint64 int64_value = 0;
    fileStream >> int64_value;
    ui->edit_Int64->setText(QString("%1").arg(int64_value));

    bool bool_value;
    fileStream >> bool_value;
    ui->chkBox_Out->setChecked(bool_value);

    qfloat16 float16_value = 0;
    fileStream >> float16_value;
    float val = float16_value;
    ui->edit_Float16->setText(QString::asprintf("%.2f", val));

    float float_value = 0;
    fileStream >> float_value;
    ui->edit_Float->setText(QString::asprintf("%.4f", float_value));

    double double_value = 0;
    fileStream >> double_value;
    ui->edit_Double->setText(QString::asprintf("%.4f", double_value));

    char* charStr;
    fileStream >> charStr;
    QString str(charStr);
    ui->edit_StrOut->setText(str);

    QString str_value = "";
    fileStream >> str_value;
    ui->edit_QStrOut->setText(str_value);

    QFont font;
    fileStream >> font;
    ui->editFont_Out->setFont(font);

    QColor color;
    fileStream >> color;
    QPalette plet = ui->editColor_Out->palette();
    ui->editColor_Out->setPalette(plet);

    if(fileStream.commitTransaction())
        QMessageBox::information(this, "消息", "读取成功!");
    else
        QMessageBox::critical(this, "消息", "读取过程中有错误!");
    fileDevice.close();
}

