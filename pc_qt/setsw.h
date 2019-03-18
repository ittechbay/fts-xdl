#ifndef SETSW_H
#define SETSW_H

#include <QDialog>

namespace Ui {
class setSW;
}

class setSW : public QDialog
{
    Q_OBJECT

public:
    explicit setSW(QWidget *parent = 0);
    ~setSW();

private:
    Ui::setSW *ui;
};

#endif // SETSW_H
