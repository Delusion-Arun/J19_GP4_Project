#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<string>
#include "returnequip.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    std::string ** returnRecords();

private slots:
    void on_pushButton_item_2_clicked();

    void on_pushButton_loan_2_clicked();

    void on_pushButton_exit_2_clicked();

    void on_pushButton_return_2_clicked();

    void on_pushButton_submenu_2_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
