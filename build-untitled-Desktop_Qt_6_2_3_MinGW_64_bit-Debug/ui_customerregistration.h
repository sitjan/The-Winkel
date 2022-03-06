/********************************************************************************
** Form generated from reading UI file 'customerregistration.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERREGISTRATION_H
#define UI_CUSTOMERREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customerregistration
{
public:
    QLabel *namelabel;
    QLabel *usernamelabell;
    QLabel *passwordlabel;
    QLabel *addresslabel;
    QLabel *contactlabel;
    QLineEdit *inputname;
    QLineEdit *inputaddress;
    QLineEdit *inputcontact;
    QLineEdit *inputusername;
    QLineEdit *inputpassword;
    QPushButton *registerbutton;

    void setupUi(QDialog *customerregistration)
    {
        if (customerregistration->objectName().isEmpty())
            customerregistration->setObjectName(QString::fromUtf8("customerregistration"));
        customerregistration->resize(452, 342);
        namelabel = new QLabel(customerregistration);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(70, 40, 71, 16));
        usernamelabell = new QLabel(customerregistration);
        usernamelabell->setObjectName(QString::fromUtf8("usernamelabell"));
        usernamelabell->setGeometry(QRect(70, 180, 71, 16));
        passwordlabel = new QLabel(customerregistration);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setGeometry(QRect(70, 210, 71, 16));
        addresslabel = new QLabel(customerregistration);
        addresslabel->setObjectName(QString::fromUtf8("addresslabel"));
        addresslabel->setGeometry(QRect(70, 70, 61, 16));
        contactlabel = new QLabel(customerregistration);
        contactlabel->setObjectName(QString::fromUtf8("contactlabel"));
        contactlabel->setGeometry(QRect(70, 100, 61, 16));
        inputname = new QLineEdit(customerregistration);
        inputname->setObjectName(QString::fromUtf8("inputname"));
        inputname->setGeometry(QRect(240, 30, 113, 24));
        inputaddress = new QLineEdit(customerregistration);
        inputaddress->setObjectName(QString::fromUtf8("inputaddress"));
        inputaddress->setGeometry(QRect(240, 60, 113, 24));
        inputcontact = new QLineEdit(customerregistration);
        inputcontact->setObjectName(QString::fromUtf8("inputcontact"));
        inputcontact->setGeometry(QRect(240, 90, 113, 24));
        inputusername = new QLineEdit(customerregistration);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));
        inputusername->setGeometry(QRect(240, 170, 113, 24));
        inputpassword = new QLineEdit(customerregistration);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));
        inputpassword->setGeometry(QRect(240, 200, 113, 24));
        registerbutton = new QPushButton(customerregistration);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setGeometry(QRect(260, 280, 80, 24));

        retranslateUi(customerregistration);

        QMetaObject::connectSlotsByName(customerregistration);
    } // setupUi

    void retranslateUi(QDialog *customerregistration)
    {
        customerregistration->setWindowTitle(QCoreApplication::translate("customerregistration", "Dialog", nullptr));
        namelabel->setText(QCoreApplication::translate("customerregistration", "NAME", nullptr));
        usernamelabell->setText(QCoreApplication::translate("customerregistration", "USERNAME", nullptr));
        passwordlabel->setText(QCoreApplication::translate("customerregistration", "PASSWORD", nullptr));
        addresslabel->setText(QCoreApplication::translate("customerregistration", "ADDRESS", nullptr));
        contactlabel->setText(QCoreApplication::translate("customerregistration", "CONTACT", nullptr));
        registerbutton->setText(QCoreApplication::translate("customerregistration", "REGISTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerregistration: public Ui_customerregistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERREGISTRATION_H
