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
    QSqlRelationalTableModel  *tabModel;
    QItemSelectionModel *selModel;
    void openTable();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actOpenDB_triggered();

    void on_actRecAppend_triggered();

    void on_actRecInsert_triggered();

    void on_actRecDelete_triggered();

    void on_actSubmit_triggered();

    void do_currentChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_actRevert_triggered();

    void on_actFields_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
