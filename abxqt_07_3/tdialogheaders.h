#ifndef TDIALOGHEADERS_H
#define TDIALOGHEADERS_H

#include <QDialog>

class QStringListModel;
namespace Ui {
class TDialogHeaders;
}

class TDialogHeaders : public QDialog
{
    Q_OBJECT
private:
    QStringListModel *m_model;

public:
    void setHeaderList(QStringList& headers);
    QStringList headerList();
public:
    explicit TDialogHeaders(QWidget *parent = nullptr);
    ~TDialogHeaders();

private:
    Ui::TDialogHeaders *ui;
};

#endif // TDIALOGHEADERS_H
