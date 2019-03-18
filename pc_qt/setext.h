#ifndef SETEXT_H
#define SETEXT_H

#include <QDialog>

namespace Ui {
class setEXT;
}

class setEXT : public QDialog
{
    Q_OBJECT

public:
    explicit setEXT(QWidget *parent = 0);
    ~setEXT();

private:
    Ui::setEXT *ui;
};

#endif // SETEXT_H
