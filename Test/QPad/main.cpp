#include "qpad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPad w;
    w.showMaximized();
    w.show();

    return a.exec();
}
