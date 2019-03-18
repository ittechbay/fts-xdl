/********************************************************************************
** Form generated from reading UI file 'setntp.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETNTP_H
#define UI_SETNTP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setNTP
{
public:
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *setNTP)
    {
        if (setNTP->objectName().isEmpty())
            setNTP->setObjectName(QStringLiteral("setNTP"));
        setNTP->resize(800, 480);
        label = new QLabel(setNTP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 10, 41, 20));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton_5 = new QPushButton(setNTP);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(650, 410, 91, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton_5->setFont(font1);
        pushButton_6 = new QPushButton(setNTP);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(650, 10, 91, 41));
        pushButton_6->setFont(font1);
        widget = new QWidget(setNTP);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 144, 321, 141));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);


        retranslateUi(setNTP);
        QObject::connect(pushButton_5, SIGNAL(clicked()), setNTP, SLOT(close()));

        QMetaObject::connectSlotsByName(setNTP);
    } // setupUi

    void retranslateUi(QDialog *setNTP)
    {
        setNTP->setWindowTitle(QApplication::translate("setNTP", "Dialog", 0));
        label->setText(QApplication::translate("setNTP", "NTP", 0));
        pushButton_5->setText(QApplication::translate("setNTP", "\350\277\224\345\233\236", 0));
        pushButton_6->setText(QApplication::translate("setNTP", "\345\244\215\344\275\215", 0));
        label_2->setText(QApplication::translate("setNTP", "IP\345\234\260\345\235\200\357\274\232", 0));
        label_3->setText(QApplication::translate("setNTP", "\345\255\220\347\275\221\346\216\251\347\240\201\357\274\232", 0));
        label_4->setText(QApplication::translate("setNTP", "\347\275\221\345\205\263\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class setNTP: public Ui_setNTP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETNTP_H
