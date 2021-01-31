#ifndef DATA_WINDOW_H
#define DATA_WINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_DataWindow.h"
#include "QtMyWindow.h"

class DataWindow : public QMainWindow
{
    Q_OBJECT

public:
    DataWindow(QWidget* parent = Q_NULLPTR);

private:
    Ui::DataWindowClass ui;
};

#endif // !DATA_WINDOW_H

