#ifndef SETALLOC_H
#define SETALLOC_H

#include <QDialog>

namespace Ui {
class setAlloc;
}

class setAlloc : public QDialog
{
    Q_OBJECT

public:
    explicit setAlloc(QWidget *parent = 0);
    ~setAlloc();

private:
    Ui::setAlloc *ui;
};

#endif // SETALLOC_H
