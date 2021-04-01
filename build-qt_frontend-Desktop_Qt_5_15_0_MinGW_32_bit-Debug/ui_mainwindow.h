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
#include <QtWidgets/QLineEdit>
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
    QLineEdit *lineEditId;
    QLabel *label;
    QLineEdit *lineEditRaiseId;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditRaiseAmount;
    QPushButton *btnRaise;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(937, 835);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnGetAllPersons = new QPushButton(centralwidget);
        btnGetAllPersons->setObjectName(QString::fromUtf8("btnGetAllPersons"));
        btnGetAllPersons->setGeometry(QRect(190, 50, 131, 101));
        QFont font;
        font.setPointSize(12);
        btnGetAllPersons->setFont(font);
        btnGetPerson = new QPushButton(centralwidget);
        btnGetPerson->setObjectName(QString::fromUtf8("btnGetPerson"));
        btnGetPerson->setGeometry(QRect(190, 170, 131, 101));
        btnGetPerson->setFont(font);
        btnGetFullname = new QPushButton(centralwidget);
        btnGetFullname->setObjectName(QString::fromUtf8("btnGetFullname"));
        btnGetFullname->setEnabled(false);
        btnGetFullname->setGeometry(QRect(190, 300, 131, 101));
        btnGetFullname->setFont(font);
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));
        labelResult->setGeometry(QRect(350, 60, 431, 171));
        labelResult->setFont(font);
        lineEditId = new QLineEdit(centralwidget);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));
        lineEditId->setGeometry(QRect(40, 180, 81, 51));
        QFont font1;
        font1.setPointSize(14);
        lineEditId->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 140, 51, 21));
        label->setFont(font1);
        lineEditRaiseId = new QLineEdit(centralwidget);
        lineEditRaiseId->setObjectName(QString::fromUtf8("lineEditRaiseId"));
        lineEditRaiseId->setGeometry(QRect(50, 540, 101, 81));
        lineEditRaiseId->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 500, 51, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 500, 81, 21));
        label_3->setFont(font1);
        lineEditRaiseAmount = new QLineEdit(centralwidget);
        lineEditRaiseAmount->setObjectName(QString::fromUtf8("lineEditRaiseAmount"));
        lineEditRaiseAmount->setGeometry(QRect(210, 540, 101, 81));
        lineEditRaiseAmount->setFont(font1);
        btnRaise = new QPushButton(centralwidget);
        btnRaise->setObjectName(QString::fromUtf8("btnRaise"));
        btnRaise->setGeometry(QRect(340, 540, 261, 101));
        btnRaise->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 937, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Summa", nullptr));
        btnRaise->setText(QCoreApplication::translate("MainWindow", "Suorita Nosto/Pano", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
