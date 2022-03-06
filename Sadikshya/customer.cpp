#include "customer.h"
#include "ui_customer.h"
#include "customerregistration.h"

customer::customer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::customer)
{
    ui->setupUi(this);
}

customer::~customer()
{
    delete ui;
}

void customer::on_loginbutton_clicked()
{

}



void customer::on_registerbutton_clicked()
{
    cr=new class customerregistration(this);
    cr->show();
}

