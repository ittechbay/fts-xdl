/********************************************************************************
** Form generated from reading UI file 'setip.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETIP_H
#define UI_SETIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetIP
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QWidget *SetIP)
    {
        if (SetIP->objectName().isEmpty())
            SetIP->setObjectName(QStringLiteral("SetIP"));
        SetIP->resize(700, 480);
        label = new QLabel(SetIP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 20, 121, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(SetIP);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 420, 81, 31));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        widget = new QWidget(SetIP);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 160, 294, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QStringLiteral("widget1"));

        horizontalLayout->addWidget(widget1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        retranslateUi(SetIP);

        QMetaObject::connectSlotsByName(SetIP);
    } // setupUi

    void retranslateUi(QWidget *SetIP)
    {
        SetIP->setWindowTitle(QApplication::translate("SetIP", "Form", 0));
        label->setText(QApplication::translate("SetIP", "\350\256\276\347\275\256\346\227\266\347\273\237IP", 0));
        pushButton->setText(QApplication::translate("SetIP", "\347\241\256\345\256\232", 0));
        label_2->setText(QApplication::translate("SetIP", "IP", 0));
        label_4->setText(QApplication::translate("SetIP", "mask", 0));
        label_3->setText(QApplication::translate("SetIP", "\350\257\267\345\260\206\346\234\254\346\234\272IP\350\256\276\347\275\256\344\270\272\344\270\216\346\227\266\347\273\237\350\256\276\345\244\207\345\220\214\344\270\200\347\275\221\346\256\265", 0));
    } // retranslateUi

};

namespace Ui {
    class SetIP: public Ui_SetIP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETIP_H
