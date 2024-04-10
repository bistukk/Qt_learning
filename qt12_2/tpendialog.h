#ifndef TPENDIALOG_H
#define TPENDIALOG_H

#include <QDialog>
#include <QPen>
namespace Ui {
class TPenDialog;
}

class TPenDialog : public QDialog
{
    Q_OBJECT

private:
    QPen m_pen;
    QPen getPen();//退出对话框，返回一个QPen对象作为对话结果
    void setPen(QPen &pen);//初始化对话框

public:
    explicit TPenDialog(QWidget *parent = nullptr);
    ~TPenDialog();


    static QPen getPen(QPen &iniPen, bool *ok);

private slots:
    void on_btnColor_clicked();

private:
    Ui::TPenDialog *ui;
};

#endif // TPENDIALOG_H
