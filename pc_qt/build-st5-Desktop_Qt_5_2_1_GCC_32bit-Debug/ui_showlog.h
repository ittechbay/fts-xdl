/********************************************************************************
** Form generated from reading UI file 'showlog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWLOG_H
#define UI_SHOWLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowLog
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *ShowLog)
    {
        if (ShowLog->objectName().isEmpty())
            ShowLog->setObjectName(QStringLiteral("ShowLog"));
        ShowLog->resize(800, 480);
        scrollArea = new QScrollArea(ShowLog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(40, 60, 631, 351));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 627, 347));
        tableWidget = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 621, 341));
        tableWidget->verticalHeader()->setVisible(false);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_2 = new QLabel(ShowLog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 20, 54, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(ShowLog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 420, 91, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton_5->setFont(font1);
        pushButton_6 = new QPushButton(ShowLog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(320, 420, 91, 41));
        pushButton_6->setFont(font1);

        retranslateUi(ShowLog);
        QObject::connect(pushButton_5, SIGNAL(clicked()), ShowLog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ShowLog);
    } // setupUi

    void retranslateUi(QDialog *ShowLog)
    {
        ShowLog->setWindowTitle(QApplication::translate("ShowLog", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ShowLog", "\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ShowLog", "\344\272\213\344\273\266", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ShowLog", "\346\235\245\346\272\220", 0));
        label_2->setText(QApplication::translate("ShowLog", "\346\227\245\345\277\227", 0));
        pushButton_5->setText(QApplication::translate("ShowLog", "\350\277\224\345\233\236", 0));
        pushButton_6->setText(QApplication::translate("ShowLog", "\345\210\267\346\226\260", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowLog: public Ui_ShowLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWLOG_H
