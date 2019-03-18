/********************************************************************************
** Form generated from reading UI file 'boardbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDBUTTON_H
#define UI_BOARDBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardButton
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QLabel *label_2;
    QWidget *widget_10;
    QWidget *widget_3;
    QLabel *label_3;
    QWidget *widget_11;
    QWidget *widget_4;
    QLabel *label_4;
    QWidget *widget_9;
    QWidget *widget_5;
    QLabel *label_5;

    void setupUi(QFrame *BoardButton)
    {
        if (BoardButton->objectName().isEmpty())
            BoardButton->setObjectName(QStringLiteral("BoardButton"));
        BoardButton->setEnabled(true);
        BoardButton->resize(40, 320);
        BoardButton->setStyleSheet(QLatin1String("background-color: rgb(230, 230, 230);\n"
"border-color: rgb(49, 49, 49);"));
        BoardButton->setFrameShape(QFrame::Panel);
        BoardButton->setFrameShadow(QFrame::Raised);
        widget = new QWidget(BoardButton);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 2, 21, 21));
        widget->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/red_led_.bmp);"));
        layoutWidget = new QWidget(BoardButton);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(3, 27, 32, 164));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(layoutWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 16));
        widget_2->setStyleSheet(QLatin1String("image: url(:/new/prefix1/img/red_led.bmp);\n"
""));

        verticalLayout->addWidget(widget_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        widget_10 = new QWidget(layoutWidget);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(0, 2));
        widget_10->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(widget_10);

        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(0, 16));
        widget_3->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/green_led.bmp);"));

        verticalLayout->addWidget(widget_3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        widget_11 = new QWidget(layoutWidget);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(0, 3));
        widget_11->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(widget_11);

        widget_4 = new QWidget(layoutWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(0, 16));
        widget_4->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/green_led.bmp);"));

        verticalLayout->addWidget(widget_4);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        widget_9 = new QWidget(layoutWidget);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMinimumSize(QSize(0, 2));
        widget_9->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(widget_9);

        widget_5 = new QWidget(layoutWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(0, 16));
        widget_5->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/green_led.bmp);"));

        verticalLayout->addWidget(widget_5);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        retranslateUi(BoardButton);

        QMetaObject::connectSlotsByName(BoardButton);
    } // setupUi

    void retranslateUi(QFrame *BoardButton)
    {
        BoardButton->setWindowTitle(QApplication::translate("BoardButton", "Frame", 0));
        label_2->setText(QApplication::translate("BoardButton", "title", 0));
        label_3->setText(QApplication::translate("BoardButton", "title", 0));
        label_4->setText(QApplication::translate("BoardButton", "title", 0));
        label_5->setText(QApplication::translate("BoardButton", "title", 0));
    } // retranslateUi

};

namespace Ui {
    class BoardButton: public Ui_BoardButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDBUTTON_H
