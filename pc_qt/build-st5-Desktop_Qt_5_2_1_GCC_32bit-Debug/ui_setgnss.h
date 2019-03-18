/********************************************************************************
** Form generated from reading UI file 'setgnss.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETGNSS_H
#define UI_SETGNSS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setGNSS
{
public:
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;

    void setupUi(QDialog *setGNSS)
    {
        if (setGNSS->objectName().isEmpty())
            setGNSS->setObjectName(QStringLiteral("setGNSS"));
        setGNSS->resize(800, 480);
        pushButton_0 = new QPushButton(setGNSS);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(650, 420, 91, 41));
        QFont font;
        font.setPointSize(16);
        pushButton_0->setFont(font);
        pushButton_1 = new QPushButton(setGNSS);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(650, 20, 91, 41));
        pushButton_1->setFont(font);
        label = new QLabel(setGNSS);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 20, 54, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(setGNSS);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 100, 181, 54));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(setGNSS);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(440, 100, 241, 51));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);


        retranslateUi(setGNSS);

        QMetaObject::connectSlotsByName(setGNSS);
    } // setupUi

    void retranslateUi(QDialog *setGNSS)
    {
        setGNSS->setWindowTitle(QApplication::translate("setGNSS", "Dialog", 0));
        pushButton_0->setText(QApplication::translate("setGNSS", "\350\277\224\345\233\236", 0));
        pushButton_1->setText(QApplication::translate("setGNSS", "\345\244\215\344\275\215", 0));
        label->setText(QApplication::translate("setGNSS", "GNSS", 0));
        label_2->setText(QApplication::translate("setGNSS", "\351\242\221\347\202\271", 0));
        label_3->setText(QApplication::translate("setGNSS", "GPS\345\256\232\344\275\215\346\250\241\345\274\217", 0));
        label_4->setText(QApplication::translate("setGNSS", "\346\224\266\346\230\237\346\225\260:", 0));
        label_6->setText(QApplication::translate("setGNSS", "TextLabel", 0));
        label_5->setText(QApplication::translate("setGNSS", "\347\273\217\347\272\254\345\272\246:", 0));
        label_7->setText(QApplication::translate("setGNSS", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class setGNSS: public Ui_setGNSS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETGNSS_H
