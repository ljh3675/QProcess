#include <iostream>
#include "process3.h"
#include <windows.h>
#include <QProcess>

process3::process3(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.buttonLogin, SIGNAL(clicked()), this, SLOT(btnEvent()));
    connect(ui.buttonProcess,SIGNAL(clicked()),this,SLOT(btnProcess()));
}

void process3::btnEvent()
{
    QString usr = ui.lineEdit_User->text();
    QString pwd = ui.lineEdit_Password->text();
    if (usr==QString::fromLocal8Bit("ljhfmvp")) {
        if (pwd==QString::fromLocal8Bit("2020")) {
            MessageBoxA(NULL, "WELCOME!", "LOGIN", 0);
        } else {
            MessageBoxA(NULL, "user password incorrect!", "LOGIN", 0);
        }
    } else {
        MessageBoxA(NULL, "user name incorrect!", "LOGIN", 0);
    }
}

void process3::btnProcess()
{
    ui.textEdit_Cmd->clear();
    QProcess pro(this);
    pro.setProgram("cmd");
    QStringList argument;
    argument << "/c" << ui.lineEdit_Cmd->text();
    pro.setArguments(argument);
    pro.start();

    pro.waitForStarted();
    pro.waitForFinished();
    QString cmdinfo = QString::fromLocal8Bit(pro.readAllStandardOutput());

    ui.textEdit_Cmd->setText(cmdinfo);

}
