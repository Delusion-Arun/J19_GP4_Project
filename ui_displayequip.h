/********************************************************************************
** Form generated from reading UI file 'displayequip.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYEQUIP_H
#define UI_DISPLAYEQUIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayEquip
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DisplayEquip)
    {
        if (DisplayEquip->objectName().isEmpty())
            DisplayEquip->setObjectName(QString::fromUtf8("DisplayEquip"));
        DisplayEquip->resize(800, 600);
        menubar = new QMenuBar(DisplayEquip);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        DisplayEquip->setMenuBar(menubar);
        centralwidget = new QWidget(DisplayEquip);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DisplayEquip->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DisplayEquip);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DisplayEquip->setStatusBar(statusbar);

        retranslateUi(DisplayEquip);

        QMetaObject::connectSlotsByName(DisplayEquip);
    } // setupUi

    void retranslateUi(QMainWindow *DisplayEquip)
    {
        DisplayEquip->setWindowTitle(QApplication::translate("DisplayEquip", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayEquip: public Ui_DisplayEquip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYEQUIP_H
