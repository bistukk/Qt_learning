#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QLabel;
class QStandardItemModel;
class QItemSelectionModel;
class TDialogHeaders;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labCellPos;
    QLabel *labCellText;
    QStandardItemModel *m_model;
    QItemSelectionModel *m_selection;

    TDialogHeaders *dlgHeaders = nullptr;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actTab_SetSize_triggered();

    void on_actTab_SetHeader_triggered();

    void on_actTab_Locate_triggered();

    void do_setCellText(int row, int column, QString &text);
    void on_tableView_clicked(const QModelIndex &index);
    void do_model_currentChanged(const QModelIndex &current, const QModelIndex &previous);
signals:
    void cellIndexChanged(int rowNo, int colNo);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
