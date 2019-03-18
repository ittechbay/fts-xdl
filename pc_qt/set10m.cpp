#include "set10m.h"
#include "ui_set10m.h"

set10M::set10M(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set10M)
{
    ui->setupUi(this);
}

set10M::~set10M()
{
    delete ui;
}
