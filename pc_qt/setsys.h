#ifndef SETSYS_H
#define SETSYS_H

#include <QDialog>
#include <QString>

namespace Ui {
class SetSys;
}

class SetSys : public QDialog
{
    Q_OBJECT

public:
    explicit SetSys(QWidget *parent = 0);
    ~SetSys();
    //static QString IP;   //是否在构造函数参数初始化时设置合适？构造函数参数初始化方法？
    //static QString mask;


private slots:
    void on_pushButton_clicked();

private:
    Ui::SetSys *ui;

};

#endif // SETSYS_H
