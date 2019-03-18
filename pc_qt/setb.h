#ifndef SETB_H
#define SETB_H

#include <QDialog>

namespace Ui {
class setB;
}

class setB : public QDialog
{
    Q_OBJECT

public:
    explicit setB(QWidget *parent = 0);
    ~setB();

private:
    Ui::setB *ui;
};

#endif // SETB_H
