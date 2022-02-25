#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      tcpSocket(new QTcpSocket(this))
{
    connect(tcpSocket, &QIODevice::readyRead, this, &MainWindow::readData);
    ui->setupUi(this);
    tcpSocket->connectToHost("127.0.0.1", 1234);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::readData(){
    QString data = tcpSocket->readLine();
    ui->serverMessage->setText(data);
}
void MainWindow::on_wyslijButton_clicked()
{
    QString data = ui->figury->currentText() + "-" + ui->pola->currentText();
    tcpSocket->write(data.toUtf8(), data.length());
}

