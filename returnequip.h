#ifndef RETURNEQUIP_H
#define RETURNEQUIP_H

#include <QDialog>


namespace Ui {
class ReturnEquip;
}

class ReturnEquip : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnEquip(QWidget *parent = nullptr);
    ~ReturnEquip();
    std::string itemid;

private slots:
    void on_pushButton_OK_clicked();

private:
    Ui::ReturnEquip *ui;
};

#endif // RETURNEQUIP_H
