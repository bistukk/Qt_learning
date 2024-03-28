#ifndef TLOGINDIALOG_H
#define TLOGINDIALOG_H

#include <QDialog>

namespace Ui {
class TLoginDialog;
}

class TLoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TLoginDialog(QWidget *parent = nullptr);
    ~TLoginDialog();

private:
    Ui::TLoginDialog *ui;

    bool m_moving;
    QPoint m_lastPos;
    // QWidget interface

    QString m_user = "user";
    QString m_pswd = "12345";
    int m_tryCount = 0;
    const int M_MAXCOUNT = 3;

    QString encrypt(const QString&str);
    void readSettings();
    void writeSettings();

protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
private slots:
    void on_btnOK_clicked();
};



#endif // TLOGINDIALOG_H
