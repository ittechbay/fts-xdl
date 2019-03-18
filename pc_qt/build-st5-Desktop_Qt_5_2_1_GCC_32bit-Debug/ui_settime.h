/********************************************************************************
** Form generated from reading UI file 'settime.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTIME_H
#define UI_SETTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetTime
{
public:
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QDateEdit *dateEdit_2;
    QTimeEdit *timeEdit_2;

    void setupUi(QDialog *SetTime)
    {
        if (SetTime->objectName().isEmpty())
            SetTime->setObjectName(QStringLiteral("SetTime"));
        SetTime->resize(800, 480);
        comboBox = new QComboBox(SetTime);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 250, 109, 27));
        QFont font;
        font.setPointSize(10);
        comboBox->setFont(font);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        layoutWidget = new QWidget(SetTime);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 360, 261, 101));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);

        label_2 = new QLabel(SetTime);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 61, 20));
        label_2->setFont(font);
        pushButton_6 = new QPushButton(SetTime);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 20, 91, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton_6->setFont(font1);
        pushButton_5 = new QPushButton(SetTime);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 420, 91, 41));
        pushButton_5->setFont(font);
        timeEdit = new QTimeEdit(SetTime);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(80, 100, 120, 30));
        timeEdit->setFont(font);
        timeEdit->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(13, 5, 3)));
        timeEdit->setTime(QTime(13, 5, 3));
        dateEdit = new QDateEdit(SetTime);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(80, 140, 120, 30));
        dateEdit->setFont(font);
        dateEdit->setDateTime(QDateTime(QDate(2000, 11, 12), QTime(0, 0, 0)));
        label_3 = new QLabel(SetTime);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 250, 71, 20));
        label_3->setFont(font);
        label = new QLabel(SetTime);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 10, 54, 20));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(SetTime);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 310, 54, 12));
        label_4->setFont(font);
        dateEdit_2 = new QDateEdit(SetTime);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(80, 300, 120, 30));
        dateEdit_2->setFont(font);
        dateEdit_2->setDateTime(QDateTime(QDate(2000, 11, 12), QTime(0, 0, 0)));
        timeEdit_2 = new QTimeEdit(SetTime);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(200, 300, 120, 30));
        QFont font3;
        font3.setPointSize(12);
        timeEdit_2->setFont(font3);
        timeEdit_2->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(13, 5, 3)));
        timeEdit_2->setTime(QTime(13, 5, 3));

        retranslateUi(SetTime);
        QObject::connect(pushButton_5, SIGNAL(clicked()), SetTime, SLOT(close()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), SetTime, SLOT(close()));
        QObject::connect(timeEdit, SIGNAL(dateTimeChanged(QDateTime)), timeEdit, SLOT(update()));
        QObject::connect(timeEdit, SIGNAL(dateTimeChanged(QDateTime)), timeEdit, SLOT(repaint()));

        QMetaObject::connectSlotsByName(SetTime);
    } // setupUi

    void retranslateUi(QDialog *SetTime)
    {
        SetTime->setWindowTitle(QApplication::translate("SetTime", "Dialog", 0));
        pushButton->setText(QApplication::translate("SetTime", "\345\212\240\347\247\222", 0));
        pushButton_2->setText(QApplication::translate("SetTime", "\345\207\217\347\247\222", 0));
        pushButton_3->setText(QApplication::translate("SetTime", "\350\266\205\345\211\215", 0));
        pushButton_4->setText(QApplication::translate("SetTime", "\346\273\236\345\220\216", 0));
        label_2->setText(QApplication::translate("SetTime", "\346\233\264\346\224\271\346\227\266\351\227\264", 0));
        pushButton_6->setText(QApplication::translate("SetTime", "\345\244\215\344\275\215", 0));
        pushButton_5->setText(QApplication::translate("SetTime", "\350\277\224\345\233\236", 0));
        timeEdit->setDisplayFormat(QApplication::translate("SetTime", "H:mm:ss", 0));
        label_3->setText(QApplication::translate("SetTime", "\346\233\264\346\224\271\346\227\266\345\214\272", 0));
        label->setText(QApplication::translate("SetTime", "\347\275\256\351\222\237", 0));
        label_4->setText(QApplication::translate("SetTime", "\351\227\260\347\247\222\351\242\204\345\221\212", 0));
        timeEdit_2->setDisplayFormat(QApplication::translate("SetTime", "H:mm:ss", 0));
    } // retranslateUi

};

namespace Ui {
    class SetTime: public Ui_SetTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTIME_H
