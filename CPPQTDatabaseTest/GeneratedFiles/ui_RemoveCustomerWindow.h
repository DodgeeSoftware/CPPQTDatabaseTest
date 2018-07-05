/********************************************************************************
** Form generated from reading UI file 'RemoveCustomerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECUSTOMERWINDOW_H
#define UI_REMOVECUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveCustomerWindowClass
{
public:
    QWidget *centralwidget;
    QPushButton *CancelButton;
    QPushButton *RemoveButton;
    QLabel *IDLabel;
    QLineEdit *IDTextBox;

    void setupUi(QMainWindow *RemoveCustomerWindowClass)
    {
        if (RemoveCustomerWindowClass->objectName().isEmpty())
            RemoveCustomerWindowClass->setObjectName(QStringLiteral("RemoveCustomerWindowClass"));
        RemoveCustomerWindowClass->setWindowModality(Qt::ApplicationModal);
        RemoveCustomerWindowClass->resize(201, 69);
        centralwidget = new QWidget(RemoveCustomerWindowClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        CancelButton = new QPushButton(centralwidget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(-4, 40, 111, 23));
        RemoveButton = new QPushButton(centralwidget);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));
        RemoveButton->setGeometry(QRect(110, 40, 91, 23));
        IDLabel = new QLabel(centralwidget);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));
        IDLabel->setGeometry(QRect(10, 10, 21, 16));
        IDTextBox = new QLineEdit(centralwidget);
        IDTextBox->setObjectName(QStringLiteral("IDTextBox"));
        IDTextBox->setGeometry(QRect(40, 10, 151, 20));
        RemoveCustomerWindowClass->setCentralWidget(centralwidget);

        retranslateUi(RemoveCustomerWindowClass);

        QMetaObject::connectSlotsByName(RemoveCustomerWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *RemoveCustomerWindowClass)
    {
        RemoveCustomerWindowClass->setWindowTitle(QApplication::translate("RemoveCustomerWindowClass", "Remove Customer", nullptr));
        CancelButton->setText(QApplication::translate("RemoveCustomerWindowClass", "Cancel", nullptr));
        RemoveButton->setText(QApplication::translate("RemoveCustomerWindowClass", "Remove", nullptr));
        IDLabel->setText(QApplication::translate("RemoveCustomerWindowClass", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveCustomerWindowClass: public Ui_RemoveCustomerWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECUSTOMERWINDOW_H
