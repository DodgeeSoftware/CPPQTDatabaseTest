#include "RemoveCustomerWindow.h"

RemoveCustomerWindow::RemoveCustomerWindow(QWidget *parent) : QMainWindow(parent)
{
	// Create a new Interface for the GUI
	this->pRemoveCustomerWindowClass = new Ui::RemoveCustomerWindowClass();
	// Setup the GUi (attach the componets to this window)
	this->pRemoveCustomerWindowClass->setupUi(this);

	// Connect Signals and Slots for the GUI
	RemoveCustomerWindow::connect(this->pRemoveCustomerWindowClass->CancelButton, SIGNAL(released()), SLOT(cancelButtonReleasedSlot()));
	RemoveCustomerWindow::connect(this->pRemoveCustomerWindowClass->RemoveButton, SIGNAL(released()), SLOT(removeButtonReleasedSlot()));
}


RemoveCustomerWindow::~RemoveCustomerWindow()
{

}

void RemoveCustomerWindow::clear()
{
	// Clear IDTextBox
	this->pRemoveCustomerWindowClass->IDTextBox->setText("");
}

void RemoveCustomerWindow::cancelButtonReleasedSlot()
{
	// Clear the Window
	this->clear();
	// Close the Window
	this->close();
}

void RemoveCustomerWindow::removeButtonReleasedSlot()
{
	// Grab the DatabaseWrapper Instance
	DatabaseWrapper* pDatabaseWrapper = DatabaseWrapper::getInstance();
	
	std::wstring customerIDWString = Utils::toWideString(this->pRemoveCustomerWindowClass->IDTextBox->text());
	long customerID = Utils::toLong(customerIDWString);

	// Remove the Customer by ID
	if (pDatabaseWrapper->removeCustomer(customerID) == true)
	{
		// Show a Modal MessageBox
		QMessageBox aboutMessageBox;
		aboutMessageBox.setWindowTitle("Notice");
		aboutMessageBox.setText("Records Successfully Removed");
		aboutMessageBox.exec();
	}
	else
	{
		// Show a Modal MessageBox
		QMessageBox aboutMessageBox;
		aboutMessageBox.setWindowTitle("Notice");
		aboutMessageBox.setText("Failed to Remove Record");
		aboutMessageBox.exec();	
	}
	// Clear the Window
	this->clear();
	// Close the Window
	this->close();
}