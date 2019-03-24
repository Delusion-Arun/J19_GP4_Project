#include "borrowequip.h"
#include "ui_borrowequip.h"
#include<string>
using namespace std;

BorrowEquip::BorrowEquip(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BorrowEquip)
{
    ui->setupUi(this);
}

BorrowEquip::~BorrowEquip()
{
    delete ui;
}

void BorrowEquip::on_pushButton_OK_clicked()
{
    itemb = "";

    QString itemid2 = ui ->lineEdit_id2->text();
    itemb = itemid2.toStdString();

}
