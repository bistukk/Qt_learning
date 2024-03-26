#ifndef TDIALOGDATA_H
#define TDIALOGDATA_H

#include <QDialog>
#include <QSqlRecord>
namespace Ui {
class TDialogData;
}

class TDialogData : public QDialog
{
    Q_OBJECT

private:
    QSqlRecord m_record;


public:
    explicit TDialogData(QWidget *parent = nullptr);
    ~TDialogData();

    QSqlRecord record();
    void setRecord(const QSqlRecord &newRecord);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TDialogData *ui;
};

#endif // TDIALOGDATA_H
