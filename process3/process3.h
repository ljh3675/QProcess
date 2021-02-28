#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_process3.h"

class process3 : public QMainWindow
{
    Q_OBJECT

public:
    process3(QWidget *parent = Q_NULLPTR);
public slots:
    void btnEvent();
    void btnProcess();
private:
    Ui::process3Class ui;
};
