/********************************************************************************
** Form generated from reading UI file 'Command.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMAND_H
#define UI_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommandClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CommandClass)
    {
        if (CommandClass->objectName().isEmpty())
            CommandClass->setObjectName(QString::fromUtf8("CommandClass"));
        CommandClass->resize(600, 400);
        menuBar = new QMenuBar(CommandClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        CommandClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CommandClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CommandClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CommandClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CommandClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CommandClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CommandClass->setStatusBar(statusBar);

        retranslateUi(CommandClass);

        QMetaObject::connectSlotsByName(CommandClass);
    } // setupUi

    void retranslateUi(QMainWindow *CommandClass)
    {
        CommandClass->setWindowTitle(QCoreApplication::translate("CommandClass", "Command", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommandClass: public Ui_CommandClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMAND_H
