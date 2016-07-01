// #include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include "codeeditor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*
    MainWindow w;
    w.show();

    return a.exec();
    */

    CodeEditor editor;
    editor.setWindowTitle(QObject::tr("Code Editor Example"));
    editor.showMaximized();
    editor.show();

    return a.exec();

}

