#include "smapl_4_1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    smapl_4_1 w;
    w.show();
    return a.exec();
}
