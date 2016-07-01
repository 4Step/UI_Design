#include "dummy.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dummy w;
    w.show();

    return a.exec();
}
