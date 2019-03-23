#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include <QMessageBox>
#include<string>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString id;
    QString pass;

private slots:

    void on_pushButton_Login_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
};

#endif // MAINWINDOW_H
