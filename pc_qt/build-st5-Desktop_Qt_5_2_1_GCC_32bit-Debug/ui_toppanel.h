/********************************************************************************
** Form generated from reading UI file 'toppanel.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPPANEL_H
#define UI_TOPPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopPanel
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *TopPanel)
    {
        if (TopPanel->objectName().isEmpty())
            TopPanel->setObjectName(QStringLiteral("TopPanel"));
        TopPanel->resize(702, 654);
        stackedWidget = new QStackedWidget(TopPanel);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(280, 160, 120, 80));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(TopPanel);

        QMetaObject::connectSlotsByName(TopPanel);
    } // setupUi

    void retranslateUi(QWidget *TopPanel)
    {
        TopPanel->setWindowTitle(QApplication::translate("TopPanel", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class TopPanel: public Ui_TopPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPPANEL_H
