#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QPrinter;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QString m_filename;
    QImage m_image;
    void showImageFeatures(bool formatChanged = true);
    void imageModified(bool modified = true);

    void printImage(QPainter *painter, QPrinter * printer);
    void printRGB565Data(QPainter *painter, QPrinter *printer);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actFile_Open_triggered();

    void on_actImage_ZoomIn_triggered();

    void on_actImage_ZoomOut_triggered();

    void on_actImage_RotateLeft_triggered();

    void on_actImage_RotateRight_triggered();

    void on_actImage_FilpUD_triggered();

    void on_actImage_FilpLR_triggered();

    void on_actFile_Reload_triggered();

    void on_actFile_Save_triggered();

    void on_actFile_SaveAs_triggered();

    void on_pushButton_clicked();

    void on_btnGetRGB565_clicked();

    void on_btnSaveDataFile_clicked();

    void on_actFile_Print_triggered();

    void on_actFile_Preview_triggered();

    void do_paintRequestImage(QPrinter *printer);
    void do_paintRequestText(QPrinter *printer);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
