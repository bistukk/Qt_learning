#include "mainwindow.h"

#include <QApplication>
#include "tlogindialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TLoginDialog *dlgLogin = new TLoginDialog;
    if(dlgLogin->exec()==QDialog::Accepted)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    else
        return 0;
}
