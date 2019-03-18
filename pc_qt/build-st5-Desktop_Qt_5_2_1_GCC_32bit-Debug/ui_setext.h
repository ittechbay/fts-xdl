/********************************************************************************
** Form generated from reading UI file 'setext.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETEXT_H
#define UI_SETEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_setEXT
{
public:
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QLabel *label;

    void setupUi(QDialog *setEXT)
    {
        if (setEXT->objectName().isEmpty())
            setEXT->setObjectName(QStringLiteral("setEXT"));
        setEXT->resize(800, 480);
        pushButton_0 = new QPushButton(setEXT);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(670, 420, 91, 41));
        QFont font;
        font.setPointSize(16);
        pushButton_0->setFont(font);
        pushButton_1 = new QPushButton(setEXT);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(670, 20, 91, 41));
        pushButton_1->setFont(font);
        label = new QLabel(setEXT);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 30, 54, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(setEXT);

        QMetaObject::connectSlotsByName(setEXT);
    } // setupUi

    void retranslateUi(QDialog *setEXT)
    {
        setEXT->setWindowTitle(QApplication::translate("setEXT", "Dialog", 0));
        pushButton_0->setText(QApplication::translate("setEXT", "\350\277\224\345\233\236", 0));
        pushButton_1->setText(QApplication::translate("setEXT", "\345\244\215\344\275\215", 0));
        label->setText(QApplication::translate("setEXT", "\345\244\226\351\242\221", 0));
    } // retranslateUi

};

namespace Ui {
    class setEXT: public Ui_setEXT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETEXT_H
