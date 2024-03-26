#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
private:
    QString m_filename;
    template<class T> void writeByStream(T Value);
    template<class T> void readByStream(T &value);
    
    
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_btnColor_In_clicked();

    void on_btnFont_In_clicked();

    void on_btnInt8_Write_clicked();

    void on_btnInt8_Read_clicked();

    void on_btnUInt8_Write_clicked();

    void on_btnUInt8_Read_clicked();

    void on_btnInt16_Write_clicked();

    void on_btnInt16_Read_clicked();

    void on_btnUInt16_Write_clicked();

    void on_btnUInt16_Read_clicked();

    void on_btnInt32_Write_clicked();

    void on_btnInt32_Read_clicked();

    void on_btnInt64_Write_clicked();

    void on_btnInt64_Read_clicked();

    void on_btnBool_Write_clicked();

    void on_btnBool_Read_clicked();

    void on_btnDouble_Write_clicked();

    void on_btnDouble_Read_clicked();

    void on_btnFont_Write_clicked();

    void on_btnFont_Read_clicked();

    void on_btnStr_Write_clicked();

    void on_btnStr_Read_clicked();

    void on_btnColor_Write_clicked();

    void on_btnColor_Read_clicked();

    void on_actClearOutput_triggered();

    void on_actSaveAll_triggered();

    void on_actReadAll_triggered();

private:
    Ui::MainWindow *ui;
};

template<class T>
void MainWindow::writeByStream(T value)
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

    //T data = value;
    fileStream << value;
    fileDevice.close();
}
template<class T>
void MainWindow::readByStream(T &value)
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

    //T data = value;
    fileStream >> value;
    fileDevice.close();
}

#endif // MAINWINDOW_H
