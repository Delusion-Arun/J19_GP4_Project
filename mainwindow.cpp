#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{

    QString userid = ui ->lineEdit_userid->text();
    QString password = ui ->lineEdit_password->text();

    if (userid == "admin" && password== "admin"){
        hide();
        id = userid;
        pass = password;
        dialog = new Dialog(this);
        dialog -> show();
    }
    else{
        QMessageBox::warning(this,"Login", "The User-id or password is incorrect.");
    }
}

