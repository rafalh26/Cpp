#include "QtMyWindow.h"
#include "DataWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtMyWindow w;
    DataWindow dataTable;
    dataTable.show();
    w.show();
    return a.exec();
}
