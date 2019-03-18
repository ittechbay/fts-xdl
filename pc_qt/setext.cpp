#include "setext.h"
#include "ui_setext.h"

setEXT::setEXT(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setEXT)
{
    ui->setupUi(this);
}

setEXT::~setEXT()
{
    delete ui;
}
