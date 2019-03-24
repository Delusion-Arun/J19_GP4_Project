#include "returnequip.h"
#include "ui_returnequip.h"
#include "dialog.h"
#include "equipment.h"
#include "user.h"
#include "loancontrol.h"

using namespace std;

ReturnEquip::ReturnEquip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnEquip)
{
    ui->setupUi(this);
}

ReturnEquip::~ReturnEquip()
{
    delete ui;
}



void ReturnEquip::on_pushButton_OK_clicked()
{
    itemid = "";

    QString itemids = ui ->lineEdit_id->text();

    itemid = itemids.toStdString();


}
