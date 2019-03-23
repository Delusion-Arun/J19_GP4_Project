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

    Tent *tents;
    Stove *stove;
    Lantern *lanterns;


    for (int row = 0 ; row < 24; row++ )
    {

        if (tents[row].getCondition() == "good" && tents[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString type = QString::fromStdString(tents[row].getItemType());
            item->setText(type);
            ui->tableWidget->setItem(row, 0,item);
        }

    }

    for (int row = 0 ; row < 24; row++ )
    {

        if (stove[row].getCondition() == "good" && stove[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString type = QString::fromStdString(stove[row].getItemType());
            item->setText(type);
            ui->tableWidget->setItem(row, 0,item);
        }

    }

    for (int row = 0 ; row < 24; row++ )
    {

        if (lanterns[row].getCondition() == "good" && lanterns[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString type = QString::fromStdString(lanterns[row].getItemType());
            item->setText(type);
            ui->tableWidget->setItem(row, 0,item);
        }

    }


    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getCondition() == "good" && tents[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(tents[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }
    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getCondition() == "good" && stove[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(stove[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getCondition() == "good" && lanterns[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(lanterns[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getCondition() == "good" && tents[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(tents[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getCondition() == "good" && stove[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(stove[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getCondition() == "good" && lanterns[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(lanterns[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getCondition() == "good" && tents[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getItemName());
            item->setText(names);
            ui->tableWidget->setItem(row,2,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getCondition() == "good" && stove[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getItemName());
            item->setText(names);
            ui->tableWidget->setItem(row,2,item);
        }
    }
    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getCondition() == "good" && lanterns[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getItemName());
            item->setText(names);
            ui->tableWidget->setItem(row,2,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getCondition() == "good" && tents[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getBrand());
            item->setText(names);
            ui->tableWidget->setItem(row,3,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getCondition() == "good" && stove[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getBrand());
            item->setText(names);
            ui->tableWidget->setItem(row,3,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getCondition() == "good" && lanterns[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getBrand());
            item->setText(names);
            ui->tableWidget->setItem(row,3,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getCondition() == "good" && tents[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getDateOfPurchase());
            item->setText(names);
            ui->tableWidget->setItem(row,4,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getCondition() == "good" && stove[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getDateOfPurchase());
            item->setText(names);
            ui->tableWidget->setItem(row,4,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getCondition() == "good" && lanterns[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getDateOfPurchase());
            item->setText(names);
            ui->tableWidget->setItem(row,4,item);
        }
    }
    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getCondition() == "good" && tents[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getCondition());
            item->setText(names);
            ui->tableWidget->setItem(row,5,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getCondition() == "good" && stove[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getCondition());
            item->setText(names);
            ui->tableWidget->setItem(row,5,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getCondition() == "good" && lanterns[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getCondition());
            item->setText(names);
            ui->tableWidget->setItem(row,5,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getCondition() == "good" && tents[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getStatus());
            item->setText(names);
            ui->tableWidget->setItem(row,6,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getCondition() == "good" && stove[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getStatus());
            item->setText(names);
            ui->tableWidget->setItem(row,6,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getCondition() == "good" && lanterns[row].getStatus() == "in"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getStatus());
            item->setText(names);
            ui->tableWidget->setItem(row,6,item);
        }
    }

}

void Dialog::on_pushButton_loan_2_clicked()
{

    for (int x = 0; x<7; x++){
        for (int y = 0; y<24; y++){
            QTableWidgetItem* item = new QTableWidgetItem();
            item->setText("");
            ui->tableWidget->setItem(y, x,item);
        }
    }

    Tent *tents;
    Stove *stove;
    Lantern *lanterns;


    for (int row = 0 ; row < 24; row++ )
    {

        if (tents[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString type = QString::fromStdString(tents[row].getItemType());
            item->setText(type);
            ui->tableWidget->setItem(row, 0,item);
        }

    }

    for (int row = 0 ; row < 24; row++ )
    {

        if (stove[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString type = QString::fromStdString(stove[row].getItemType());
            item->setText(type);
            ui->tableWidget->setItem(row, 0,item);
        }

    }

    for (int row = 0 ; row < 24; row++ )
    {

        if (lanterns[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString type = QString::fromStdString(lanterns[row].getItemType());
            item->setText(type);
            ui->tableWidget->setItem(row, 0,item);
        }

    }


    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(tents[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }
    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(stove[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(lanterns[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(tents[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(stove[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString id = QString::fromStdString(lanterns[row].getItemId());
            item->setText(id);
            ui->tableWidget->setItem(row, 1,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getItemName());
            item->setText(names);
            ui->tableWidget->setItem(row,2,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getItemName());
            item->setText(names);
            ui->tableWidget->setItem(row,2,item);
        }
    }
    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getItemName());
            item->setText(names);
            ui->tableWidget->setItem(row,2,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getBrand());
            item->setText(names);
            ui->tableWidget->setItem(row,3,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getBrand());
            item->setText(names);
            ui->tableWidget->setItem(row,3,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getBrand());
            item->setText(names);
            ui->tableWidget->setItem(row,3,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getDateOfPurchase());
            item->setText(names);
            ui->tableWidget->setItem(row,4,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getDateOfPurchase());
            item->setText(names);
            ui->tableWidget->setItem(row,4,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getDateOfPurchase());
            item->setText(names);
            ui->tableWidget->setItem(row,4,item);
        }
    }
    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getCondition());
            item->setText(names);
            ui->tableWidget->setItem(row,5,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getCondition());
            item->setText(names);
            ui->tableWidget->setItem(row,5,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getCondition());
            item->setText(names);
            ui->tableWidget->setItem(row,5,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (tents[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(tents[row].getStatus());
            item->setText(names);
            ui->tableWidget->setItem(row,6,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (stove[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(stove[row].getStatus());
            item->setText(names);
            ui->tableWidget->setItem(row,6,item);
        }
    }

    for (int row = 0 ; row < 24; row++ )
    {
        if (lanterns[row].getStatus() == "out"){
            QTableWidgetItem* item = new QTableWidgetItem();
            QString names = QString::fromStdString(lanterns[row].getStatus());
            item->setText(names);
            ui->tableWidget->setItem(row,6,item);
        }
    }
}
