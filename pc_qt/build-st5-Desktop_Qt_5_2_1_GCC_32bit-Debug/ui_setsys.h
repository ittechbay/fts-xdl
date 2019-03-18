/********************************************************************************
** Form generated from reading UI file 'setsys.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSYS_H
#define UI_SETSYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetSys
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;

    void setupUi(QWidget *SetSys)
    {
        if (SetSys->objectName().isEmpty())
            SetSys->setObjectName(QStringLiteral("SetSys"));
        SetSys->resize(700, 480);
        label = new QLabel(SetSys);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 20, 121, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(SetSys);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 420, 81, 31));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(SetSys);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 420, 81, 31));
        pushButton_2->setFont(font1);
        widget = new QWidget(SetSys);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 80, 198, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        retranslateUi(SetSys);

        QMetaObject::connectSlotsByName(SetSys);
    } // setupUi

    void retranslateUi(QWidget *SetSys)
    {
        SetSys->setWindowTitle(QApplication::translate("SetSys", "Form", 0));
        label->setText(QApplication::translate("SetSys", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        pushButton->setText(QApplication::translate("SetSys", "\345\205\263\351\227\255", 0));
        pushButton_2->setText(QApplication::translate("SetSys", "\345\272\224\347\224\250", 0));
        label_2->setText(QApplication::translate("SetSys", "\346\225\260\346\215\256\344\270\212\346\212\245\345\221\250\346\234\237\357\274\232", 0));
        lineEdit->setText(QApplication::translate("SetSys", "1000", 0));
        label_3->setText(QApplication::translate("SetSys", "ms", 0));
    } // retranslateUi

};

namespace Ui {
    class SetSys: public Ui_SetSys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSYS_H
