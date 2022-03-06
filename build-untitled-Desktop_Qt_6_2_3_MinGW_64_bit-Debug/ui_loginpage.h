/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginpage
{
public:
    QWidget *centralwidget;
    QPushButton *adminbutton;
    QPushButton *customerbutton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName(QString::fromUtf8("loginpage"));
        loginpage->resize(710, 600);
        centralwidget = new QWidget(loginpage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        adminbutton = new QPushButton(centralwidget);
        adminbutton->setObjectName(QString::fromUtf8("adminbutton"));
        adminbutton->setGeometry(QRect(160, 320, 80, 24));
        customerbutton = new QPushButton(centralwidget);
        customerbutton->setObjectName(QString::fromUtf8("customerbutton"));
        customerbutton->setGeometry(QRect(500, 320, 80, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 100, 431, 51));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 140, 271, 381));
        label_2->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Lenovo/Downloads/images.png")));
        loginpage->setCentralWidget(centralwidget);
        label_2->raise();
        adminbutton->raise();
        customerbutton->raise();
        label->raise();
        menubar = new QMenuBar(loginpage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 710, 21));
        loginpage->setMenuBar(menubar);
        statusbar = new QStatusBar(loginpage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        loginpage->setStatusBar(statusbar);

        retranslateUi(loginpage);

        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

    void retranslateUi(QMainWindow *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "MainWindow", nullptr));
        adminbutton->setText(QCoreApplication::translate("loginpage", "ADMIN", nullptr));
        customerbutton->setText(QCoreApplication::translate("loginpage", "CUSTOMER", nullptr));
        label->setText(QCoreApplication::translate("loginpage", "WELCOME TO THE WINKEL", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
