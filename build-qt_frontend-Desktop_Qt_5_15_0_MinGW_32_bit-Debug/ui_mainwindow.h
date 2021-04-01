/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnGetAllPersons;
    QPushButton *btnGetPerson;
    QPushButton *btnGetFullname;
    QLabel *labelResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnGetAllPersons = new QPushButton(centralwidget);
        btnGetAllPersons->setObjectName(QString::fromUtf8("btnGetAllPersons"));
        btnGetAllPersons->setGeometry(QRect(30, 60, 131, 101));
        QFont font;
        font.setPointSize(12);
        btnGetAllPersons->setFont(font);
        btnGetPerson = new QPushButton(centralwidget);
        btnGetPerson->setObjectName(QString::fromUtf8("btnGetPerson"));
        btnGetPerson->setGeometry(QRect(30, 180, 131, 101));
        btnGetPerson->setFont(font);
        btnGetFullname = new QPushButton(centralwidget);
        btnGetFullname->setObjectName(QString::fromUtf8("btnGetFullname"));
        btnGetFullname->setGeometry(QRect(30, 310, 131, 101));
        btnGetFullname->setFont(font);
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));
        labelResult->setGeometry(QRect(270, 110, 361, 171));
        labelResult->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnGetAllPersons->setText(QCoreApplication::translate("MainWindow", "Kaikki asiakkaat", nullptr));
        btnGetPerson->setText(QCoreApplication::translate("MainWindow", "yksi asiakas", nullptr));
        btnGetFullname->setText(QCoreApplication::translate("MainWindow", "koko nimi", nullptr));
        labelResult->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
