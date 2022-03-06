 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_continuebutton_clicked()
{
    hide();
    //loginpage login;
    //login.setModal(false);
    //login.exec();
    login=new loginpage(this);
    login->show();
}

