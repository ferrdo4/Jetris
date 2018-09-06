#include "jetris.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Jetris w;
    w.show();

    return a.exec();
}
