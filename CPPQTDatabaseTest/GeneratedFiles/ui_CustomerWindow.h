/********************************************************************************
** Form generated from reading UI file 'CustomerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDOW_H
#define UI_CUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindowClass
{
public:
    QWidget *centralwidget;
    QPushButton *DoneButton;
    QLabel *TitleLabel;
    QLabel *IDLabel;
    QLabel *GivenNamesLabel;
    QLabel *LastNameLabel;
    QLineEdit *TitleTextBox;
    QLineEdit *IDTextBox;
    QLineEdit *GivenNamesTextBox;
    QLineEdit *LastNameTextBox;

    void setupUi(QMainWindow *CustomerWindowClass)
    {
        if (CustomerWindowClass->objectName().isEmpty())
            CustomerWindowClass->setObjectName(QStringLiteral("CustomerWindowClass"));
        CustomerWindowClass->setWindowModality(Qt::ApplicationModal);
        CustomerWindowClass->resize(217, 160);
        CustomerWindowClass->setMinimumSize(QSize(217, 160));
        CustomerWindowClass->setMaximumSize(QSize(217, 160));
        centralwidget = new QWidget(CustomerWindowClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        DoneButton = new QPushButton(centralwidget);
        DoneButton->setObjectName(QStringLiteral("DoneButton"));
        DoneButton->setGeometry(QRect(10, 130, 191, 23));
        TitleLabel = new QLabel(centralwidget);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(10, 40, 47, 13));
        IDLabel = new QLabel(centralwidget);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));
        IDLabel->setGeometry(QRect(10, 10, 47, 13));
        GivenNamesLabel = new QLabel(centralwidget);
        GivenNamesLabel->setObjectName(QStringLiteral("GivenNamesLabel"));
        GivenNamesLabel->setGeometry(QRect(10, 70, 61, 16));
        LastNameLabel = new QLabel(centralwidget);
        LastNameLabel->setObjectName(QStringLiteral("LastNameLabel"));
        LastNameLabel->setGeometry(QRect(10, 100, 51, 16));
        TitleTextBox = new QLineEdit(centralwidget);
        TitleTextBox->setObjectName(QStringLiteral("TitleTextBox"));
        TitleTextBox->setGeometry(QRect(90, 40, 113, 20));
        TitleTextBox->setReadOnly(true);
        IDTextBox = new QLineEdit(centralwidget);
        IDTextBox->setObjectName(QStringLiteral("IDTextBox"));
        IDTextBox->setGeometry(QRect(90, 10, 113, 20));
        IDTextBox->setReadOnly(true);
        GivenNamesTextBox = new QLineEdit(centralwidget);
        GivenNamesTextBox->setObjectName(QStringLiteral("GivenNamesTextBox"));
        GivenNamesTextBox->setGeometry(QRect(90, 70, 113, 20));
        LastNameTextBox = new QLineEdit(centralwidget);
        LastNameTextBox->setObjectName(QStringLiteral("LastNameTextBox"));
        LastNameTextBox->setGeometry(QRect(90, 100, 113, 20));
        LastNameTextBox->setReadOnly(true);
        CustomerWindowClass->setCentralWidget(centralwidget);

        retranslateUi(CustomerWindowClass);

        QMetaObject::connectSlotsByName(CustomerWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *CustomerWindowClass)
    {
        CustomerWindowClass->setWindowTitle(QApplication::translate("CustomerWindowClass", "Customer", nullptr));
        DoneButton->setText(QApplication::translate("CustomerWindowClass", "Done", nullptr));
        TitleLabel->setText(QApplication::translate("CustomerWindowClass", "Title", nullptr));
        IDLabel->setText(QApplication::translate("CustomerWindowClass", "ID", nullptr));
        GivenNamesLabel->setText(QApplication::translate("CustomerWindowClass", "Given Names", nullptr));
        LastNameLabel->setText(QApplication::translate("CustomerWindowClass", "Last Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindowClass: public Ui_CustomerWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
