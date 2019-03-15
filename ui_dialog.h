/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_item;
    QPushButton *pushButton_loan;
    QPushButton *pushButton_return;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_submenu;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        pushButton_item = new QPushButton(Dialog);
        pushButton_item->setObjectName(QString::fromUtf8("pushButton_item"));
        pushButton_item->setGeometry(QRect(20, 59, 361, 31));
        pushButton_loan = new QPushButton(Dialog);
        pushButton_loan->setObjectName(QString::fromUtf8("pushButton_loan"));
        pushButton_loan->setGeometry(QRect(20, 100, 361, 31));
        pushButton_return = new QPushButton(Dialog);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(20, 180, 361, 31));
        pushButton_exit = new QPushButton(Dialog);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(20, 220, 361, 31));
        pushButton_submenu = new QPushButton(Dialog);
        pushButton_submenu->setObjectName(QString::fromUtf8("pushButton_submenu"));
        pushButton_submenu->setGeometry(QRect(20, 140, 361, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_item->setText(QApplication::translate("Dialog", "Displaying a list of available camp equipment item", nullptr));
        pushButton_loan->setText(QApplication::translate("Dialog", "Displaying user\342\200\231s loan record ", nullptr));
        pushButton_return->setText(QApplication::translate("Dialog", "Returning camp equipment ", nullptr));
        pushButton_exit->setText(QApplication::translate("Dialog", "Exit", nullptr));
        pushButton_submenu->setText(QApplication::translate("Dialog", "Providing a sub-menu for equipment loan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
