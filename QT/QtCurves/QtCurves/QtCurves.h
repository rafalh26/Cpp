#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCurves.h"

class QtCurves : public QMainWindow
{
    Q_OBJECT

public:
    QtCurves(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtCurvesClass ui;
};
