#include "settf.h"
#include "ui_settf.h"

SetTF::SetTF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetTF)
{
    ui->setupUi(this);
}

SetTF::~SetTF()
{
    delete ui;
}
