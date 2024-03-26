#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql>
#include <QDataWidgetMapper>
#include "tcomboboxdelegate.h"
#include <QMainWindow>



class tcomboboxdelegate;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QSqlDatabase DB;
    QSqlTableModel *tabModel;
    QItemSelectionModel *selModel;
    tcomboboxdelegate *comboDelegate;

    tcomboboxdelegate delegateSex;
    tcomboboxdelegate delegateDepart;
    QDataWidgetMapper *dataMapper;
    void openTable();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actOpenDB_triggered();
    void do_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_actRecAppend_triggered();

    void on_actRecInsert_triggered();

    void on_actRecDelete_triggered();

    void on_actPhoto_triggered();

    void on_actPhotoClear_triggered();

    void on_actScan_triggered();

    void on_actSubmit_triggered();

    void on_actRevert_triggered();

    void on_comboFields_currentIndexChanged(int index);

    void on_radioBtnAsend_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
