/********************************************************************************
** Form generated from reading UI file 'process3.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESS3_H
#define UI_PROCESS3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_process3Class
{
public:
    QWidget *centralWidget;
    QPushButton *buttonLogin;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelUser;
    QLabel *labelPassword;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_User;
    QPushButton *buttonProcess;
    QTextEdit *textEdit_Cmd;
    QLineEdit *lineEdit_Cmd;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *process3Class)
    {
        if (process3Class->objectName().isEmpty())
            process3Class->setObjectName(QString::fromUtf8("process3Class"));
        process3Class->resize(304, 336);
        centralWidget = new QWidget(process3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        buttonLogin = new QPushButton(centralWidget);
        buttonLogin->setObjectName(QString::fromUtf8("buttonLogin"));
        buttonLogin->setGeometry(QRect(110, 90, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 10, 189, 48));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelUser = new QLabel(layoutWidget);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));

        gridLayout->addWidget(labelUser, 0, 0, 1, 1);

        labelPassword = new QLabel(layoutWidget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        gridLayout->addWidget(labelPassword, 1, 0, 1, 2);

        lineEdit_Password = new QLineEdit(layoutWidget);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));

        gridLayout->addWidget(lineEdit_Password, 1, 2, 1, 1);

        lineEdit_User = new QLineEdit(layoutWidget);
        lineEdit_User->setObjectName(QString::fromUtf8("lineEdit_User"));

        gridLayout->addWidget(lineEdit_User, 0, 2, 1, 1);

        buttonProcess = new QPushButton(centralWidget);
        buttonProcess->setObjectName(QString::fromUtf8("buttonProcess"));
        buttonProcess->setGeometry(QRect(220, 120, 75, 23));
        textEdit_Cmd = new QTextEdit(centralWidget);
        textEdit_Cmd->setObjectName(QString::fromUtf8("textEdit_Cmd"));
        textEdit_Cmd->setGeometry(QRect(20, 150, 181, 121));
        lineEdit_Cmd = new QLineEdit(centralWidget);
        lineEdit_Cmd->setObjectName(QString::fromUtf8("lineEdit_Cmd"));
        lineEdit_Cmd->setGeometry(QRect(20, 120, 181, 20));
        process3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(process3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 304, 23));
        process3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(process3Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        process3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(process3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        process3Class->setStatusBar(statusBar);

        retranslateUi(process3Class);

        QMetaObject::connectSlotsByName(process3Class);
    } // setupUi

    void retranslateUi(QMainWindow *process3Class)
    {
        process3Class->setWindowTitle(QCoreApplication::translate("process3Class", "process3", nullptr));
        buttonLogin->setText(QCoreApplication::translate("process3Class", "LOGIN", nullptr));
        labelUser->setText(QCoreApplication::translate("process3Class", "USER", nullptr));
        labelPassword->setText(QCoreApplication::translate("process3Class", "PASSWORD", nullptr));
        buttonProcess->setText(QCoreApplication::translate("process3Class", "NewProcess", nullptr));
    } // retranslateUi

};

namespace Ui {
    class process3Class: public Ui_process3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESS3_H
