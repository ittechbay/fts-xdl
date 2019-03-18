#ifndef SHOWLOG_H
#define SHOWLOG_H

#include <QDialog>

namespace Ui {
class ShowLog;
}

class ShowLog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowLog(QWidget *parent = 0);
    ~ShowLog();

private:
    Ui::ShowLog *ui;
};

#endif // SHOWLOG_H
