#ifndef QTMYWINDOW_H
#define QTMYWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_QtMyWindow.h"
#include "DataWindow.h"

class QtMyWindow : public QMainWindow
{
    Q_OBJECT

public:
    QtMyWindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtMyWindowClass ui;
};


#endif