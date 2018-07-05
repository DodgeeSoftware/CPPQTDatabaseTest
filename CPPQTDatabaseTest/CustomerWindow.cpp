#include "CustomerWindow.h"

CustomerWindow::CustomerWindow(QWidget *parent) : QMainWindow(parent)
{
	// Create a new Interface for the GUI
	this->pCustomerWindowClass = new Ui::CustomerWindowClass();
	// Setup the GUi (attach the componets to this window)
	this->pCustomerWindowClass->setupUi(this);
	
	// Connect Signals and Slots for the GUI
	CustomerWindow::connect(this->pCustomerWindowClass->DoneButton, SIGNAL(released()), SLOT(doneButtonReleasedSlot()));
}


CustomerWindow::~CustomerWindow()
{

}

void CustomerWindow::clear()
{
	// Clear the Customer
	this->customer = Customer();
	// Title TextBox
	this->pCustomerWindowClass->IDTextBox->setText("");
	this->pCustomerWindowClass->TitleTextBox->setText("");
	this->pCustomerWindowClass->GivenNamesTextBox->setText("");
	this->pCustomerWindowClass->LastNameTextBox->setText("");
}

Customer CustomerWindow::getCustomer()
{
	return this->customer;
}

void CustomerWindow::setCustomer(Customer customer)
{
	// Set the customer
	this->customer = customer;
	// Grab the QStrings from the Customer
	QString customerIDQString = Utils::toQString(this->customer.getCustomerID());
	QString customerTitleQString = Utils::toQString(this->customer.getTitle());
	QString customerGivenNamesQString = Utils::toQString(this->customer.getGivenNames());
	QString customerLastNameQString = Utils::toQString(this->customer.getLastName());
	// Setup the Interface to reflect the customer information
	this->pCustomerWindowClass->IDTextBox->setText(customerIDQString);
	this->pCustomerWindowClass->TitleTextBox->setText(customerTitleQString);
	this->pCustomerWindowClass->GivenNamesTextBox->setText(customerGivenNamesQString);
	this->pCustomerWindowClass->LastNameTextBox->setText(customerLastNameQString);
}

void CustomerWindow::doneButtonReleasedSlot()
{
	// Clear the Form
	this->clear();
	// Close the window
	this->close();
}
