#ifndef SETGNSS_H
#define SETGNSS_H

#include <QDialog>

namespace Ui {
class setGNSS;
}

class setGNSS : public QDialog
{
    Q_OBJECT

public:
    explicit setGNSS(QWidget *parent = 0);
    ~setGNSS();

private:
    Ui::setGNSS *ui;
};

#endif // SETGNSS_H
