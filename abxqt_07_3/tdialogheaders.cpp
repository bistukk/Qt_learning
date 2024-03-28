#include "tdialogheaders.h"
#include "ui_tdialogheaders.h"
#include <QStringListModel>
#include <QMessageBox>
void TDialogHeaders::setHeaderList(QStringList &headers)
{
    m_model->setStringList((headers));
}

QStringList TDialogHeaders::headerList()
{
    return m_model->stringList();
}

TDialogHeaders::TDialogHeaders(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogHeaders)
{
    ui->setupUi(this);
    m_model = new QStringListModel(this);
    ui->listView->setModel(m_model);
}

TDialogHeaders::~TDialogHeaders()
{
    delete ui;
    QMessageBox::information(this, "提示", "TDialogHeaders被删除!!");
}
