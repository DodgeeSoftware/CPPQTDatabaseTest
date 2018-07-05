/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *FindCustomerButton;
    QPushButton *RemoveCustomerButton;
    QPushButton *ShowCustomersButton;
    QPushButton *AddCustomerButton;
    QPushButton *AboutButton;
    QPushButton *QuitButton;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->setMinimumSize(QSize(312, 77));
        MainWindowClass->setMaximumSize(QSize(312, 77));
        centralwidget = new QWidget(MainWindowClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 311, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        FindCustomerButton = new QPushButton(gridLayoutWidget);
        FindCustomerButton->setObjectName(QStringLiteral("FindCustomerButton"));

        gridLayout->addWidget(FindCustomerButton, 0, 1, 1, 1);

        RemoveCustomerButton = new QPushButton(gridLayoutWidget);
        RemoveCustomerButton->setObjectName(QStringLiteral("RemoveCustomerButton"));

        gridLayout->addWidget(RemoveCustomerButton, 1, 0, 1, 1);

        ShowCustomersButton = new QPushButton(gridLayoutWidget);
        ShowCustomersButton->setObjectName(QStringLiteral("ShowCustomersButton"));

        gridLayout->addWidget(ShowCustomersButton, 1, 1, 1, 1);

        AddCustomerButton = new QPushButton(gridLayoutWidget);
        AddCustomerButton->setObjectName(QStringLiteral("AddCustomerButton"));

        gridLayout->addWidget(AddCustomerButton, 0, 0, 1, 1);

        AboutButton = new QPushButton(gridLayoutWidget);
        AboutButton->setObjectName(QStringLiteral("AboutButton"));

        gridLayout->addWidget(AboutButton, 2, 1, 1, 1);

        QuitButton = new QPushButton(gridLayoutWidget);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));

        gridLayout->addWidget(QuitButton, 2, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralwidget);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Application Main Window", nullptr));
#ifndef QT_NO_TOOLTIP
        FindCustomerButton->setToolTip(QApplication::translate("MainWindowClass", "Do a search for Customers", nullptr));
#endif // QT_NO_TOOLTIP
        FindCustomerButton->setText(QApplication::translate("MainWindowClass", "Find Customer", nullptr));
        RemoveCustomerButton->setText(QApplication::translate("MainWindowClass", "Remove Customer", nullptr));
        ShowCustomersButton->setText(QApplication::translate("MainWindowClass", "ShowCustomers", nullptr));
#ifndef QT_NO_TOOLTIP
        AddCustomerButton->setToolTip(QApplication::translate("MainWindowClass", "Add a customer to the Database", nullptr));
#endif // QT_NO_TOOLTIP
        AddCustomerButton->setText(QApplication::translate("MainWindowClass", "Add Customer", nullptr));
        AboutButton->setText(QApplication::translate("MainWindowClass", "About", nullptr));
        QuitButton->setText(QApplication::translate("MainWindowClass", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
