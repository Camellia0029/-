#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Command.h"

class Command : public QMainWindow
{
    Q_OBJECT

public:
    Command(QWidget *parent = nullptr);
    ~Command();

private:
    Ui::CommandClass ui;
};
