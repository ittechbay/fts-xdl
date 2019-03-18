#include "logmod.h"
#include <QFile>
#include <QString>
#include <QTextStream>

LogMod::LogMod(QString &filename , QObject *parent) : logfile(filename),QObject(parent)
{

}

void LogMod::add(QTime &t, QString &etype, QString &src)
{
    if (logfile.size() > 2*1024*1024)
        logfile.remove();
    if (logfile.open(QIODevice::ReadWrite))
    {
        QTextStream stream(&logfile);
        stream << t.toString("hh:mm:ss") << "\t"<<etype<<"\t"<<src<<endl;

    }
}


void LogMod::clr()
{
    logfile.open(QIODevice::Truncate);
    logfile.close();
}
