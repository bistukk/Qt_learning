#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QSqlDatabase DB;
    QSqlQueryModel *qryModel;
    QItemSelectionModel *selModel;

    void selectData();
    void updateRecord(int recNo);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actOpenDB_triggered();

    void on_actRecInsert_triggered();

    void on_actRecEdit_triggered();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_actRecDelete_triggered();

    void on_actScan_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
