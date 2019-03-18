/********************************************************************************
** Form generated from reading UI file 'setpower.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPOWER_H
#define UI_SETPOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_setPower
{
public:
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QLabel *label;

    void setupUi(QDialog *setPower)
    {
        if (setPower->objectName().isEmpty())
            setPower->setObjectName(QStringLiteral("setPower"));
        setPower->resize(800, 480);
        pushButton_0 = new QPushButton(setPower);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(670, 420, 91, 41));
        QFont font;
        font.setPointSize(16);
        pushButton_0->setFont(font);
        pushButton_6 = new QPushButton(setPower);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(670, 20, 91, 41));
        pushButton_6->setFont(font);
        label = new QLabel(setPower);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 30, 54, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(setPower);

        QMetaObject::connectSlotsByName(setPower);
    } // setupUi

    void retranslateUi(QDialog *setPower)
    {
        setPower->setWindowTitle(QApplication::translate("setPower", "Dialog", 0));
        pushButton_0->setText(QApplication::translate("setPower", "\350\277\224\345\233\236", 0));
        pushButton_6->setText(QApplication::translate("setPower", "\345\244\215\344\275\215", 0));
        label->setText(QApplication::translate("setPower", "\347\224\265\346\272\220", 0));
    } // retranslateUi

};

namespace Ui {
    class setPower: public Ui_setPower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPOWER_H
