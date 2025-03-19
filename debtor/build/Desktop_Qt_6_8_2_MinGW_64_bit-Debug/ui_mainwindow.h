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
    QPushButton *pushButton_12;
    QPushButton *pushButton_8;
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_10;
    QLabel *label_5;
    QPushButton *pushButton_9;
    QWidget *widget;
    QTableWidget *tableWidget;
    QPushButton *pushButton_7;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 379);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:white;"));
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
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
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -1, 121, 341));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, -10, 121, 351));
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
        pushButton_10 = new QPushButton(frame_2);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(30, 310, 81, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 321, 16, 16));
        label_5->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background:transparent;\n"
"background-image: url(:/new/prefix1/logout.png);\n"
""));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logout.png")));
        label_5->setScaledContents(true);
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
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 80, 521, 251));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(248, 249, 253);\n"
"border-radius:30px;"));
        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem11);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 90, 451, 141));
        tableWidget->setStyleSheet(QString::fromUtf8("/* Qt Leave History Table CSS */\n"
"\n"
"QTableView {\n"
"    background-color: white;\n"
"    border: none;\n"
"    gridline-color: #e2e8f0;\n"
"    selection-background-color: #e2e8f0;\n"
"    selection-color: black;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 10px;\n"
"	color :black;\n"
"    border-bottom: 1px solid #e2e8f0;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #e2e8f0;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #e9f0f8;\n"
"    padding: 14px 10px;\n"
"    border: none;\n"
"    font-weight: bold;\n"
"    color: #333;\n"
"    text-align:center;\n"
"}\n"
"\n"
"QHeaderView::section:first {\n"
"    border-top-left-radius: 6px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"    border-top-right-radius: 6px;\n"
"}\n"
"\n"
"/* Alternate row colors */\n"
"QTableView {\n"
"    alternate-background-color: #f1f5f9;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #f0f0f0;\n"
"    width: 8px;\n"
"    b"
                        "order-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #d0d0d0;\n"
"    min-height: 20px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    border: none;\n"
"    background: #f0f0f0;\n"
"    height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #d0d0d0;\n"
"    min-width: 20px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* Hide scrollbar arrow buttons */\n"
"QScrollBar::add-line, QScrollBar::sub-line {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(300, 30, 151, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"border:none;\n"
"min-width:2px;\n"
"background-color : qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(106, 0, 255, 255), stop:1 rgba(235, 215, 225, 255));\n"
"color:white;\n"
"border-radius:5px;\n"
"font: 600 13pt \"Calibri\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(630, 10, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"background-color:white;\n"
"color:black;\n"
"font: 11pt \"Century Gothic\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 20, 211, 31));
        label_4->setStyleSheet(QString::fromUtf8("color : black;\n"
"font: 700 16pt \"Tahoma\";\n"
"border:none;\n"
"background:transparent;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(720, 10, 21, 21));
        label_6->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"background:transparent;\n"
"background-image: url(:/new/prefix1/logout.png);\n"
""));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo(1).png")));
        label_6->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Products", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Cust", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Reports", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "UtilSOFT", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        label_5->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Contact No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Debt Amount", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Shahzaib", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "03333333333", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "chandni chowk", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "340/-", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "adsdd", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "sdfsffd", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "dvsdfdsfd", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "sdfdfdsfd", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Add/Remove Debtor", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Admin User", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Debt Management", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
