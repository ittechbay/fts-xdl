#ifndef SETPOWER_H
#define SETPOWER_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class setPower;
}

class setPower : public QDialog
{
    Q_OBJECT

public:
    explicit setPower(QWidget *parent = 0);
    ~setPower();
private slots:
    void update_data();

private:
    Ui::setPower *ui;
    QTimer *timer;
};

#endif // SETPOWER_H
