/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QWidget *centralwidget;
<<<<<<< Updated upstream
    QLabel *label;
    QPushButton *nextbutton;
=======
    QPushButton *continuebutton;
    QLabel *label;
>>>>>>> Stashed changes
    QMenuBar *menubar;
    QMenu *menuTHE_WINKEL;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
<<<<<<< Updated upstream
        MainWindow->resize(984, 582);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -30, 991, 601));
        label->setPixmap(QPixmap(QString::fromUtf8("../pictures/Black and White Modern Minimalist Initials Logo (1).png")));
        label->setScaledContents(true);
        nextbutton = new QPushButton(centralwidget);
        nextbutton->setObjectName(QString::fromUtf8("nextbutton"));
        nextbutton->setGeometry(QRect(840, 470, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 984, 25));
=======
        MainWindow->resize(736, 547);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        continuebutton = new QPushButton(centralwidget);
        continuebutton->setObjectName(QString::fromUtf8("continuebutton"));
        continuebutton->setGeometry(QRect(590, 440, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 511, 531));
        label->setPixmap(QPixmap(QString::fromUtf8("../pictures/Black and White Modern Minimalist Initials Logo (1).png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 736, 21));
>>>>>>> Stashed changes
        menuTHE_WINKEL = new QMenu(menubar);
        menuTHE_WINKEL->setObjectName(QString::fromUtf8("menuTHE_WINKEL"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuTHE_WINKEL->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
<<<<<<< Updated upstream
        label->setText(QString());
        nextbutton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
=======
        continuebutton->setText(QCoreApplication::translate("MainWindow", "CONTINUE", nullptr));
        label->setText(QString());
>>>>>>> Stashed changes
        menuTHE_WINKEL->setTitle(QCoreApplication::translate("MainWindow", "THE WINKEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
