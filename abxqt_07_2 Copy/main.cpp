#include "tformtable.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TFormTable w;
    w.show();
    return a.exec();
}
