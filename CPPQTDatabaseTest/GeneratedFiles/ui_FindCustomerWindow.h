/********************************************************************************
** Form generated from reading UI file 'FindCustomerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCUSTOMERWINDOW_H
#define UI_FINDCUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindCustomerWindowClass
{
public:
    QWidget *centralwidget;
    QPushButton *SearchButton;
    QPushButton *CancelButton;
    QLabel *IDLabel;
    QLineEdit *IDTextBox;

    void setupUi(QMainWindow *FindCustomerWindowClass)
    {
        if (FindCustomerWindowClass->objectName().isEmpty())
            FindCustomerWindowClass->setObjectName(QStringLiteral("FindCustomerWindowClass"));
        FindCustomerWindowClass->setWindowModality(Qt::ApplicationModal);
        FindCustomerWindowClass->resize(201, 73);
        centralwidget = new QWidget(FindCustomerWindowClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        SearchButton = new QPushButton(centralwidget);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setGeometry(QRect(104, 40, 91, 23));
        CancelButton = new QPushButton(centralwidget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(10, 40, 91, 23));
        IDLabel = new QLabel(centralwidget);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));
        IDLabel->setGeometry(QRect(10, 10, 47, 13));
        IDTextBox = new QLineEdit(centralwidget);
        IDTextBox->setObjectName(QStringLiteral("IDTextBox"));
        IDTextBox->setGeometry(QRect(32, 10, 161, 20));
        FindCustomerWindowClass->setCentralWidget(centralwidget);

        retranslateUi(FindCustomerWindowClass);

        QMetaObject::connectSlotsByName(FindCustomerWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *FindCustomerWindowClass)
    {
        FindCustomerWindowClass->setWindowTitle(QApplication::translate("FindCustomerWindowClass", "Find Customer", nullptr));
        SearchButton->setText(QApplication::translate("FindCustomerWindowClass", "Search", nullptr));
        CancelButton->setText(QApplication::translate("FindCustomerWindowClass", "Cancel", nullptr));
        IDLabel->setText(QApplication::translate("FindCustomerWindowClass", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindCustomerWindowClass: public Ui_FindCustomerWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCUSTOMERWINDOW_H
