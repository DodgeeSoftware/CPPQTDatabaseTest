#include "FindCustomerWindow.h"

FindCustomerWindow::FindCustomerWindow(QWidget *parent) : QMainWindow(parent)
{
	// Create a new Interface for the GUI
	this->pFindCustomerWindowClass = new Ui::FindCustomerWindowClass();
	// Setup the GUi (attach the componets to this window)
	this->pFindCustomerWindowClass->setupUi(this);

	

	// Connect Signals and Slots for the GUI
	FindCustomerWindow::connect(this->pFindCustomerWindowClass->CancelButton, SIGNAL(released()), SLOT(cancelButtonReleasedSlot()));
	FindCustomerWindow::connect(this->pFindCustomerWindowClass->SearchButton, SIGNAL(released()), SLOT(searchButtonReleasedSlot()));
}


FindCustomerWindow::~FindCustomerWindow()
{

}

void FindCustomerWindow::clear()
{
	// Clear ID TextBox
	this->pFindCustomerWindowClass->IDTextBox->setText("");
}

void FindCustomerWindow::cancelButtonReleasedSlot()
{
	// Clear the Form
	this->clear();
	// Close the Window
	this->close();
}

void FindCustomerWindow::searchButtonReleasedSlot()
{
	// Get the DatabaseWrapper Instance
	DatabaseWrapper* pDatabaseWrapper = DatabaseWrapper::getInstance();
	// Grab the CustomerID from the Form
	std::wstring customerIDWString = Utils::toWideString(this->pFindCustomerWindowClass->IDTextBox->text());
	long customerID = Utils::toLong(customerIDWString);	
	// If there is a customer show the CustomerWindow otherwise popup with an error
	if (pDatabaseWrapper->isCustomer(customerID) == true)
	{
		// Clear the Form
		this->clear();
		// Close the Window
		this->close();
		Customer customer = pDatabaseWrapper->getCustomer(customerID);
		// Set the form's customer
		this->customerWindow.setCustomer(customer);
		// show the Cutomer Window
		this->customerWindow.show();
	}
	else
	{
		// Show a Modal MessageBox
		QMessageBox aboutMessageBox;
		aboutMessageBox.setWindowTitle("Notice");
		aboutMessageBox.setText("Failed Find a Record");
		aboutMessageBox.exec();	
	}
}