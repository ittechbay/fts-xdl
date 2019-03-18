/********************************************************************************
** Form generated from reading UI file 'set10m.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET10M_H
#define UI_SET10M_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_set10M
{
public:
    QPushButton *pushButton_0;
    QLabel *label;
    QPushButton *pushButton_1;

    void setupUi(QDialog *set10M)
    {
        if (set10M->objectName().isEmpty())
            set10M->setObjectName(QStringLiteral("set10M"));
        set10M->resize(800, 480);
        pushButton_0 = new QPushButton(set10M);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(660, 430, 91, 41));
        QFont font;
        font.setPointSize(16);
        pushButton_0->setFont(font);
        label = new QLabel(set10M);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 40, 54, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        pushButton_1 = new QPushButton(set10M);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(660, 30, 91, 41));
        pushButton_1->setFont(font);

        retranslateUi(set10M);

        QMetaObject::connectSlotsByName(set10M);
    } // setupUi

    void retranslateUi(QDialog *set10M)
    {
        set10M->setWindowTitle(QApplication::translate("set10M", "Dialog", 0));
        pushButton_0->setText(QApplication::translate("set10M", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("set10M", "10M", 0));
        pushButton_1->setText(QApplication::translate("set10M", "\345\244\215\344\275\215", 0));
    } // retranslateUi

};

namespace Ui {
    class set10M: public Ui_set10M {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET10M_H
