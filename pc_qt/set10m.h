#ifndef SET10M_H
#define SET10M_H

#include <QDialog>

namespace Ui {
class set10M;
}

class set10M : public QDialog
{
    Q_OBJECT

public:
    explicit set10M(QWidget *parent = 0);
    ~set10M();

private:
    Ui::set10M *ui;
};

#endif // SET10M_H
