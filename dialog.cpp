#include "dialog.h"
#include "ui_dialog.h"
#include "equipment.h"
#include <QMessageBox>
#include "loancontrol.h"
#include "mainwindow.h"

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


    ui->tableWidget->horizontalHeaderItem( 0 )->setText( "Item Type" );
    ui->tableWidget->horizontalHeaderItem( 1 )->setText( "Item Id" );
    ui->tableWidget->horizontalHeaderItem( 2 )->setText( "Item Name" );
    ui->tableWidget->horizontalHeaderItem( 3 )->setText( "Brand" );
    ui->tableWidget->horizontalHeaderItem( 4 )->setText( "Date Of Purchase" );
    ui->tableWidget->horizontalHeaderItem( 5 )->setText( "Condition" );
    ui->tableWidget->horizontalHeaderItem( 6 )->setText( "Status" );

    for (int x = 0; x<7; x++){
        for (int y = 0; y<24; y++){
            QTableWidgetItem* item = new QTableWidgetItem();
            item->setText("");
            ui->tableWidget->setItem(y,x,item);
        }
    }

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

string **records = NULL;

void Dialog::on_pushButton_loan_2_clicked()
{
    MainWindow wind;
    string userid, password;

    ui->tableWidget->horizontalHeaderItem( 0 )->setText( "Last" );
    ui->tableWidget->horizontalHeaderItem( 1 )->setText( "Item Id" );
    ui->tableWidget->horizontalHeaderItem( 2 )->setText( "Item Name" );
    ui->tableWidget->horizontalHeaderItem( 3 )->setText( "Date of Return" );
    ui->tableWidget->horizontalHeaderItem( 4 )->setText( "" );
    ui->tableWidget->horizontalHeaderItem( 5 )->setText( "" );
    ui->tableWidget->horizontalHeaderItem( 6 )->setText( "" );

    userid = wind.id.toStdString();
    password = wind.pass.toStdString();

    for (int x = 0; x<7; x++){
        for (int y = 0; y<24; y++){
            QTableWidgetItem* item = new QTableWidgetItem();
            item->setText("");
            ui->tableWidget->setItem(y,x,item);
        }
    }

    //dummy
    User *user;

    int size = sizeof(records)/sizeof (records[0]);
    int count = size;

    string **ids = getUserCurrentBorrowRecord(user, records, size, count);

    for (int row = 0 ; row < count; row++ )
    {
        QTableWidgetItem* item = new QTableWidgetItem();
        QString names = QString::fromStdString(ids[row][0]);
        item->setText(names);
        ui->tableWidget->setItem(row,0,item);
    }

    for (int row = 0 ; row < count; row++ )
    {
        QTableWidgetItem* item = new QTableWidgetItem();
        QString names = QString::fromStdString(ids[row][1]);
        item->setText(names);
        ui->tableWidget->setItem(row,1,item);
    }

    for (int row = 0 ; row < count; row++ )
    {
        QTableWidgetItem* item = new QTableWidgetItem();
        QString names = QString::fromStdString(ids[row][2]);
        item->setText(names);
        ui->tableWidget->setItem(row,2,item);
    }

    for (int row = 0 ; row < count; row++ )
    {
        QTableWidgetItem* item = new QTableWidgetItem();
        QString names = QString::fromStdString(ids[row][3]);
        item->setText(names);
        ui->tableWidget->setItem(row,3,item);
    }

    for (int i = 0; i < count; i++) {
        delete[] ids[i];
    }
    delete[] ids;

}

string ** returnRecords(){
    return records;
}

void Dialog::on_pushButton_submenu_2_clicked()
{
    User *user;
    Tent *tents;
    Stove *stove;
    Lantern *lanterns;
    int size = sizeof(records)/sizeof (records[0]);
    performBorrowEquipment(user, tents, stove,lanterns, records, size);

}

void Dialog::on_pushButton_return_2_clicked()
{
    User *user;
    Tent *tents;
    Stove *stove;
    Lantern *lanterns;
    int size = sizeof(records)/sizeof (records[0]);
    performReturnItem(user, tents, stove,lanterns, records, size);
}

void Dialog::on_pushButton_exit_2_clicked()
{
    hide();
    QMessageBox::information(this,"Login", "Thank you for using our program.");
}



