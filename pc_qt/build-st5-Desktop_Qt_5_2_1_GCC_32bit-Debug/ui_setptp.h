/********************************************************************************
** Form generated from reading UI file 'setptp.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPTP_H
#define UI_SETPTP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setPTP
{
public:
    QLabel *label;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *setPTP)
    {
        if (setPTP->objectName().isEmpty())
            setPTP->setObjectName(QStringLiteral("setPTP"));
        setPTP->resize(800, 480);
        label = new QLabel(setPTP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 20, 54, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton_6 = new QPushButton(setPTP);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(670, 10, 91, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton_6->setFont(font1);
        pushButton_5 = new QPushButton(setPTP);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(670, 410, 91, 41));
        pushButton_5->setFont(font1);
        groupBox = new QGroupBox(setPTP);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 320, 361, 101));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 331, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        buttonGroup = new QButtonGroup(setPTP);
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

        groupBox_2 = new QGroupBox(setPTP);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 70, 361, 181));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 331, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        groupBox->raise();
        groupBox_2->raise();
        label->raise();
        pushButton_6->raise();
        pushButton_5->raise();
        radioButton->raise();
        radioButton_2->raise();

        retranslateUi(setPTP);
        QObject::connect(pushButton_5, SIGNAL(clicked()), setPTP, SLOT(close()));

        QMetaObject::connectSlotsByName(setPTP);
    } // setupUi

    void retranslateUi(QDialog *setPTP)
    {
        setPTP->setWindowTitle(QApplication::translate("setPTP", "Dialog", 0));
        label->setText(QApplication::translate("setPTP", "PTP", 0));
        pushButton_6->setText(QApplication::translate("setPTP", "\345\244\215\344\275\215", 0));
        pushButton_5->setText(QApplication::translate("setPTP", "\350\277\224\345\233\236", 0));
        groupBox->setTitle(QApplication::translate("setPTP", "\347\253\257\345\217\243\351\200\211\346\213\251", 0));
        radioButton->setText(QApplication::translate("setPTP", "\347\253\257\345\217\2431", 0));
        radioButton_2->setText(QApplication::translate("setPTP", "\347\253\257\345\217\2432", 0));
        groupBox_2->setTitle(QApplication::translate("setPTP", "\347\275\221\347\273\234\351\205\215\347\275\256", 0));
        label_2->setText(QApplication::translate("setPTP", "IP\345\234\260\345\235\200\357\274\232", 0));
        label_3->setText(QApplication::translate("setPTP", "\345\255\220\347\275\221\346\216\251\347\240\201\357\274\232", 0));
        label_4->setText(QApplication::translate("setPTP", "\347\275\221\345\205\263\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class setPTP: public Ui_setPTP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPTP_H
