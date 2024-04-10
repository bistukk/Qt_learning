#include "tpendialog.h"
#include "ui_tpendialog.h"
#include <QColorDialog>
QPen TPenDialog::getPen()
{
    m_pen.setStyle(Qt::PenStyle(ui->comboPenStyle->currentIndex()));
    m_pen.setWidth(ui->spinWidth->value());
    m_pen.setColor(ui->btnColor->palette().color(QPalette::Button));
    return m_pen;
}

void TPenDialog::setPen(QPen &pen)
{
    m_pen = pen;
    ui->spinWidth->setValue(pen.width());
    ui->comboPenStyle->setCurrentIndex(pen.style());
    QColor color = pen.color();
    QString str = QString::asprintf("background-color:rgb(%d, %d, %d)",
                                    color.red(), color.green(), color.blue());
    ui->btnColor->setAutoFillBackground(true);
    ui->btnColor->setStyleSheet(str);
}

TPenDialog::TPenDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TPenDialog)
{
    ui->setupUi(this);
    ui->comboPenStyle->clear();
    ui->comboPenStyle->addItem("NoPen");        //添加字符串
    ui->comboPenStyle->addItem("SolidLine");    //index正好与Qt::PenStyle的枚举值对应
    ui->comboPenStyle->addItem("DashLine");
    ui->comboPenStyle->addItem("DotLine");
    ui->comboPenStyle->addItem("DashDotLine");
    ui->comboPenStyle->addItem("DashDotDotLine");
    ui->comboPenStyle->addItem("CustomDashLine");
}

TPenDialog::~TPenDialog()
{
    delete ui;
}

QPen TPenDialog::getPen(QPen &iniPen, bool *ok)
{
    TPenDialog *dlg = new TPenDialog;
    dlg->setPen(iniPen);
    QPen pen;
    if(dlg->exec() == QDialog::Accepted)
    {
        pen = dlg->getPen();
        *ok = true;
    }
    else
    {
        pen = iniPen;
        *ok = false;
    }
    delete dlg;
    return pen;
}

void TPenDialog::on_btnColor_clicked()
{
    QColor color = QColorDialog::getColor(m_pen.color());
    if(color.isValid())
    {
        QString str = QString::asprintf("background-color:rgb(%d, %d, %d)",
                                        color.red(), color.green(), color.blue());
        ui->btnColor->setStyleSheet(str);
    }
}

