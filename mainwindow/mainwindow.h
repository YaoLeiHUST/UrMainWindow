/*
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::mainwindowClass ui;
};
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "qtcpsocket.h"
//#include "qhostaddress.h"
#include <QtNetwork/qtcpsocket.h>
#include <QtNetwork/qhostaddress.h>


#pragma execution_character_set("utf-8")

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

public://设定全局变量：
	QTcpSocket *mysocket;
	QHostAddress myIPAddress;
	quint16 myIPPort;


public://设定全局函数：
	void Init();



public slots:
	void do_pushButtonLink_clicked(bool);
	void do_mysocket_readyRead();
	void do_pushButtonDisLink_clicked(bool);
	void do_pushButtonSendData_clicked(bool);
	void do_pushButtonClearSend_clicked(bool);
	void do_pushButtonClearReceive_clicked(bool);
	void do_mysocket_connected();


private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_