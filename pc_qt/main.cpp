#include "mainpanel.h"
#include <QApplication>
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>
#include <config.h>
#include <QtSql>


void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray localMsg = msg.toLocal8Bit();
    FILE *fp = fopen(ST_LOG_FILE_NAME, "a+");
    switch (type) {
    case QtDebugMsg:
        fprintf(fp, "%s\n", localMsg.constData());
        break;
    case QtWarningMsg:
        fprintf(stderr, "xxx Warning: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtCriticalMsg:
        fprintf(stderr, "xxx Critical: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtFatalMsg:
        fprintf(stderr, "xxx Fatal: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        abort();
    }
    fclose(fp);
}

int main(int argc, char *argv[])
{
    qInstallMessageHandler(myMessageOutput);
    QApplication a(argc, argv);
    mainPanel w;
    //qDebug() << "##test zbl##:";
   // qWarning() << "##test zbl##:";



      QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
      db.setDatabaseName("/var/shitong/run.dat");
      bool ok = db.open();


    w.show();

    return a.exec();
}
