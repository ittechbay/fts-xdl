#ifndef LOGMOD_H
#define LOGMOD_H

#include <QObject>
#include <QFile>
#include <QTime>
#include <QString>

class LogMod : public QObject
{
    Q_OBJECT
public:
    explicit LogMod(QString &filename, QObject *parent = 0);

    QFile logfile;
    void add(QTime &t, QString &etype, QString &src);
    void clr();



signals:

public slots:
};

#endif // LOGMOD_H
