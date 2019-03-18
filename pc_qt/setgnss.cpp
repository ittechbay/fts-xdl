#include "setgnss.h"
#include "ui_setgnss.h"

setGNSS::setGNSS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setGNSS)
{
    ui->setupUi(this);
}

setGNSS::~setGNSS()
{
    delete ui;
}
