#include "setalloc.h"
#include "ui_setalloc.h"

setAlloc::setAlloc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setAlloc)
{
    ui->setupUi(this);
}

setAlloc::~setAlloc()
{
    delete ui;
}
