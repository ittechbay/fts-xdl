/********************************************************************************
** Form generated from reading UI file 'setalarm.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETALARM_H
#define UI_SETALARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetAlarm
{
public:
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;

    void setupUi(QDialog *SetAlarm)
    {
        if (SetAlarm->objectName().isEmpty())
            SetAlarm->setObjectName(QStringLiteral("SetAlarm"));
        SetAlarm->resize(800, 480);
        pushButton_6 = new QPushButton(SetAlarm);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(640, 20, 91, 41));
        QFont font;
        font.setPointSize(16);
        pushButton_6->setFont(font);
        pushButton_5 = new QPushButton(SetAlarm);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(640, 420, 91, 41));
        pushButton_5->setFont(font);
        label = new QLabel(SetAlarm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 30, 54, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(SetAlarm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 120, 201, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QFont font2;
        font2.setPointSize(12);
        checkBox->setFont(font2);

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_4 = new QCheckBox(layoutWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setFont(font2);

        gridLayout->addWidget(checkBox_4, 0, 1, 1, 1);

        checkBox_2 = new QCheckBox(layoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setFont(font2);

        gridLayout->addWidget(checkBox_2, 1, 0, 1, 1);

        checkBox_5 = new QCheckBox(layoutWidget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setFont(font2);

        gridLayout->addWidget(checkBox_5, 1, 1, 1, 1);

        checkBox_3 = new QCheckBox(layoutWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setFont(font2);

        gridLayout->addWidget(checkBox_3, 2, 0, 1, 1);

        checkBox_6 = new QCheckBox(layoutWidget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setFont(font2);

        gridLayout->addWidget(checkBox_6, 2, 1, 1, 1);

        widget = new QWidget(SetAlarm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(360, 120, 121, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_7 = new QCheckBox(widget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        verticalLayout->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(widget);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        verticalLayout->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(widget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        verticalLayout->addWidget(checkBox_9);


        retranslateUi(SetAlarm);
        QObject::connect(pushButton_5, SIGNAL(clicked()), SetAlarm, SLOT(close()));

        QMetaObject::connectSlotsByName(SetAlarm);
    } // setupUi

    void retranslateUi(QDialog *SetAlarm)
    {
        SetAlarm->setWindowTitle(QApplication::translate("SetAlarm", "Dialog", 0));
        pushButton_6->setText(QApplication::translate("SetAlarm", "\345\244\215\344\275\215", 0));
        pushButton_5->setText(QApplication::translate("SetAlarm", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("SetAlarm", "\346\212\245\350\255\246", 0));
        checkBox->setText(QApplication::translate("SetAlarm", "GNSS", 0));
        checkBox_4->setText(QApplication::translate("SetAlarm", "B\347\240\201", 0));
        checkBox_2->setText(QApplication::translate("SetAlarm", "\346\227\266\351\222\237", 0));
        checkBox_5->setText(QApplication::translate("SetAlarm", "PTP", 0));
        checkBox_3->setText(QApplication::translate("SetAlarm", "1pps", 0));
        checkBox_6->setText(QApplication::translate("SetAlarm", "NTP", 0));
        checkBox_7->setText(QApplication::translate("SetAlarm", "\346\227\240\346\263\225\351\224\201\345\256\232", 0));
        checkBox_8->setText(QApplication::translate("SetAlarm", "\346\227\266\345\267\256\350\266\205\351\231\220", 0));
        checkBox_9->setText(QApplication::translate("SetAlarm", "\345\244\251\347\272\277\346\225\205\351\232\234", 0));
    } // retranslateUi

};

namespace Ui {
    class SetAlarm: public Ui_SetAlarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETALARM_H
