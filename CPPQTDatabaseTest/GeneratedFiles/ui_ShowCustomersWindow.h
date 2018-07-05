/********************************************************************************
** Form generated from reading UI file 'ShowCustomersWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCUSTOMERSWINDOW_H
#define UI_SHOWCUSTOMERSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowCustomersWindowClass
{
public:
    QWidget *centralwidget;
    QTableWidget *CustomersTableWidget;

    void setupUi(QMainWindow *ShowCustomersWindowClass)
    {
        if (ShowCustomersWindowClass->objectName().isEmpty())
            ShowCustomersWindowClass->setObjectName(QStringLiteral("ShowCustomersWindowClass"));
        ShowCustomersWindowClass->setWindowModality(Qt::ApplicationModal);
        ShowCustomersWindowClass->resize(520, 398);
        ShowCustomersWindowClass->setMaximumSize(QSize(520, 398));
        centralwidget = new QWidget(ShowCustomersWindowClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        CustomersTableWidget = new QTableWidget(centralwidget);
        CustomersTableWidget->setObjectName(QStringLiteral("CustomersTableWidget"));
        CustomersTableWidget->setGeometry(QRect(0, 0, 521, 401));
        CustomersTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        CustomersTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ShowCustomersWindowClass->setCentralWidget(centralwidget);

        retranslateUi(ShowCustomersWindowClass);

        QMetaObject::connectSlotsByName(ShowCustomersWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ShowCustomersWindowClass)
    {
        ShowCustomersWindowClass->setWindowTitle(QApplication::translate("ShowCustomersWindowClass", "Customers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowCustomersWindowClass: public Ui_ShowCustomersWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCUSTOMERSWINDOW_H
