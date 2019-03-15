#ifndef DISPLAYEQUIP_H
#define DISPLAYEQUIP_H

#include <QMainWindow>

namespace Ui {
class DisplayEquip;
}

class DisplayEquip : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayEquip(QWidget *parent = nullptr);
    ~DisplayEquip();

private:
    Ui::DisplayEquip *ui;
};

#endif // DISPLAYEQUIP_H
