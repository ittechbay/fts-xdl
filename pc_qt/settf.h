#ifndef SETTF_H
#define SETTF_H

#include <QDialog>

namespace Ui {
class SetTF;
}

class SetTF : public QDialog
{
    Q_OBJECT

public:
    explicit SetTF(QWidget *parent = 0);
    ~SetTF();

private:
    Ui::SetTF *ui;
};

#endif // SETTF_H
