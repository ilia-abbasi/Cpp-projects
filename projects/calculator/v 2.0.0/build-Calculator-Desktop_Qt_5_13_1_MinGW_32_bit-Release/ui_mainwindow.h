/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionApplication;
    QAction *actionDeveloper;
    QWidget *centralwidget;
    QPushButton *b0;
    QPushButton *b000;
    QPushButton *bdot;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *bequal;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QPushButton *bplus;
    QPushButton *bmin;
    QPushButton *bac;
    QPushButton *bc;
    QPushButton *bmulti;
    QPushButton *bdivide;
    QLineEdit *screen;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(173, 312);
        MainWindow->setStyleSheet(QString::fromUtf8("#label {\n"
"\n"
"	color: gray;\n"
"}"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionApplication = new QAction(MainWindow);
        actionApplication->setObjectName(QString::fromUtf8("actionApplication"));
        actionDeveloper = new QAction(MainWindow);
        actionDeveloper->setObjectName(QString::fromUtf8("actionDeveloper"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        b0 = new QPushButton(centralwidget);
        b0->setObjectName(QString::fromUtf8("b0"));
        b0->setGeometry(QRect(10, 240, 31, 31));
        b000 = new QPushButton(centralwidget);
        b000->setObjectName(QString::fromUtf8("b000"));
        b000->setGeometry(QRect(50, 240, 31, 31));
        bdot = new QPushButton(centralwidget);
        bdot->setObjectName(QString::fromUtf8("bdot"));
        bdot->setGeometry(QRect(90, 240, 31, 31));
        b1 = new QPushButton(centralwidget);
        b1->setObjectName(QString::fromUtf8("b1"));
        b1->setGeometry(QRect(10, 200, 31, 31));
        b2 = new QPushButton(centralwidget);
        b2->setObjectName(QString::fromUtf8("b2"));
        b2->setGeometry(QRect(50, 200, 31, 31));
        b3 = new QPushButton(centralwidget);
        b3->setObjectName(QString::fromUtf8("b3"));
        b3->setGeometry(QRect(90, 200, 31, 31));
        bequal = new QPushButton(centralwidget);
        bequal->setObjectName(QString::fromUtf8("bequal"));
        bequal->setGeometry(QRect(130, 200, 31, 71));
        b4 = new QPushButton(centralwidget);
        b4->setObjectName(QString::fromUtf8("b4"));
        b4->setGeometry(QRect(10, 160, 31, 31));
        b5 = new QPushButton(centralwidget);
        b5->setObjectName(QString::fromUtf8("b5"));
        b5->setGeometry(QRect(50, 160, 31, 31));
        b6 = new QPushButton(centralwidget);
        b6->setObjectName(QString::fromUtf8("b6"));
        b6->setGeometry(QRect(90, 160, 31, 31));
        b7 = new QPushButton(centralwidget);
        b7->setObjectName(QString::fromUtf8("b7"));
        b7->setGeometry(QRect(10, 120, 31, 31));
        b8 = new QPushButton(centralwidget);
        b8->setObjectName(QString::fromUtf8("b8"));
        b8->setGeometry(QRect(50, 120, 31, 31));
        b9 = new QPushButton(centralwidget);
        b9->setObjectName(QString::fromUtf8("b9"));
        b9->setGeometry(QRect(90, 120, 31, 31));
        bplus = new QPushButton(centralwidget);
        bplus->setObjectName(QString::fromUtf8("bplus"));
        bplus->setGeometry(QRect(130, 160, 31, 31));
        bmin = new QPushButton(centralwidget);
        bmin->setObjectName(QString::fromUtf8("bmin"));
        bmin->setGeometry(QRect(130, 120, 31, 31));
        bac = new QPushButton(centralwidget);
        bac->setObjectName(QString::fromUtf8("bac"));
        bac->setGeometry(QRect(10, 80, 31, 31));
        bc = new QPushButton(centralwidget);
        bc->setObjectName(QString::fromUtf8("bc"));
        bc->setGeometry(QRect(50, 80, 31, 31));
        bmulti = new QPushButton(centralwidget);
        bmulti->setObjectName(QString::fromUtf8("bmulti"));
        bmulti->setGeometry(QRect(90, 80, 31, 31));
        bdivide = new QPushButton(centralwidget);
        bdivide->setObjectName(QString::fromUtf8("bdivide"));
        bdivide->setGeometry(QRect(130, 80, 31, 31));
        screen = new QLineEdit(centralwidget);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setGeometry(QRect(10, 9, 151, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(16, 10, 141, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 173, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionApplication);
        menuAbout->addAction(actionDeveloper);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionApplication->setText(QCoreApplication::translate("MainWindow", "Application", nullptr));
        actionDeveloper->setText(QCoreApplication::translate("MainWindow", "Developer", nullptr));
        b0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        b000->setText(QCoreApplication::translate("MainWindow", "000", nullptr));
        bdot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        b1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        bequal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        b4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        b6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        b7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        b8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        b9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        bplus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        bmin->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        bc->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        bmulti->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        bdivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
