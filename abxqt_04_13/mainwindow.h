#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QLabel;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    enum FiedldColNum{colName = 0, colSex, colBirth, colNation, colScore, colPartyM};
    enum CellType{ctName = 1000, ctSex, ctBirth, ctNation, ctPartyM, ctScore};
    QLabel *labCellIndex;
    QLabel *labCellType;
    QLabel *labStudId;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSetHead_clicked();

    void on_btnSetRows_clicked();

    void on_btnInit_clicked();

    void on_btnInsertRow_clicked();

    void on_btnAddRow_clicked();

    void on_btnDelteRow_clicked();

    void on_btnAdjustRowHeight_clicked();

    void on_btnAdjustColWidth_clicked();

    void on_btnReadFormToText_clicked();

    void on_chkBoxEditable_clicked(bool checked);

    void on_chkBoxSeparateColor_clicked(bool checked);

    void on_chkBoxShowVerHead_clicked(bool checked);

    void on_chkBoxShowHorHead_clicked(bool checked);

    void on_rBtnSelectRow_clicked();

    void on_rBtnSelectItem_clicked();

    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

private:
    Ui::MainWindow *ui;

private:
    void createItemsARow(int rowNo, QString name, QString sex, QDate birth, QString nation, bool isPM, int score);
};
#endif // MAINWINDOW_H
