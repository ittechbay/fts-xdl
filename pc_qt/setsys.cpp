#include "setsys.h"
#include "ui_setsys.h"

#include "QString"

SetSys::SetSys(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetSys)
{
    ui->setupUi(this);

}

SetSys::~SetSys()
{
    delete ui;
}

void SetSys::on_pushButton_clicked()
{
    //SetSys::IP = ui->lineEdit->text();
    //SetSys::mask = ui->lineEdit_2->text();

    accept();
}

//QString SetSys::IP;
//QString SetSys::mask;
