/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *widget;
    QTableWidget *tableWidget;
    QPushButton *pushButton_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(684, 380);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(530, 80, 121, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"border:none;\n"
"min-width:2px;\n"
"background-color : qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(106, 0, 255, 255), stop:1 rgba(235, 215, 225, 255));\n"
"color:white;\n"
"border-radius:5px;\n"
"font: 600 13pt \"Calibri\";"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(340, 290, 16, 16));
        pushButton_8->setMinimumSize(QSize(2, 0));
        pushButton_8->setMaximumSize(QSize(16777215, 16777215));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border : none;\n"
"min-width:2px;\n"
"background-color:rgb(248, 249, 253);\n"
"color:black;\n"
"font-weight:bold;\n"
"border-radius:2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"color:white;\n"
"font-weight:bold;\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(370, 290, 16, 16));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border : none;\n"
"min-width:2px;\n"
"background-color:rgb(248, 249, 253);\n"
"color:black;\n"
"font-weight:bold;\n"
"border-radius:2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"color:white;\n"
"font-weight:bold;\n"
"}"));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(400, 290, 16, 16));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border : none;\n"
"min-width:2px;\n"
"background-color:rgb(248, 249, 253);\n"
"color:black;\n"
"font-weight:bold;\n"
"border-radius:2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"color:white;\n"
"font-weight:bold;\n"
"}"));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(430, 290, 51, 16));
        pushButton_11->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"min-width:2px;\n"
"background-color:rgb(248, 249, 253);\n"
"border:none;\n"
"color:blue;\n"
"font-weight:bolder;\n"
"border-radius:2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"color:white;\n"
"font-weight:bold;\n"
"}"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(279, 290, 51, 16));
        pushButton_12->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"min-width:2px;\n"
"background-color:rgb(248, 249, 253);\n"
"border:none;\n"
"color:blue;\n"
"font-weight:bolder;\n"
"border-radius:2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"color:white;\n"
"font-weight:bold;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(600, 10, 21, 21));
        label_2->setStyleSheet(QString::fromUtf8("border-radius:2px;"));
        label_2->setFrameShape(QFrame::Shape::StyledPanel);
        label_2->setFrameShadow(QFrame::Shadow::Sunken);
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/logo(1).png")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 10, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"background-color:white;\n"
"color:black;\n"
"font: 11pt \"Century Gothic\";"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -1, 121, 341));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, -10, 121, 381));
        frame_2->setStyleSheet(QString::fromUtf8("width :250px;\n"
"color: white;\n"
"background : qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(106, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border:none;"));
        frame_2->setFrameShape(QFrame::Shape::Panel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 90, 81, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	 color:rgb(225, 225, 225);\n"
"    border: none;\n"
"    text-align: left;\n"
"	 font: 10pt \"Microsoft Sans Serif\";\n"
"	background:transparent;\n"
"}\n"
"QPushButton:hover{\n"
"color:black;\n"
"font-weight:bold;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 120, 71, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	 color:rgb(225, 225, 225);\n"
"    border: none;\n"
"    text-align: left;\n"
"	 font: 10pt \"Microsoft Sans Serif\";\n"
"	background:transparent;\n"
"}\n"
"QPushButton:hover{\n"
"color:black;\n"
"font-weight:bold;\n"
"}"));
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 150, 81, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	 color:rgb(225, 225, 225);\n"
"    border: none;\n"
"    text-align: left;\n"
"	 font: 10pt \"Microsoft Sans Serif\";\n"
"	background:transparent;\n"
"}\n"
"QPushButton:hover{\n"
"color:black;\n"
"font-weight:bold;\n"
"}"));
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 180, 81, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	 color:rgb(225, 225, 225);\n"
"    border: none;\n"
"    text-align: left;\n"
"	 font: 10pt \"Microsoft Sans Serif\";\n"
"	background:transparent;\n"
"}\n"
"QPushButton:hover{\n"
"color:black;\n"
"font-weight:bold;\n"
"}"));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 60, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	 color:rgb(225, 225, 225);\n"
"    border: none;\n"
"    text-align: left;\n"
"	 font: 10pt \"Microsoft Sans Serif\";\n"
"	background:transparent;\n"
"}\n"
"QPushButton:hover{\n"
"color:black;\n"
"font-weight:bold;\n"
"}"));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 91, 31));
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 1200 17pt \"Century Gothic\";\n"
"background:transparent;"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 50, 521, 261));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(248, 249, 253);\n"
"border-radius:30px;"));
        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem22);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 70, 501, 111));
        tableWidget->setStyleSheet(QString::fromUtf8("/* Main table styling */\n"
"QTableView {\n"
"    border: none;\n"
"    background-color: white;\n"
"    gridline-color: #f0f0f0;\n"
"}\n"
"\n"
"/* Header styling */\n"
"QHeaderView::section {\n"
"    background-color: #f9f9ff;\n"
"    color: #8878ff;\n"
"    font-weight:bold;\n"
"    padding: 10px;\n"
"    border: none;\n"
"    border-bottom: 3px solid #e0e0e0;\n"
"    text-align: left;\n"
"}\n"
"QTableView::item:first {\n"
"    font-weight: medium;\n"
"    color: #222222; /* Darker text color for product names */\n"
"    padding-left: 20px; /* Extra padding on the left side */\n"
"}\n"
"\n"
"/* Row styling */\n"
"QTableView::item {\n"
"    border-bottom: 1px solid #e0e0e0;\n"
"    color:black;\n"
"	font: 9pt \"Microsoft Sans Serif\";\n"
"	\n"
"}\n"
"\n"
"/* Row alternating colors */\n"
"QTableView::item:alternate {\n"
"    background-color: #fafafa;\n"
"	padding: 8px;\n"
"}\n"
"\n"
"/* Status badge styling */\n"
".status-active {\n"
"    background-color: #ebf7ee;\n"
"    color: #40b15c;\n"
"    border-radiu"
                        "s: 12px;\n"
"    padding: 4px 16px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
".status-inactive {\n"
"    background-color: #feeded;\n"
"    color: #ff6b6b;\n"
"    border-radius: 12px;\n"
"    padding: 4px 16px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* Action button styling */\n"
"QPushButton.icon-button {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"    margin: 0 8px;\n"
"}"));
        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(250, 30, 121, 31));
        pushButton_14->setStyleSheet(QString::fromUtf8("\n"
"border:none;\n"
"min-width:2px;\n"
"background-color : qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(106, 0, 255, 255), stop:1 rgba(235, 215, 225, 255));\n"
"color:white;\n"
"border-radius:5px;\n"
"font: 600 13pt \"Calibri\";\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        widget->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        pushButton_12->raise();
        label_2->raise();
        label_3->raise();
        frame->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 684, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "- Delete Product", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Admin User", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Products", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Cust", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Reports", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "UtilSOFT", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Actions", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Chawal", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Kyun bTaon", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "AUkaat se bahar", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Married", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "GLt hrkaat", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "idk", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "kdcnaskd", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "daskdkdmkad", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 2);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "kdakd", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 3);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "kdmkasd", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(1, 4);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "dkasdk", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(1, 5);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "d amd", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(2, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "daksd", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "dkadkaks", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(2, 2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "dasdkasmd", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(2, 3);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "daddas", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 4);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "adsda", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 5);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "dasdad", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_14->setText(QCoreApplication::translate("MainWindow", "+ Add Product", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
