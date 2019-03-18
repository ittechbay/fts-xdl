#include "setb.h"
#include "ui_setb.h"

setB::setB(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setB)
{
    ui->setupUi(this);
}

setB::~setB()
{
    delete ui;
}
