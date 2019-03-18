/********************************************************************************
** Form generated from reading UI file 'settf.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTF_H
#define UI_SETTF_H

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

class Ui_SetTF
{
public:
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *SetTF)
    {
        if (SetTF->objectName().isEmpty())
            SetTF->setObjectName(QStringLiteral("SetTF"));
        SetTF->resize(800, 480);
        label = new QLabel(SetTF);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 20, 71, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(SetTF);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(690, 420, 91, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton_5->setFont(font1);
        pushButton_6 = new QPushButton(SetTF);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(690, 20, 91, 41));
        pushButton_6->setFont(font1);
        widget = new QWidget(SetTF);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 100, 471, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        radioButton = new QRadioButton(widget);
        buttonGroup = new QButtonGroup(SetTF);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font1);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font1);

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFont(font1);

        horizontalLayout->addWidget(radioButton_3);


        retranslateUi(SetTF);

        QMetaObject::connectSlotsByName(SetTF);
    } // setupUi

    void retranslateUi(QDialog *SetTF)
    {
        SetTF->setWindowTitle(QApplication::translate("SetTF", "Dialog", 0));
        label->setText(QApplication::translate("SetTF", "\346\227\266\351\242\221\346\235\277", 0));
        pushButton_5->setText(QApplication::translate("SetTF", "\350\277\224\345\233\236", 0));
        pushButton_6->setText(QApplication::translate("SetTF", "\345\244\215\344\275\215", 0));
        label_2->setText(QApplication::translate("SetTF", "\345\217\202\350\200\203\346\272\220\357\274\232", 0));
        radioButton->setText(QApplication::translate("SetTF", "GN1", 0));
        radioButton_2->setText(QApplication::translate("SetTF", "GN2", 0));
        radioButton_3->setText(QApplication::translate("SetTF", "\345\244\226\351\242\221", 0));
    } // retranslateUi

};

namespace Ui {
    class SetTF: public Ui_SetTF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTF_H
