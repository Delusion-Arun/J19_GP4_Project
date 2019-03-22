#include "dialog.h"
#include "ui_dialog.h"
#include "equipment.h"
#include <QMessageBox>

using namespace std;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}




void Dialog::on_pushButton_item_2_clicked()
{


    Equipment *equip;
    int count = 0;
    string temp[24];

    for (int row = 0 ; row < 24; row++ )
    {

        if (equip[row].getCondition() == "good" && equip[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString type = QString::fromStdString(equip[row].getItemType());
            item->setText(type);
            ui->tableWidget->setItem(row, 0,item);
        }

    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (equip[row].getCondition() == "good" && equip[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(equip[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (equip[row].getCondition() == "good" && equip[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(equip[row].getItemName());
            item->setText(names);
            ui->tableWidget->setItem(row,2,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (equip[row].getCondition() == "good" && equip[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(equip[row].getBrand());
            item->setText(names);
            ui->tableWidget->setItem(row,3,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (equip[row].getCondition() == "good" && equip[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(equip[row].getDateOfPurchase());
            item->setText(names);
            ui->tableWidget->setItem(row,4,item);
        }
    }
    for (int row = 0 ; row < 24; row++ )
    {
        if (equip[row].getCondition() == "good" && equip[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(equip[row].getCondition());
            item->setText(names);
            ui->tableWidget->setItem(row,5,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (equip[row].getCondition() == "good" && equip[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(equip[row].getStatus());
            item->setText(names);
            ui->tableWidget->setItem(row,6,item);
        }
    }

}
