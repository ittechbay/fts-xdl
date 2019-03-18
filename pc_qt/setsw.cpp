#include "setsw.h"
#include "ui_setsw.h"

setSW::setSW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setSW)
{
    ui->setupUi(this);
}

setSW::~setSW()
{
    delete ui;
}
