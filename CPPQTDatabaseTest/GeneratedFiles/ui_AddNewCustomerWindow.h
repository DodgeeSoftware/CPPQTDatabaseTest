/********************************************************************************
** Form generated from reading UI file 'AddNewCustomerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWCUSTOMERWINDOW_H
#define UI_ADDNEWCUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewCustomerWindowClass
{
public:
    QWidget *centralwidget;
    QPushButton *OkButton;
    QPushButton *CancelButton;
    QLabel *TitleLabel;
    QLabel *GivenNamesLabel;
    QLabel *LastNameLabel;
    QLineEdit *GivenNamesTextBox;
    QLineEdit *LastNameTextBox;
    QComboBox *TitleComboBox;

    void setupUi(QMainWindow *AddNewCustomerWindowClass)
    {
        if (AddNewCustomerWindowClass->objectName().isEmpty())
            AddNewCustomerWindowClass->setObjectName(QStringLiteral("AddNewCustomerWindowClass"));
        AddNewCustomerWindowClass->setWindowModality(Qt::ApplicationModal);
        AddNewCustomerWindowClass->resize(212, 135);
        AddNewCustomerWindowClass->setMaximumSize(QSize(212, 135));
        centralwidget = new QWidget(AddNewCustomerWindowClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        OkButton = new QPushButton(centralwidget);
        OkButton->setObjectName(QStringLiteral("OkButton"));
        OkButton->setGeometry(QRect(0, 110, 101, 23));
        CancelButton = new QPushButton(centralwidget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(110, 110, 101, 23));
        TitleLabel = new QLabel(centralwidget);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(10, 20, 47, 13));
        GivenNamesLabel = new QLabel(centralwidget);
        GivenNamesLabel->setObjectName(QStringLiteral("GivenNamesLabel"));
        GivenNamesLabel->setGeometry(QRect(10, 50, 61, 16));
        LastNameLabel = new QLabel(centralwidget);
        LastNameLabel->setObjectName(QStringLiteral("LastNameLabel"));
        LastNameLabel->setGeometry(QRect(10, 80, 47, 13));
        GivenNamesTextBox = new QLineEdit(centralwidget);
        GivenNamesTextBox->setObjectName(QStringLiteral("GivenNamesTextBox"));
        GivenNamesTextBox->setGeometry(QRect(80, 50, 131, 20));
        LastNameTextBox = new QLineEdit(centralwidget);
        LastNameTextBox->setObjectName(QStringLiteral("LastNameTextBox"));
        LastNameTextBox->setGeometry(QRect(80, 80, 131, 20));
        TitleComboBox = new QComboBox(centralwidget);
        TitleComboBox->setObjectName(QStringLiteral("TitleComboBox"));
        TitleComboBox->setGeometry(QRect(80, 20, 131, 22));
        AddNewCustomerWindowClass->setCentralWidget(centralwidget);

        retranslateUi(AddNewCustomerWindowClass);

        QMetaObject::connectSlotsByName(AddNewCustomerWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *AddNewCustomerWindowClass)
    {
        AddNewCustomerWindowClass->setWindowTitle(QApplication::translate("AddNewCustomerWindowClass", "Add Customer", nullptr));
        OkButton->setText(QApplication::translate("AddNewCustomerWindowClass", "Ok", nullptr));
        CancelButton->setText(QApplication::translate("AddNewCustomerWindowClass", "Cancel", nullptr));
        TitleLabel->setText(QApplication::translate("AddNewCustomerWindowClass", "Title", nullptr));
        GivenNamesLabel->setText(QApplication::translate("AddNewCustomerWindowClass", "Given Names", nullptr));
        LastNameLabel->setText(QApplication::translate("AddNewCustomerWindowClass", "LastName", nullptr));
#ifndef QT_NO_STATUSTIP
        TitleComboBox->setStatusTip(QApplication::translate("AddNewCustomerWindowClass", "Customer's title Mr, Mrs, Ms, Doc", nullptr));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class AddNewCustomerWindowClass: public Ui_AddNewCustomerWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWCUSTOMERWINDOW_H
