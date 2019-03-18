#include "showlog.h"
#include "ui_showlog.h"

ShowLog::ShowLog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowLog)
{
    ui->setupUi(this);

    ui->tableWidget->insertRow(0);
    ui->tableWidget->insertRow(1);
    ui->tableWidget->insertRow(2);
    ui->tableWidget->insertRow(3);
    ui->tableWidget->insertRow(4);
    ui->tableWidget->insertRow(5);
    ui->tableWidget->insertRow(6);
    ui->tableWidget->insertRow(7);
    ui->tableWidget->insertRow(8);
    ui->tableWidget->insertRow(9);
    ui->tableWidget->insertRow(10);
    ui->tableWidget->insertRow(11);
    ui->tableWidget->insertRow(12);
    ui->tableWidget->insertRow(13);
    ui->tableWidget->insertRow(14);

}

ShowLog::~ShowLog()
{
    delete ui;
}
