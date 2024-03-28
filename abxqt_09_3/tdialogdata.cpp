#include "tdialogdata.h"
#include "ui_tdialogdata.h"
#include <QFileDialog>
QSqlRecord TDialogData::record()
{
    m_record.setValue("empNo", ui->spinEmpNo->value());
    m_record.setValue("Name", ui->editName->text());
    m_record.setValue("Gender", ui->comboSex->currentText());
    m_record.setValue("Birthday", ui->editBirth->date());

    m_record.setValue("Province", ui->comboProvince->currentText());
    m_record.setValue("Department", ui->comboDep->currentText());

    m_record.setValue("Salary", ui->spinSalary->value());
    m_record.setValue("Memo", ui->editMemo->toPlainText());

    return m_record;
}

void TDialogData::setRecord(const QSqlRecord &newRecord)
{
    m_record = newRecord;
    ui->spinEmpNo->setEnabled(false);
    setWindowTitle("Data对话框");

    ui->spinEmpNo->setValue(newRecord.value("empNo").toInt());
    ui->editName->setText(newRecord.value("Name").toString());
    ui->comboSex->setCurrentText(newRecord.value("Gender").toString());
    ui->editBirth->setDate(newRecord.value("Birthday").toDate());
    ui->comboProvince->setCurrentText(newRecord.value("Province").toString());
    ui->comboDep->setCurrentText(newRecord.value("Department").toString());
    ui->spinSalary->setValue(newRecord.value("Salary").toInt());
    ui->editMemo->setPlainText(newRecord.value("Memo").toString());
    QVariant va = newRecord.value("Photo");
    if(va.isValid())
    {
        QPixmap pic;
        pic.loadFromData(va.toByteArray());
        ui->LabPhoto->setPixmap(pic.scaledToWidth(ui->LabPhoto->size().width()));
    }
    else
    {
        ui->LabPhoto->clear();
    }
}

TDialogData::TDialogData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogData)
{
    ui->setupUi(this);
}

TDialogData::~TDialogData()
{
    delete ui;
}

void TDialogData::on_pushButton_clicked()
{
    QString aFile = QFileDialog::getOpenFileName(this, "选择图片文件","","照片(*.jpg)");
    if(aFile.isEmpty())
        return;

    QFile *file = new QFile(aFile);
    if(!file->open(QIODevice::ReadOnly))
        return;
    QByteArray data = file->readAll();
    file->close();

    m_record.setValue("Photo", data);
    QPixmap pic;
    pic.loadFromData(data);

    ui->LabPhoto->setPixmap(pic.scaledToWidth(ui->LabPhoto->size().width()));
}


void TDialogData::on_pushButton_2_clicked()
{
    m_record.setNull("Photo");
    ui->LabPhoto->clear();

}

