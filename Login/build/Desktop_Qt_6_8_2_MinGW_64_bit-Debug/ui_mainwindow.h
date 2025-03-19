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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 801, 571));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Qt/pictures/freepik__the-style-is-candid-image-photography-with-natural__14786.jpeg")));
        label->setScaledContents(true);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(230, 60, 341, 391));
        frame->setStyleSheet(QString::fromUtf8(" background: rgba(255, 255, 255, 0.6);  /* Semi-transparent */\n"
"    border-radius: 20px; /* Smooth rounded corners */\n"
"border:1px solid ;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 140, 131, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font1.setBold(true);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"    color:#2e2a4b;  /* Keeps your text color */\n"
"    font-size: 27px;  /* Adjust size if needed */\n"
"    font-weight: bold; /* Make it bold if required */\n"
"    border: none;  /* Ensures no border appears */\n"
" border-radius: 10px; /* Rounded corners */\n"
"    padding: 5px 20px;\n"
"background:transparent;\n"
"border: none;"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 190, 281, 41));
        lineEdit->setStyleSheet(QString::fromUtf8(" background: rgba(155, 155, 155, 0.4);  /* Semi-transparent white */\n"
"    border: 1px solid rgba(255, 255, 255, 0.5); /* Soft white border */\n"
"    border-radius: 15px;  /* Rounded corners */\n"
"    padding: 10px;\n"
"    color: white; /* White text */\n"
"    font-size: 16px;\n"
"QLineEdit::placeholder {\n"
"    color: rgba(255, 255, 255, 1);  /* Adjust transparency for visibility */\n"
"    font-size: 16px;\n"
"\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 250, 281, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8(" background: rgba(155, 155, 155, 0.4);  /* Semi-transparent white */\n"
"    border: 1px solid rgba(255, 255, 255, 0.5); /* Soft white border */\n"
"    border-radius: 15px;  /* Rounded corners */\n"
"    padding: 10px;\n"
"    color: white; /* White text */\n"
"    font-size: 16px;\n"
"QLineEdit::placeholder {\n"
"    color: rgba(255, 255, 255, 1);  /* Adjust transparency for visibility */\n"
"    font-size: 16px;\n"
"\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 320, 201, 41));
        pushButton->setStyleSheet(QString::fromUtf8("    background: #d49c57;\n"
"    border: none;\n"
"    border-radius: 15px;\n"
"    padding: 10px;\n"
"    font-size: 16px;\n"
"    color: white;\n"
"hover {\n"
"    background: rgba(255, 100, 100, 1);\n"
"}"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 0, 71, 71));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"border: none;\n"
" background: transparent;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("C:/Qt/pictures/user_1077063.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 190, 41, 41));
        label_6->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("C:/Qt/pictures/lock_3039483.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 250, 41, 41));
        label_7->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_7->setPixmap(QPixmap(QString::fromUtf8("C:/Qt/pictures/lock_3039483.png")));
        label_7->setScaledContents(true);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 70, 151, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Script MT")});
        font2.setPointSize(20);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8(" border-radius: 10px; /* Rounded corners */\n"
"    padding: 5px 20px;\n"
"background:transparent;\n"
"border: none;\n"
"color:#231713;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 120, 111, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8(" border-radius: 10px; /* Rounded corners */\n"
"     color:#2e2a4b;\n"
"background:transparent;\n"
"border: none;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Name", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Passoward", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "UtiliSoft", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
