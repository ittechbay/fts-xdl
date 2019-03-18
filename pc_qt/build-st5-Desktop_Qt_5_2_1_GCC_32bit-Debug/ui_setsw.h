/********************************************************************************
** Form generated from reading UI file 'setsw.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSW_H
#define UI_SETSW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setSW
{
public:
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *setSW)
    {
        if (setSW->objectName().isEmpty())
            setSW->setObjectName(QStringLiteral("setSW"));
        setSW->resize(800, 480);
        pushButton_0 = new QPushButton(setSW);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(650, 420, 91, 41));
        QFont font;
        font.setPointSize(16);
        pushButton_0->setFont(font);
        pushButton_1 = new QPushButton(setSW);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(650, 20, 91, 41));
        pushButton_1->setFont(font);
        label = new QLabel(setSW);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 30, 54, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(setSW);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(240, 140, 221, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        buttonGroup = new QButtonGroup(setSW);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font);

        horizontalLayout->addWidget(radioButton_2);


        retranslateUi(setSW);

        QMetaObject::connectSlotsByName(setSW);
    } // setupUi

    void retranslateUi(QDialog *setSW)
    {
        setSW->setWindowTitle(QApplication::translate("setSW", "Dialog", 0));
        pushButton_0->setText(QApplication::translate("setSW", "\350\277\224\345\233\236", 0));
        pushButton_1->setText(QApplication::translate("setSW", "\345\244\215\344\275\215", 0));
        label->setText(QApplication::translate("setSW", "\345\210\207\346\215\242", 0));
        radioButton->setText(QApplication::translate("setSW", "\346\227\266\351\242\221A", 0));
        radioButton_2->setText(QApplication::translate("setSW", "\346\227\266\351\242\221B", 0));
    } // retranslateUi

};

namespace Ui {
    class setSW: public Ui_setSW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSW_H
