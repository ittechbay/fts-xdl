/********************************************************************************
** Form generated from reading UI file 'setb.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETB_H
#define UI_SETB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_setB
{
public:
    QLabel *label;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;

    void setupUi(QDialog *setB)
    {
        if (setB->objectName().isEmpty())
            setB->setObjectName(QStringLiteral("setB"));
        setB->resize(800, 480);
        label = new QLabel(setB);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 30, 54, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton_0 = new QPushButton(setB);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(660, 420, 91, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton_0->setFont(font1);
        pushButton_1 = new QPushButton(setB);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(660, 20, 91, 41));
        pushButton_1->setFont(font1);

        retranslateUi(setB);

        QMetaObject::connectSlotsByName(setB);
    } // setupUi

    void retranslateUi(QDialog *setB)
    {
        setB->setWindowTitle(QApplication::translate("setB", "Dialog", 0));
        label->setText(QApplication::translate("setB", "B\347\240\201", 0));
        pushButton_0->setText(QApplication::translate("setB", "\350\277\224\345\233\236", 0));
        pushButton_1->setText(QApplication::translate("setB", "\345\244\215\344\275\215", 0));
    } // retranslateUi

};

namespace Ui {
    class setB: public Ui_setB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETB_H
