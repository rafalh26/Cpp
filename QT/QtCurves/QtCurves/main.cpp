#include "QtCurves.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtCurves w;
    w.show();
    return a.exec();
}
