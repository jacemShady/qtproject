/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *lineEdituserr;
    QLabel *label_4;
    QLineEdit *lineEdipasswordd;
    QLabel *label_3;
    QPushButton *forgot_pb;
    QPushButton *pushButtonlog;
    QWidget *page_2;
    QLineEdit *rcpt;
    QPushButton *sendBtn;
    QLabel *label;
    QLabel *label_8;
    QWidget *page_4;
    QLabel *label_11;
    QLineEdit *pas2;
    QLineEdit *pas1;
    QPushButton *cont_pb;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1474, 969);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(660, 230, 681, 411));
        stackedWidget->setStyleSheet(QLatin1String("/* styles.qss */\n"
"\n"
"/* Set the default font color to white */\n"
"* {\n"
"    color: white;\n"
"}\n"
"\n"
"/* Style for input boxes (assuming they are QLineEdit or similar) */\n"
"QLineEdit {\n"
"    background-color: #ffffff; /* White background for input boxes for clarity */\n"
"    border: 1px solid #3498db; /* Blue border */\n"
"    border-radius: 10px; /* Larger border radius for smooth edges */\n"
"    padding: 8px; /* Increased padding */\n"
"    color: #333; /* Text color inside input boxes */\n"
"}\n"
"\n"
"/* Style for push buttons (assuming they are QPushButtons or similar) */\n"
"QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Darker blue border for buttons */\n"
"    border-radius: 10px; /* Larger border radius for smooth edges */\n"
"    padding: 8px 16px; /* Adjusted padding */\n"
"    color: white; /* Text color on buttons */\n"
"}\n"
"\n"
"/* Style for QStackedWidget */\n"
"QStackedWidget {\n"
"    background-color: rgba"
                        "(255, 255, 255, 0.1); /* Very light semi-transparent white background for a subtle effect */\n"
"    border: 5px solid #3498db; /* Blue border */\n"
"    border-radius: 10px; /* Larger border radius for smooth edges */\n"
"    padding: 20px; /* Adjusted padding */\n"
"    backdrop-filter: blur(10px); /* Apply blur effect */\n"
"    /* Optionally add additional styling */\n"
"    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2); /* Slightly stronger shadow for depth */\n"
"    color: #333; /* Text color for better readability */\n"
"}\n"
"\n"
"/* Style for dialogs */\n"
"QDialog {\n"
"    background-color: #3498db; /* Blue color for dialogs */\n"
"    border: 1px solid #2980b9; /* Darker blue border for dialogs */\n"
"    border-radius: 10px; /* Larger border radius for smooth edges */\n"
"    padding: 10px; /* Adjusted padding */\n"
"    color: white; /* Text color */\n"
"}\n"
"\n"
"/* Additional styling for better appearance */\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
""
                        "}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1f618d; /* Even darker blue when pressed */\n"
"}\n"
""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        lineEdituserr = new QLineEdit(page);
        lineEdituserr->setObjectName(QStringLiteral("lineEdituserr"));
        lineEdituserr->setGeometry(QRect(240, 150, 231, 41));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 160, 61, 21));
        label_4->setStyleSheet(QStringLiteral("image: url(:/img/img/user_747376.png);"));
        lineEdipasswordd = new QLineEdit(page);
        lineEdipasswordd->setObjectName(QStringLiteral("lineEdipasswordd"));
        lineEdipasswordd->setGeometry(QRect(240, 220, 231, 41));
        lineEdipasswordd->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 230, 51, 21));
        label_3->setStyleSheet(QStringLiteral("image: url(:/img/img/padlock.png);"));
        forgot_pb = new QPushButton(page);
        forgot_pb->setObjectName(QStringLiteral("forgot_pb"));
        forgot_pb->setGeometry(QRect(250, 320, 181, 41));
        forgot_pb->setStyleSheet(QLatin1String("QPushButton { background-color: transparent;\n"
"	font: 63 10pt \"Montserrat SemiBold\";\n"
"color: Black;\n"
" text-decoration: underline;\n"
"border: none };\n"
""));
        pushButtonlog = new QPushButton(page);
        pushButtonlog->setObjectName(QStringLiteral("pushButtonlog"));
        pushButtonlog->setGeometry(QRect(280, 280, 121, 41));
        pushButtonlog->setStyleSheet(QStringLiteral("font: 63 12pt \"Montserrat SemiBold\";"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        rcpt = new QLineEdit(page_2);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(197, 211, 261, 36));
        sendBtn = new QPushButton(page_2);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(260, 280, 121, 31));
        sendBtn->setStyleSheet(QStringLiteral("font: 63 12pt \"Montserrat SemiBold\";"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 100, 531, 81));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"    color: black; /* Text color for labels */\n"
"	font: 63 14pt \"Montserrat SemiBold\";\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 40, 261, 41));
        label_8->setStyleSheet(QLatin1String("QLabel {\n"
"    color: black; /* Text color for labels */\n"
"    font-size: 30px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_11 = new QLabel(page_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(150, 30, 341, 71));
        label_11->setStyleSheet(QLatin1String("QLabel {\n"
"    color: black; /* Text color for labels */\n"
"    font-size: 30px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}"));
        pas2 = new QLineEdit(page_4);
        pas2->setObjectName(QStringLiteral("pas2"));
        pas2->setGeometry(QRect(220, 200, 231, 31));
        pas2->setEchoMode(QLineEdit::Password);
        pas1 = new QLineEdit(page_4);
        pas1->setObjectName(QStringLiteral("pas1"));
        pas1->setGeometry(QRect(220, 130, 231, 31));
        cont_pb = new QPushButton(page_4);
        cont_pb->setObjectName(QStringLiteral("cont_pb"));
        cont_pb->setGeometry(QRect(250, 260, 141, 41));
        cont_pb->setStyleSheet(QStringLiteral("font: 63 12pt \"Montserrat SemiBold\";"));
        label_12 = new QLabel(page_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 120, 121, 51));
        label_12->setStyleSheet(QLatin1String("QLabel {\n"
"    color: black; /* Text color for labels */\n"
"    font-size: 15px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}"));
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(80, 200, 131, 31));
        label_13->setStyleSheet(QLatin1String("QLabel {\n"
"    color: black; /* Text color for labels */\n"
"    font-size: 15px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}"));
        stackedWidget->addWidget(page_4);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 1470, 1000));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/img/img/R (1).jfif);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1050, 530, 141, 91));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/img/img/99484734571a59fde41fc712a14c32c3.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 170, 751, 461));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/img/img/dqzd.png);"));
        MainWindow->setCentralWidget(centralwidget);
        label_6->raise();
        label_5->raise();
        label_2->raise();
        stackedWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1474, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lineEdituserr->setPlaceholderText(QApplication::translate("MainWindow", "Enter Your Username", Q_NULLPTR));
        label_4->setText(QString());
        lineEdipasswordd->setPlaceholderText(QApplication::translate("MainWindow", "Enter Your Password", Q_NULLPTR));
        label_3->setText(QString());
        forgot_pb->setText(QApplication::translate("MainWindow", "forgot password", Q_NULLPTR));
        pushButtonlog->setText(QApplication::translate("MainWindow", "Log in", Q_NULLPTR));
        rcpt->setPlaceholderText(QApplication::translate("MainWindow", "Enter your Email address", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "Continue", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#000000;\">Enter your email associated with your account </span></p><p align=\"center\"><span style=\" font-size:14pt; color:#000000;\">and we'll send an email to reset your password</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Password reset", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Enter New Password", Q_NULLPTR));
        cont_pb->setText(QApplication::translate("MainWindow", "Continue", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Old Password", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "New Password", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H