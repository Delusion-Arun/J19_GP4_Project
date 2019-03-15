#include "displayequip.h"
#include "ui_displayequip.h"

DisplayEquip::DisplayEquip(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayEquip)
{
    ui->setupUi(this);
}

DisplayEquip::~DisplayEquip()
{
    delete ui;
}
