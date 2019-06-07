#include "mainwindow.h"
#include "llama.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    llama l;
    l.conecta();
    MainWindow w;
    w.show();

    return a.exec();
}
