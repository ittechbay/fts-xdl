#include "setpower.h"
#include "ui_setpower.h"
#include <QSql>
#include <QSqlQuery>
#include <QString>

setPower::setPower(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setPower)
{
    timer= new QTimer();
    timer->setInterval(5000);
    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(update_data()));
    ui->setupUi(this);
}

void setPower::update_data()
{
    QSqlQuery query;
    //query.prepare("select INTO people (name) VALUES (:name)");
    //query.bindValue(":name", name);
    query.exec("select * from set_pwr order by id desc");
    query.next();
    int current_size = query.value(1).toInt();


    ui->label_3->setText( QString::number(current_size));
    this->update();
}

setPower::~setPower()
{
    delete ui;
}
