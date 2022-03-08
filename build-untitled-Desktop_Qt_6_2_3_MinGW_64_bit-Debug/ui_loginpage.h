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
<<<<<<< Updated upstream
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
=======
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
>>>>>>> Stashed changes

QT_BEGIN_NAMESPACE

class Ui_loginpage
{
public:
<<<<<<< Updated upstream
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonadmin;
    QPushButton *pushButton_custpmer;

    void setupUi(QDialog *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName(QString::fromUtf8("loginpage"));
        loginpage->resize(964, 427);
        label = new QLabel(loginpage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 110, 311, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(loginpage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 170, 211, 221));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../pictures/images.png")));
        pushButtonadmin = new QPushButton(loginpage);
        pushButtonadmin->setObjectName(QString::fromUtf8("pushButtonadmin"));
        pushButtonadmin->setGeometry(QRect(270, 260, 83, 29));
        pushButton_custpmer = new QPushButton(loginpage);
        pushButton_custpmer->setObjectName(QString::fromUtf8("pushButton_custpmer"));
        pushButton_custpmer->setGeometry(QRect(580, 260, 83, 29));
=======
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
        label_2->setGeometry(QRect(260, 190, 241, 241));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../pictures/images.png")));
        loginpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginpage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 710, 21));
        loginpage->setMenuBar(menubar);
        statusbar = new QStatusBar(loginpage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        loginpage->setStatusBar(statusbar);
>>>>>>> Stashed changes

        retranslateUi(loginpage);

        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

<<<<<<< Updated upstream
    void retranslateUi(QDialog *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("loginpage", "WELCOME TO THE WINKEL", nullptr));
        label_2->setText(QString());
        pushButtonadmin->setText(QCoreApplication::translate("loginpage", "Admin", nullptr));
        pushButton_custpmer->setText(QCoreApplication::translate("loginpage", "Customer", nullptr));
=======
    void retranslateUi(QMainWindow *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "MainWindow", nullptr));
        adminbutton->setText(QCoreApplication::translate("loginpage", "ADMIN", nullptr));
        customerbutton->setText(QCoreApplication::translate("loginpage", "CUSTOMER", nullptr));
        label->setText(QCoreApplication::translate("loginpage", "WELCOME TO THE WINKEL", nullptr));
        label_2->setText(QString());
>>>>>>> Stashed changes
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
