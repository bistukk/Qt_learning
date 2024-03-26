#ifndef TDIALOGSIZE_H
#define TDIALOGSIZE_H

#include <QDialog>

namespace Ui {
class TDialogSize;
}

class TDialogSize : public QDialog
{
    Q_OBJECT

public:
    void setRowColumn(int row, int column);

    int rowCount();
    int columnCount();

public:
    explicit TDialogSize(QWidget *parent = nullptr);
    ~TDialogSize();

private:
    Ui::TDialogSize *ui;
};

#endif // TDIALOGSIZE_H
