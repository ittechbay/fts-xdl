/********************************************************************************
** Form generated from reading UI file 'mainpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPANEL_H
#define UI_MAINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "boardbutton.h"

QT_BEGIN_NAMESPACE

class Ui_mainPanel
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTableWidget *tableWidget_11;
    QWidget *widget_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QWidget *widget_4;
    QLabel *label_44;
    QPushButton *pushButton_7;
    QWidget *widget_2;
    QPushButton *pushButton_12;
    QWidget *widget_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_30;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_18;
    QWidget *widget_6;
    QLabel *label_27;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QWidget *widget_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_33;
    QPushButton *pushButton_36;
    QPushButton *pushButton_34;
    QPushButton *pushButton_38;
    QPushButton *pushButton_39;
    QPushButton *pushButton_32;
    QPushButton *pushButton_31;
    QPushButton *pushButton_35;
    QPushButton *pushButton_37;
    QPushButton *pushButton_40;
    QPushButton *pushButton_41;
    QPushButton *pushButton_11;
    QWidget *widget_3;
    QPushButton *pushButton_3;
    QWidget *widget;
    QLabel *label_26;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QPushButton *pushButton_13;
    QLabel *label_43;
    QWidget *tab;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    BoardButton *frame_0;
    BoardButton *frame_1;
    BoardButton *frame_2;
    BoardButton *frame_3;
    BoardButton *frame_4;
    BoardButton *frame_5;
    BoardButton *frame_6;
    BoardButton *frame_7;
    BoardButton *frame_8;
    BoardButton *frame_9;
    BoardButton *frame_10;
    BoardButton *frame_11;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_0;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *tab_2;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_3;
    BoardButton *frame_12;
    BoardButton *frame_13;
    BoardButton *frame_14;
    BoardButton *frame_15;
    BoardButton *frame_16;
    BoardButton *frame_17;
    BoardButton *frame_18;
    BoardButton *frame_19;
    BoardButton *frame_20;
    BoardButton *frame_21;
    BoardButton *frame_22;
    BoardButton *frame_25;
    BoardButton *frame_26;
    BoardButton *frame_23;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_25;
    QLabel *label_24;
    QLabel *label_23;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QTableWidget *tableWidget_9;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *widget_10;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *mainPanel)
    {
        if (mainPanel->objectName().isEmpty())
            mainPanel->setObjectName(QStringLiteral("mainPanel"));
        mainPanel->resize(800, 480);
        tabWidget = new QTabWidget(mainPanel);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 575, 417));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(16);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(60, 30));
        tabWidget->setElideMode(Qt::ElideRight);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableWidget_11 = new QTableWidget(tab_3);
        if (tableWidget_11->columnCount() < 7)
            tableWidget_11->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_11->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_11->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_11->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_11->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_11->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_11->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_11->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget_11->rowCount() < 2)
            tableWidget_11->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_11->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_11->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_11->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        tableWidget_11->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        tableWidget_11->setItem(0, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_11->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_11->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_11->setItem(0, 5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_11->setItem(1, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        tableWidget_11->setItem(1, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        tableWidget_11->setItem(1, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_11->setItem(1, 3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_11->setItem(1, 4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_11->setItem(1, 5, __qtablewidgetitem20);
        tableWidget_11->setObjectName(QStringLiteral("tableWidget_11"));
        tableWidget_11->setGeometry(QRect(0, 304, 571, 73));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        tableWidget_11->setFont(font1);
        tableWidget_11->setFocusPolicy(Qt::NoFocus);
        tableWidget_11->setLayoutDirection(Qt::LeftToRight);
        tableWidget_11->setAutoFillBackground(false);
        tableWidget_11->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(255, 0, 127);\n"
"font: 75 9pt \"\345\256\213\344\275\223\";"));
        tableWidget_11->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_11->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_11->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_11->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_11->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_11->setShowGrid(true);
        tableWidget_11->setCornerButtonEnabled(false);
        tableWidget_11->setRowCount(2);
        tableWidget_11->setColumnCount(7);
        tableWidget_11->horizontalHeader()->setVisible(false);
        tableWidget_11->horizontalHeader()->setDefaultSectionSize(81);
        tableWidget_11->horizontalHeader()->setMinimumSectionSize(15);
        tableWidget_11->verticalHeader()->setVisible(false);
        tableWidget_11->verticalHeader()->setDefaultSectionSize(26);
        tableWidget_11->verticalHeader()->setHighlightSections(true);
        tableWidget_11->verticalHeader()->setMinimumSectionSize(15);
        widget_7 = new QWidget(tab_3);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(424, 144, 30, 30));
        widget_7->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/alloc.png);"));
        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(204, 212, 60, 30));
        QFont font2;
        font2.setPointSize(10);
        pushButton_10->setFont(font2);
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(186, 60, 60, 30));
        pushButton_8->setFont(font2);
        widget_4 = new QWidget(tab_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(262, 96, 30, 30));
        widget_4->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/sw1.png);"));
        label_44 = new QLabel(tab_3);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(208, 196, 54, 12));
        label_44->setFont(font2);
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(68, 142, 60, 30));
        pushButton_7->setFont(font2);
        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(8, 66, 61, 41));
        widget_2->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/antenna.png);"));
        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(204, 242, 60, 30));
        pushButton_12->setFont(font2);
        widget_5 = new QWidget(tab_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(162, 226, 40, 35));
        widget_5->setStyleSheet(QLatin1String("image: url(:/new/prefix1/img/v220.png);\n"
"background-image: url(:/new/prefix1/img/V220.png);"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(296, 64, 87, 110));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_30 = new QPushButton(layoutWidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setFont(font2);

        verticalLayout_4->addWidget(pushButton_30);

        pushButton_19 = new QPushButton(layoutWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setFont(font2);

        verticalLayout_4->addWidget(pushButton_19);

        pushButton_20 = new QPushButton(layoutWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setFont(font2);

        verticalLayout_4->addWidget(pushButton_20);

        pushButton_18 = new QPushButton(layoutWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setFont(font2);

        verticalLayout_4->addWidget(pushButton_18);

        widget_6 = new QWidget(tab_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(36, 226, 40, 35));
        widget_6->setStyleSheet(QLatin1String("image: url(:/new/prefix1/img/v220.png);\n"
"background-image: url(:/new/prefix1/img/V220.png);"));
        label_27 = new QLabel(tab_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(468, 12, 54, 12));
        label_27->setFont(font2);
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(536, 34, 19, 253));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(layoutWidget1);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setFont(font2);

        verticalLayout_3->addWidget(label_32);

        label_33 = new QLabel(layoutWidget1);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setFont(font2);

        verticalLayout_3->addWidget(label_33);

        label_34 = new QLabel(layoutWidget1);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setFont(font2);

        verticalLayout_3->addWidget(label_34);

        label_35 = new QLabel(layoutWidget1);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setFont(font2);

        verticalLayout_3->addWidget(label_35);

        label_36 = new QLabel(layoutWidget1);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setFont(font2);

        verticalLayout_3->addWidget(label_36);

        label_37 = new QLabel(layoutWidget1);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setFont(font2);

        verticalLayout_3->addWidget(label_37);

        label_38 = new QLabel(layoutWidget1);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setFont(font2);

        verticalLayout_3->addWidget(label_38);

        label_39 = new QLabel(layoutWidget1);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setFont(font2);

        verticalLayout_3->addWidget(label_39);

        label_40 = new QLabel(layoutWidget1);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setFont(font2);

        verticalLayout_3->addWidget(label_40);

        label_41 = new QLabel(layoutWidget1);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setFont(font2);

        verticalLayout_3->addWidget(label_41);

        label_42 = new QLabel(layoutWidget1);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setFont(font2);

        verticalLayout_3->addWidget(label_42);

        widget_8 = new QWidget(tab_3);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(150, 116, 30, 30));
        widget_8->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/sel2.png);"));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(186, 116, 60, 30));
        pushButton_9->setFont(font2);
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(68, 92, 60, 30));
        pushButton_6->setFont(font2);
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(456, 34, 87, 299));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_33 = new QPushButton(layoutWidget2);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        pushButton_33->setFont(font2);

        verticalLayout_2->addWidget(pushButton_33);

        pushButton_36 = new QPushButton(layoutWidget2);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        pushButton_36->setFont(font2);

        verticalLayout_2->addWidget(pushButton_36);

        pushButton_34 = new QPushButton(layoutWidget2);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        pushButton_34->setFont(font2);

        verticalLayout_2->addWidget(pushButton_34);

        pushButton_38 = new QPushButton(layoutWidget2);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        pushButton_38->setEnabled(true);
        pushButton_38->setFont(font2);

        verticalLayout_2->addWidget(pushButton_38);

        pushButton_39 = new QPushButton(layoutWidget2);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        pushButton_39->setEnabled(true);
        pushButton_39->setFont(font2);

        verticalLayout_2->addWidget(pushButton_39);

        pushButton_32 = new QPushButton(layoutWidget2);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        pushButton_32->setFont(font2);

        verticalLayout_2->addWidget(pushButton_32);

        pushButton_31 = new QPushButton(layoutWidget2);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setFont(font2);

        verticalLayout_2->addWidget(pushButton_31);

        pushButton_35 = new QPushButton(layoutWidget2);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        pushButton_35->setFont(font2);

        verticalLayout_2->addWidget(pushButton_35);

        pushButton_37 = new QPushButton(layoutWidget2);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        pushButton_37->setFont(font2);

        verticalLayout_2->addWidget(pushButton_37);

        pushButton_40 = new QPushButton(layoutWidget2);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        pushButton_40->setFont(font2);

        verticalLayout_2->addWidget(pushButton_40);

        pushButton_41 = new QPushButton(layoutWidget2);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        pushButton_41->setFont(font2);

        verticalLayout_2->addWidget(pushButton_41);

        pushButton_11 = new QPushButton(tab_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(80, 210, 60, 30));
        pushButton_11->setFont(font2);
        widget_3 = new QWidget(tab_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(150, 58, 30, 30));
        widget_3->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/sel1.png);"));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(68, 32, 60, 30));
        pushButton_3->setFont(font2);
        widget = new QWidget(tab_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(8, 6, 60, 40));
        widget->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/antenna.png);"));
        label_26 = new QLabel(tab_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(316, 38, 43, 16));
        label_26->setFont(font2);
        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(376, 64, 16, 97));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font2);

        verticalLayout_5->addWidget(label_28);

        label_29 = new QLabel(layoutWidget3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font2);

        verticalLayout_5->addWidget(label_29);

        label_30 = new QLabel(layoutWidget3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setFont(font2);

        verticalLayout_5->addWidget(label_30);

        label_31 = new QLabel(layoutWidget3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setFont(font2);

        verticalLayout_5->addWidget(label_31);

        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(80, 240, 60, 30));
        pushButton_13->setFont(font2);
        label_43 = new QLabel(tab_3);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(90, 192, 43, 16));
        label_43->setFont(font2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/img/tab_1.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_3, icon, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget4 = new QWidget(tab);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(1, 1, 570, 350));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_0 = new BoardButton(layoutWidget4);
        frame_0->setObjectName(QStringLiteral("frame_0"));

        horizontalLayout_4->addWidget(frame_0);

        frame_1 = new BoardButton(layoutWidget4);
        frame_1->setObjectName(QStringLiteral("frame_1"));

        horizontalLayout_4->addWidget(frame_1);

        frame_2 = new BoardButton(layoutWidget4);
        frame_2->setObjectName(QStringLiteral("frame_2"));

        horizontalLayout_4->addWidget(frame_2);

        frame_3 = new BoardButton(layoutWidget4);
        frame_3->setObjectName(QStringLiteral("frame_3"));

        horizontalLayout_4->addWidget(frame_3);

        frame_4 = new BoardButton(layoutWidget4);
        frame_4->setObjectName(QStringLiteral("frame_4"));

        horizontalLayout_4->addWidget(frame_4);

        frame_5 = new BoardButton(layoutWidget4);
        frame_5->setObjectName(QStringLiteral("frame_5"));

        horizontalLayout_4->addWidget(frame_5);

        frame_6 = new BoardButton(layoutWidget4);
        frame_6->setObjectName(QStringLiteral("frame_6"));

        horizontalLayout_4->addWidget(frame_6);

        frame_7 = new BoardButton(layoutWidget4);
        frame_7->setObjectName(QStringLiteral("frame_7"));

        horizontalLayout_4->addWidget(frame_7);

        frame_8 = new BoardButton(layoutWidget4);
        frame_8->setObjectName(QStringLiteral("frame_8"));

        horizontalLayout_4->addWidget(frame_8);

        frame_9 = new BoardButton(layoutWidget4);
        frame_9->setObjectName(QStringLiteral("frame_9"));

        horizontalLayout_4->addWidget(frame_9);

        frame_10 = new BoardButton(layoutWidget4);
        frame_10->setObjectName(QStringLiteral("frame_10"));

        horizontalLayout_4->addWidget(frame_10);

        frame_11 = new BoardButton(layoutWidget4);
        frame_11->setObjectName(QStringLiteral("frame_11"));

        horizontalLayout_4->addWidget(frame_11);

        layoutWidget5 = new QWidget(tab);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(1, 354, 570, 20));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_0 = new QLabel(layoutWidget5);
        label_0->setObjectName(QStringLiteral("label_0"));
        QFont font3;
        font3.setPointSize(9);
        label_0->setFont(font3);
        label_0->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_0);

        label_1 = new QLabel(layoutWidget5);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setFont(font3);
        label_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_1);

        label_2 = new QLabel(layoutWidget5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);

        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);

        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);

        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_8);

        label_9 = new QLabel(layoutWidget5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_9);

        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_10);

        label_11 = new QLabel(layoutWidget5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_11);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/img/tab_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget6 = new QWidget(tab_2);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(1, 1, 570, 350));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_12 = new BoardButton(layoutWidget6);
        frame_12->setObjectName(QStringLiteral("frame_12"));

        horizontalLayout_3->addWidget(frame_12);

        frame_13 = new BoardButton(layoutWidget6);
        frame_13->setObjectName(QStringLiteral("frame_13"));

        horizontalLayout_3->addWidget(frame_13);

        frame_14 = new BoardButton(layoutWidget6);
        frame_14->setObjectName(QStringLiteral("frame_14"));

        horizontalLayout_3->addWidget(frame_14);

        frame_15 = new BoardButton(layoutWidget6);
        frame_15->setObjectName(QStringLiteral("frame_15"));

        horizontalLayout_3->addWidget(frame_15);

        frame_16 = new BoardButton(layoutWidget6);
        frame_16->setObjectName(QStringLiteral("frame_16"));

        horizontalLayout_3->addWidget(frame_16);

        frame_17 = new BoardButton(layoutWidget6);
        frame_17->setObjectName(QStringLiteral("frame_17"));

        horizontalLayout_3->addWidget(frame_17);

        frame_18 = new BoardButton(layoutWidget6);
        frame_18->setObjectName(QStringLiteral("frame_18"));

        horizontalLayout_3->addWidget(frame_18);

        frame_19 = new BoardButton(layoutWidget6);
        frame_19->setObjectName(QStringLiteral("frame_19"));

        horizontalLayout_3->addWidget(frame_19);

        frame_20 = new BoardButton(layoutWidget6);
        frame_20->setObjectName(QStringLiteral("frame_20"));

        horizontalLayout_3->addWidget(frame_20);

        frame_21 = new BoardButton(layoutWidget6);
        frame_21->setObjectName(QStringLiteral("frame_21"));

        horizontalLayout_3->addWidget(frame_21);

        frame_22 = new BoardButton(layoutWidget6);
        frame_22->setObjectName(QStringLiteral("frame_22"));

        horizontalLayout_3->addWidget(frame_22);

        frame_25 = new BoardButton(layoutWidget6);
        frame_25->setObjectName(QStringLiteral("frame_25"));

        horizontalLayout_3->addWidget(frame_25);

        frame_26 = new BoardButton(layoutWidget6);
        frame_26->setObjectName(QStringLiteral("frame_26"));

        horizontalLayout_3->addWidget(frame_26);

        frame_23 = new BoardButton(layoutWidget6);
        frame_23->setObjectName(QStringLiteral("frame_23"));

        horizontalLayout_3->addWidget(frame_23);

        layoutWidget7 = new QWidget(tab_2);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(1, 354, 570, 20));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_12);

        label_13 = new QLabel(layoutWidget7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_13);

        label_14 = new QLabel(layoutWidget7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font3);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_14);

        label_15 = new QLabel(layoutWidget7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_15);

        label_16 = new QLabel(layoutWidget7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font3);
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_16);

        label_17 = new QLabel(layoutWidget7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font3);
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_17);

        label_18 = new QLabel(layoutWidget7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font3);
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_18);

        label_19 = new QLabel(layoutWidget7);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font3);
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_19);

        label_20 = new QLabel(layoutWidget7);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font3);
        label_20->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_20);

        label_21 = new QLabel(layoutWidget7);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font3);
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_21);

        label_22 = new QLabel(layoutWidget7);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font3);
        label_22->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_22);

        label_25 = new QLabel(layoutWidget7);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font3);
        label_25->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_25);

        label_24 = new QLabel(layoutWidget7);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font3);
        label_24->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_24);

        label_23 = new QLabel(layoutWidget7);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font3);
        label_23->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_23);

        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/img/tab_3.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon2, QString());
        layoutWidget8 = new QWidget(mainPanel);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(4, 432, 569, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget8);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget8);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 20));
        pushButton->setMaximumSize(QSize(80, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font4.setPointSize(12);
        pushButton->setFont(font4);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget8);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 20));
        pushButton_2->setMaximumSize(QSize(80, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(layoutWidget8);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 20));
        pushButton_4->setMaximumSize(QSize(80, 40));
        pushButton_4->setFont(font4);
        pushButton_4->setCheckable(false);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget8);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 20));
        pushButton_5->setMaximumSize(QSize(80, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\256\213\344\275\223\";"));
        pushButton_5->setCheckable(false);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_14 = new QPushButton(layoutWidget8);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(0, 20));
        pushButton_14->setMaximumSize(QSize(80, 40));
        pushButton_14->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\256\213\344\275\223\";"));
        pushButton_14->setCheckable(false);

        horizontalLayout->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(layoutWidget8);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(0, 20));
        pushButton_15->setMaximumSize(QSize(80, 40));
        pushButton_15->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\256\213\344\275\223\";"));
        pushButton_15->setCheckable(false);

        horizontalLayout->addWidget(pushButton_15);

        tableWidget_9 = new QTableWidget(mainPanel);
        if (tableWidget_9->columnCount() < 2)
            tableWidget_9->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        if (tableWidget_9->rowCount() < 6)
            tableWidget_9->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(5, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_9->setItem(0, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_9->setItem(0, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_9->setItem(1, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_9->setItem(1, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_9->setItem(2, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_9->setItem(2, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_9->setItem(3, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_9->setItem(3, 1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_9->setItem(4, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_9->setItem(4, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_9->setItem(5, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_9->setItem(5, 1, __qtablewidgetitem40);
        tableWidget_9->setObjectName(QStringLiteral("tableWidget_9"));
        tableWidget_9->setGeometry(QRect(578, 232, 217, 184));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        tableWidget_9->setFont(font5);
        tableWidget_9->setFocusPolicy(Qt::NoFocus);
        tableWidget_9->setLayoutDirection(Qt::LeftToRight);
        tableWidget_9->setAutoFillBackground(false);
        tableWidget_9->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(255, 0, 127);\n"
"font: 75 10pt \"\346\226\260\345\256\213\344\275\223\";\n"
""));
        tableWidget_9->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_9->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_9->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_9->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_9->setShowGrid(true);
        tableWidget_9->setCornerButtonEnabled(true);
        tableWidget_9->setRowCount(6);
        tableWidget_9->setColumnCount(2);
        tableWidget_9->horizontalHeader()->setVisible(false);
        tableWidget_9->horizontalHeader()->setDefaultSectionSize(79);
        tableWidget_9->verticalHeader()->setVisible(false);
        tableWidget_9->verticalHeader()->setDefaultSectionSize(30);
        tableWidget_9->verticalHeader()->setHighlightSections(true);
        checkBox = new QCheckBox(mainPanel);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(716, 212, 77, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        checkBox->setFont(font6);
        checkBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\346\226\260\345\256\213\344\275\223\";"));
        radioButton = new QRadioButton(mainPanel);
        buttonGroup = new QButtonGroup(mainPanel);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(702, 242, 16, 17));
        radioButton_2 = new QRadioButton(mainPanel);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(774, 242, 16, 17));
        widget_10 = new QWidget(mainPanel);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setGeometry(QRect(606, 426, 161, 45));
        widget_10->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/img/logo.png);"));
        layoutWidget9 = new QWidget(mainPanel);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(578, 54, 274, 119));
        verticalLayout = new QVBoxLayout(layoutWidget9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget9);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        dateEdit = new QDateEdit(layoutWidget9);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMinimumSize(QSize(0, 30));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial"));
        font7.setPointSize(16);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(50);
        dateEdit->setFont(font7);
        dateEdit->setFocusPolicy(Qt::NoFocus);
        dateEdit->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 16pt \"Arial\";"));
        dateEdit->setFrame(false);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_2->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        timeEdit = new QTimeEdit(layoutWidget9);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setMinimumSize(QSize(0, 40));
        QFont font8;
        font8.setFamily(QStringLiteral("Arial Black"));
        font8.setPointSize(26);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(10);
        timeEdit->setFont(font8);
        timeEdit->setFocusPolicy(Qt::NoFocus);
        timeEdit->setAutoFillBackground(true);
        timeEdit->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 87 26pt \"Arial Black\";\n"
""));
        timeEdit->setFrame(false);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setReadOnly(true);
        timeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit->setMaximumDateTime(QDateTime(QDate(2000, 1, 1), QTime(23, 59, 59)));
        timeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        timeEdit->setTime(QTime(23, 57, 51));

        verticalLayout->addWidget(timeEdit);


        retranslateUi(mainPanel);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainPanel);
    } // setupUi

    void retranslateUi(QWidget *mainPanel)
    {
        mainPanel->setWindowTitle(QApplication::translate("mainPanel", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_11->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("mainPanel", "\346\216\245\346\224\266\346\234\272", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_11->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("mainPanel", "\347\212\266\346\200\201", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_11->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("mainPanel", "\345\244\251\347\272\277", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_11->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("mainPanel", "\346\224\266\346\230\237\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_11->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("mainPanel", "\347\273\217\345\272\246", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_11->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("mainPanel", "\347\272\254\345\272\246", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_11->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("mainPanel", "\351\253\230\345\272\246", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_11->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("mainPanel", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_11->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("mainPanel", "New Row", 0));

        const bool __sortingEnabled = tableWidget_11->isSortingEnabled();
        tableWidget_11->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_11->item(0, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("mainPanel", "GN1", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_11->item(0, 1);
        ___qtablewidgetitem10->setText(QApplication::translate("mainPanel", "\346\234\252\351\224\201\345\256\232", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_11->item(0, 2);
        ___qtablewidgetitem11->setText(QApplication::translate("mainPanel", "\346\225\205\351\232\234", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_11->item(0, 3);
        ___qtablewidgetitem12->setText(QApplication::translate("mainPanel", "22", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_11->item(0, 4);
        ___qtablewidgetitem13->setText(QApplication::translate("mainPanel", "34\302\26011'", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_11->item(0, 5);
        ___qtablewidgetitem14->setText(QApplication::translate("mainPanel", "79\302\26011'", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_11->item(1, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("mainPanel", "GN2", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_11->item(1, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("mainPanel", "\345\267\262\351\224\201\345\256\232", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_11->item(1, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("mainPanel", "\346\255\243\345\270\270", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_11->item(1, 3);
        ___qtablewidgetitem18->setText(QApplication::translate("mainPanel", "53", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_11->item(1, 4);
        ___qtablewidgetitem19->setText(QApplication::translate("mainPanel", "34\302\26013'", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_11->item(1, 5);
        ___qtablewidgetitem20->setText(QApplication::translate("mainPanel", "79\302\26012'", 0));
        tableWidget_11->setSortingEnabled(__sortingEnabled);

        pushButton_10->setText(QApplication::translate("mainPanel", "PWR1", 0));
        pushButton_8->setText(QApplication::translate("mainPanel", "TF1", 0));
        label_44->setText(QApplication::translate("mainPanel", "\345\210\206\351\205\215\346\234\272\347\256\261", 0));
        pushButton_7->setText(QApplication::translate("mainPanel", "EXT.REF", 0));
        pushButton_12->setText(QApplication::translate("mainPanel", "PWR2", 0));
        pushButton_30->setText(QApplication::translate("mainPanel", "PTP", 0));
        pushButton_19->setText(QApplication::translate("mainPanel", "NTP", 0));
        pushButton_20->setText(QString());
        pushButton_18->setText(QApplication::translate("mainPanel", "NTP", 0));
        label_27->setText(QApplication::translate("mainPanel", "\345\210\206\351\205\215\346\234\272\347\256\261", 0));
        label_32->setText(QApplication::translate("mainPanel", "1", 0));
        label_33->setText(QApplication::translate("mainPanel", "2", 0));
        label_34->setText(QApplication::translate("mainPanel", "3", 0));
        label_35->setText(QApplication::translate("mainPanel", "4", 0));
        label_36->setText(QApplication::translate("mainPanel", "5", 0));
        label_37->setText(QApplication::translate("mainPanel", "6", 0));
        label_38->setText(QApplication::translate("mainPanel", "7", 0));
        label_39->setText(QApplication::translate("mainPanel", "8", 0));
        label_40->setText(QApplication::translate("mainPanel", "9", 0));
        label_41->setText(QApplication::translate("mainPanel", "10", 0));
        label_42->setText(QApplication::translate("mainPanel", "11", 0));
        pushButton_9->setText(QApplication::translate("mainPanel", "TF2", 0));
        pushButton_6->setText(QApplication::translate("mainPanel", "GN2", 0));
        pushButton_33->setText(QApplication::translate("mainPanel", "B", 0));
        pushButton_36->setText(QApplication::translate("mainPanel", "PTP", 0));
        pushButton_34->setText(QApplication::translate("mainPanel", "PTP", 0));
        pushButton_38->setText(QString());
        pushButton_39->setText(QString());
        pushButton_32->setText(QApplication::translate("mainPanel", "PTP", 0));
        pushButton_31->setText(QApplication::translate("mainPanel", "NTP", 0));
        pushButton_35->setText(QApplication::translate("mainPanel", "NTP", 0));
        pushButton_37->setText(QApplication::translate("mainPanel", "NTP", 0));
        pushButton_40->setText(QApplication::translate("mainPanel", "NTP", 0));
        pushButton_41->setText(QApplication::translate("mainPanel", "NTP", 0));
        pushButton_11->setText(QApplication::translate("mainPanel", "PWR1", 0));
        pushButton_3->setText(QApplication::translate("mainPanel", "GN1", 0));
        label_26->setText(QApplication::translate("mainPanel", "\344\270\273\346\234\272\347\256\261", 0));
        label_28->setText(QApplication::translate("mainPanel", "1", 0));
        label_29->setText(QApplication::translate("mainPanel", "2", 0));
        label_30->setText(QApplication::translate("mainPanel", "3", 0));
        label_31->setText(QApplication::translate("mainPanel", "4", 0));
        pushButton_13->setText(QApplication::translate("mainPanel", "PWR2", 0));
        label_43->setText(QApplication::translate("mainPanel", "\344\270\273\346\234\272\347\256\261", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QString());
        label_0->setText(QApplication::translate("mainPanel", "\347\224\265\346\272\2201", 0));
        label_1->setText(QApplication::translate("mainPanel", "\347\224\265\346\272\2202", 0));
        label_2->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2721", 0));
        label_3->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2722", 0));
        label_4->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2723", 0));
        label_5->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2724", 0));
        label_6->setText(QApplication::translate("mainPanel", "GN1", 0));
        label_7->setText(QApplication::translate("mainPanel", "GN2", 0));
        label_8->setText(QApplication::translate("mainPanel", "EXT", 0));
        label_9->setText(QApplication::translate("mainPanel", "\346\227\266\351\242\2211", 0));
        label_10->setText(QApplication::translate("mainPanel", "\345\210\207\346\215\242", 0));
        label_11->setText(QApplication::translate("mainPanel", "\346\227\266\351\242\2212", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_12->setText(QApplication::translate("mainPanel", "\347\224\265\346\272\2201", 0));
        label_13->setText(QApplication::translate("mainPanel", "\347\224\265\346\272\2202", 0));
        label_14->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2721", 0));
        label_15->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2722", 0));
        label_16->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2723", 0));
        label_17->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2724", 0));
        label_18->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2725", 0));
        label_19->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2726", 0));
        label_20->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2727", 0));
        label_21->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2728", 0));
        label_22->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\2729", 0));
        label_25->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\27210", 0));
        label_24->setText(QApplication::translate("mainPanel", "\350\276\223\345\207\27211", 0));
        label_23->setText(QApplication::translate("mainPanel", "\345\210\206\351\205\215", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        pushButton->setText(QApplication::translate("mainPanel", "\347\275\256\351\222\237", 0));
        pushButton_2->setText(QApplication::translate("mainPanel", "\345\220\214\346\255\245", 0));
        pushButton_4->setText(QApplication::translate("mainPanel", "\346\212\245\350\255\246", 0));
        pushButton_5->setText(QApplication::translate("mainPanel", "\346\227\245\345\277\227", 0));
        pushButton_14->setText(QApplication::translate("mainPanel", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        pushButton_15->setText(QApplication::translate("mainPanel", "test", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_9->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("mainPanel", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_9->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("mainPanel", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_9->verticalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("mainPanel", "\346\227\266\351\242\221", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_9->verticalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("mainPanel", "\345\217\202\350\200\203\346\272\220", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_9->verticalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("mainPanel", "\347\212\266\346\200\201", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_9->verticalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("mainPanel", "\346\227\266\345\267\256\302\265s", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_9->verticalHeaderItem(4);
        ___qtablewidgetitem27->setText(QApplication::translate("mainPanel", "\351\242\221\345\267\256Hz", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_9->verticalHeaderItem(5);
        ___qtablewidgetitem28->setText(QApplication::translate("mainPanel", "\345\220\214\346\255\245\346\226\271\345\274\217", 0));

        const bool __sortingEnabled1 = tableWidget_9->isSortingEnabled();
        tableWidget_9->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_9->item(0, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("mainPanel", "TF1", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_9->item(0, 1);
        ___qtablewidgetitem30->setText(QApplication::translate("mainPanel", "TF2", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_9->item(1, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("mainPanel", "GN1", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_9->item(1, 1);
        ___qtablewidgetitem32->setText(QApplication::translate("mainPanel", "EXT", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_9->item(2, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("mainPanel", "\350\267\237\350\270\252", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_9->item(2, 1);
        ___qtablewidgetitem34->setText(QApplication::translate("mainPanel", "\346\225\205\351\232\234", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_9->item(3, 0);
        ___qtablewidgetitem35->setText(QApplication::translate("mainPanel", "11", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_9->item(3, 1);
        ___qtablewidgetitem36->setText(QApplication::translate("mainPanel", "23", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_9->item(4, 0);
        ___qtablewidgetitem37->setText(QApplication::translate("mainPanel", "22", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_9->item(4, 1);
        ___qtablewidgetitem38->setText(QApplication::translate("mainPanel", "43", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_9->item(5, 0);
        ___qtablewidgetitem39->setText(QApplication::translate("mainPanel", "\346\211\213\345\212\250\345\220\214\346\255\245", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_9->item(5, 1);
        ___qtablewidgetitem40->setText(QApplication::translate("mainPanel", "\350\207\252\345\212\250\345\220\214\346\255\245", 0));
        tableWidget_9->setSortingEnabled(__sortingEnabled1);

        checkBox->setText(QApplication::translate("mainPanel", "\350\207\252\345\212\250\345\210\207\346\215\242", 0));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        label->setText(QApplication::translate("mainPanel", "UTC +08:00", 0));
        dateEdit->setDisplayFormat(QApplication::translate("mainPanel", "yyyy\345\271\264M\346\234\210d\346\227\245", 0));
        timeEdit->setDisplayFormat(QApplication::translate("mainPanel", "H:mm:ss", 0));
    } // retranslateUi

};

namespace Ui {
    class mainPanel: public Ui_mainPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPANEL_H
