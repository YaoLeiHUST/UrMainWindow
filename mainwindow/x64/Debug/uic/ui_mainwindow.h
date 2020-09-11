/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *mainwindow;
    QPushButton *pushButton_Link;
    QPushButton *pushButton_DisLink;
    QPushButton *pushButton_ClearReceive;
    QPushButton *pushButton_ClearSend;
    QPushButton *pushButton_SendData;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_Protocol;
    QTextEdit *textEdit_SendField;
    QTextEdit *textEdit_ReceiveField;
    QLineEdit *lineEdit_IPAddr;
    QLineEdit *lineEdit_Port;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(732, 492);
        mainwindow = new QWidget(MainWindow);
        mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        pushButton_Link = new QPushButton(mainwindow);
        pushButton_Link->setObjectName(QString::fromUtf8("pushButton_Link"));
        pushButton_Link->setGeometry(QRect(20, 240, 93, 28));
        pushButton_DisLink = new QPushButton(mainwindow);
        pushButton_DisLink->setObjectName(QString::fromUtf8("pushButton_DisLink"));
        pushButton_DisLink->setGeometry(QRect(20, 280, 93, 28));
        pushButton_ClearReceive = new QPushButton(mainwindow);
        pushButton_ClearReceive->setObjectName(QString::fromUtf8("pushButton_ClearReceive"));
        pushButton_ClearReceive->setGeometry(QRect(20, 320, 93, 28));
        pushButton_ClearSend = new QPushButton(mainwindow);
        pushButton_ClearSend->setObjectName(QString::fromUtf8("pushButton_ClearSend"));
        pushButton_ClearSend->setGeometry(QRect(20, 360, 93, 28));
        pushButton_SendData = new QPushButton(mainwindow);
        pushButton_SendData->setObjectName(QString::fromUtf8("pushButton_SendData"));
        pushButton_SendData->setGeometry(QRect(580, 300, 131, 61));
        label = new QLabel(mainwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 72, 15));
        label_2 = new QLabel(mainwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 72, 15));
        label_3 = new QLabel(mainwindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 160, 72, 15));
        label_4 = new QLabel(mainwindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 20, 91, 16));
        label_5 = new QLabel(mainwindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 220, 91, 16));
        comboBox_Protocol = new QComboBox(mainwindow);
        comboBox_Protocol->setObjectName(QString::fromUtf8("comboBox_Protocol"));
        comboBox_Protocol->setGeometry(QRect(10, 40, 121, 22));
        textEdit_SendField = new QTextEdit(mainwindow);
        textEdit_SendField->setObjectName(QString::fromUtf8("textEdit_SendField"));
        textEdit_SendField->setGeometry(QRect(210, 240, 341, 171));
        textEdit_ReceiveField = new QTextEdit(mainwindow);
        textEdit_ReceiveField->setObjectName(QString::fromUtf8("textEdit_ReceiveField"));
        textEdit_ReceiveField->setGeometry(QRect(210, 40, 341, 171));
        lineEdit_IPAddr = new QLineEdit(mainwindow);
        lineEdit_IPAddr->setObjectName(QString::fromUtf8("lineEdit_IPAddr"));
        lineEdit_IPAddr->setGeometry(QRect(10, 110, 113, 21));
        lineEdit_Port = new QLineEdit(mainwindow);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(10, 190, 113, 21));
        MainWindow->setCentralWidget(mainwindow);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 732, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "mainwindow", nullptr));
        pushButton_Link->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        pushButton_DisLink->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        pushButton_ClearReceive->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        pushButton_ClearSend->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        pushButton_SendData->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\215\217\350\256\256\347\261\273\345\236\213\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\346\225\260\346\215\256\346\216\245\346\224\266\345\214\272\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\346\225\260\346\215\256\345\217\221\351\200\201\345\214\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
