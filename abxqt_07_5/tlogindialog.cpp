#include "tlogindialog.h"
#include "ui_tlogindialog.h"
#include <QMouseEvent>
#include <QCryptographicHash>
#include <QSettings>
#include <QMessageBox>
TLoginDialog::TLoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TLoginDialog)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlags(Qt::SplashScreen);
    //setWindowFlags(Qt::FramelessWindowHint);
    QApplication::setOrganizationName("LKP-QT");
    QApplication::setApplicationName("sample-5");
    readSettings();
}

TLoginDialog::~TLoginDialog()
{
    delete ui;
}

QString TLoginDialog::encrypt(const QString &str)
{
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(str.toLocal8Bit());
    return hash.result();
}

void TLoginDialog::readSettings()
{
    QSettings settings;
    bool saved = settings.value("saved", false).toBool();
    m_user = settings.value("Username", "user").toString();
    m_pswd = encrypt("12345");
    //m_pswd = settings.value("PSWD", encrypt("12345")).toString();
    if(saved)
        ui->editUser->setText(m_user);

    ui->checkBoxSave->setChecked(true);

}

void TLoginDialog::writeSettings()
{
    QSettings settings;
    settings.setValue("Username", m_user);
    settings.setValue("PSWD", m_pswd);
    settings.setValue("saved", ui->checkBoxSave->isChecked());
}

void TLoginDialog::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_moving = true;
        m_lastPos = event->globalPosition().toPoint();
    }
    return QDialog::mousePressEvent(event);
}

void TLoginDialog::mouseReleaseEvent(QMouseEvent *event)
{
    m_moving = false;
    event->accept();
}

void TLoginDialog::mouseMoveEvent(QMouseEvent *event)
{
    QPoint eventPos = event->globalPosition().toPoint();
    if(m_moving && (event->buttons() & Qt::LeftButton) &&
        (eventPos - m_lastPos - pos()).manhattanLength()>QApplication::startDragDistance())
    {
        move(eventPos-m_lastPos);
        m_lastPos = eventPos - pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void TLoginDialog::on_btnOK_clicked()
{
    QString user = ui->editUser->text().trimmed();
    QString pswd = ui->editPSWD->text().trimmed();
    QString encrptPSWD = encrypt(pswd);
    if(user == m_user && (encrptPSWD == m_pswd))
    {
        writeSettings();
        this->accept();
    }
    else
    {
        m_tryCount++;
        if(m_tryCount >= M_MAXCOUNT)
        {
            QMessageBox::critical(this, "错误", "输入错误次太多!!!");
            this->reject();
        }
        else
            QMessageBox::warning(this, "错误提示", "用户名密码错误");
    }
}

