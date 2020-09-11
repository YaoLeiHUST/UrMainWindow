/*
#include "mainwindow.h"

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"
// #include "qhostaddress.h"
#include <QtNetwork/qhostaddress.h>
#include "qbytearray.h"
#include "qpalette.h"

#pragma execution_character_set("utf-8")

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	Init();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::Init()
{
	mysocket = new QTcpSocket(this);
	ui->comboBox_Protocol->insertItem(0, "TCPSever");
	ui->comboBox_Protocol->insertItem(1, "TCPClient");
	ui->pushButton_DisLink->setDisabled(true);


	connect(ui->pushButton_Link, SIGNAL(clicked(bool)), this, SLOT(do_pushButtonLink_clicked(bool)));
	connect(ui->pushButton_DisLink, SIGNAL(clicked(bool)), this, SLOT(do_pushButtonDisLink_clicked(bool)));
	connect(ui->pushButton_SendData, SIGNAL(clicked(bool)), this, SLOT(do_pushButtonSendData_clicked(bool)));
	connect(ui->pushButton_ClearReceive, SIGNAL(clicked(bool)), this, SLOT(do_pushButtonClearReceive_clicked(bool)));
	connect(ui->pushButton_ClearSend, SIGNAL(clicked(bool)), this, SLOT(do_pushButtonClearSend_clicked(bool)));
}


void MainWindow::do_pushButtonClearSend_clicked(bool)
{
	ui->textEdit_SendField->clear();
}

void MainWindow::do_pushButtonClearReceive_clicked(bool)
{
	ui->textEdit_ReceiveField->clear();
}


void MainWindow::do_pushButtonSendData_clicked(bool)
{
	if (ui->textEdit_SendField->toPlainText().isEmpty())
	{
		return;
	}

	QString sendText = ui->textEdit_SendField->toPlainText() + "\n";
	mysocket->write(sendText.toLocal8Bit());

	ui->textEdit_ReceiveField->append(sendText);
	ui->textEdit_SendField->clear();
}


void MainWindow::do_pushButtonDisLink_clicked(bool)
{
	mysocket->disconnect();
	mysocket->close();
	ui->pushButton_DisLink->setDisabled(true);
	ui->pushButton_Link->setDisabled(false);
}

void MainWindow::do_pushButtonLink_clicked(bool)
{
	if (ui->lineEdit_IPAddr->text().isEmpty())
	{
		QMessageBox::information(this, "提示：", "IP地址不能为空");
		return;
	}
	if (ui->lineEdit_Port->text().isEmpty())
	{
		QMessageBox::information(this, "提示", "端口号不能为空");
		return;
	}

	myIPAddress = (QHostAddress)ui->lineEdit_IPAddr->text();
	myIPPort = ui->lineEdit_Port->text().toUInt();

	mysocket->connectToHost(myIPAddress, myIPPort);
	if (!mysocket->waitForConnected())
	{
		QMessageBox::information(this, "提示：", "连接失败，请重新连接》》》");
		return;
	}

	ui->pushButton_Link->setDisabled(true);
	ui->pushButton_DisLink->setDisabled(false);
	connect(mysocket, SIGNAL(readyRead()), this, SLOT(do_mysocket_readyRead()));
	connect(mysocket, SIGNAL(connected()), this, SLOT(do_mysocket_connected()));

}

void MainWindow::do_mysocket_connected()
{
	ui->pushButton_Link->setBackgroundRole(QPalette::Window);
}

void MainWindow::do_mysocket_readyRead()
{
	QByteArray receiveText = mysocket->readAll();
	ui->textEdit_ReceiveField->append(QString("获得的字节数：%1").arg(mysocket->bytesAvailable()));
	ui->textEdit_ReceiveField->append(QString("所获得的数据：" + receiveText.toHex().toUpper()));

	//QByteArray receiveLine = mysocket->readLine(1024);
	//ui->textEdit_ReceiveField->append((QString)receiveLine.toHex());
	//ui->textEdit_ReceiveField->append("\n");
}
