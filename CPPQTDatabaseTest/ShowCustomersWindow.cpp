#include "ShowCustomersWindow.h"

ShowCustomersWindow::ShowCustomersWindow(QWidget *parent) : QMainWindow(parent)
{
	// Create a new Interface for the GUI
	this->pShowCustomersWindowClass = new Ui::ShowCustomersWindowClass();
	// Setup the GUi (attach the componets to this window)
	this->pShowCustomersWindowClass->setupUi(this);
}

ShowCustomersWindow::~ShowCustomersWindow()
{

}

void ShowCustomersWindow::refresh()
{
	this->clear();
	// Grab the list of Customers
	std::vector<Customer> customers = DatabaseWrapper::getInstance()->getCustomers();
	// Set the size of the Table
	this->pShowCustomersWindowClass->CustomersTableWidget->setColumnCount(4);
	this->pShowCustomersWindowClass->CustomersTableWidget->setRowCount(customers.size());	
	// Stretch the horizontal header
	this->pShowCustomersWindowClass->CustomersTableWidget->horizontalHeader()->resizeSections(QHeaderView::ResizeMode::Stretch);
	// Go through the list of customers one at at time
	for (long i = 0; i < customers.size(); i++)
	{
		// Grab the Customer
		Customer customer = customers.at(i);
		// Grab Customer Properties
		std::stringstream ss;
		ss << customer.getCustomerID();
		std::string id = ss.str();
		std::string title = customer.getTitle();
		std::string givenNames = customer.getGivenNames();
		std::string lastName = customer.getLastName();
		// Push the Properties into the Table
		this->pShowCustomersWindowClass->CustomersTableWidget->setItem(i, 0, new QTableWidgetItem(id.c_str()));
		this->pShowCustomersWindowClass->CustomersTableWidget->setItem(i, 1, new QTableWidgetItem(title.c_str()));
		this->pShowCustomersWindowClass->CustomersTableWidget->setItem(i, 2, new QTableWidgetItem(givenNames.c_str()));
		this->pShowCustomersWindowClass->CustomersTableWidget->setItem(i, 3, new QTableWidgetItem(lastName.c_str()));
	}
}

void ShowCustomersWindow::clear()
{
	// Clear The Table
	this->pShowCustomersWindowClass->CustomersTableWidget->clearSpans();
}