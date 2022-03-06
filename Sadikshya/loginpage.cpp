#include "loginpage.h"
#include "ui_loginpage.h"
#include "qprocess.h"

loginpage::loginpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginpage)
{
    ui->setupUi(this);
}

loginpage::~loginpage()
{
    delete ui;
}

void loginpage::on_adminbutton_clicked()
{
     admin=new class admin(this);
     admin->show();
           //ui->adminbutton->clear();

}


void loginpage::on_customerbutton_clicked()
{
    customer=new class customer(this);
    customer->show();
}

