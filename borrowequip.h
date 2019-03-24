#ifndef BORROWEQUIP_H
#define BORROWEQUIP_H

#include <QWidget>

namespace Ui {
class BorrowEquip;
}

class BorrowEquip : public QWidget
{
    Q_OBJECT

public:
    explicit BorrowEquip(QWidget *parent = nullptr);
    ~BorrowEquip();
    std::string itemb;

private slots:
    void on_pushButton_OK_clicked();

private:
    Ui::BorrowEquip *ui;
};

#endif // BORROWEQUIP_H
