#include "AddNewCustomerWindow.h"

AddNewCustomerWindow::AddNewCustomerWindow(QWidget *parent) : QMainWindow(parent)
{
	// Create a new Interface for the GUI
	this->pAddNewCustomerWindowClass = new Ui::AddNewCustomerWindowClass();
	// Setup the GUi (attach the componets to this window)
	this->pAddNewCustomerWindowClass->setupUi(this);

	this->pAddNewCustomerWindowClass->TitleComboBox->addItem("MR");
	this->pAddNewCustomerWindowClass->TitleComboBox->addItem("MRS");
	this->pAddNewCustomerWindowClass->TitleComboBox->addItem("MISS");
	this->pAddNewCustomerWindowClass->TitleComboBox->addItem("MS");
	this->pAddNewCustomerWindowClass->TitleComboBox->addItem("DOC");

	// Connect Signals and Slots for the GUI
	AddNewCustomerWindow::connect(this->pAddNewCustomerWindowClass->OkButton, SIGNAL(released()), SLOT(okButtonReleasedSlot()));
	AddNewCustomerWindow::connect(this->pAddNewCustomerWindowClass->CancelButton, SIGNAL(released()), SLOT(cancelButtonReleasedSlot()));
}


AddNewCustomerWindow::~AddNewCustomerWindow()
{

}

void AddNewCustomerWindow::clear()
{
	// Clear the Controls
	this->pAddNewCustomerWindowClass->TitleComboBox->setCurrentIndex(0);
	this->pAddNewCustomerWindowClass->GivenNamesTextBox->setText("");
	this->pAddNewCustomerWindowClass->LastNameTextBox->setText("");
}

void AddNewCustomerWindow::okButtonReleasedSlot()
{
	std::cout << "void AddNewCustomerWindow::okButtonReleasedSlot()" << std::endl;

	// Grab the Title from the TitleComboBox
	std::wstring titleW = Utils::toWideString(this->pAddNewCustomerWindowClass->TitleComboBox->currentText());
	std::string title = Utils::toString(titleW);
	
	// Grab the Given Names from the GivenNamesTextBox
	std::wstring givenNamesW = Utils::toWideString(this->pAddNewCustomerWindowClass->GivenNamesTextBox->text());
	std::string givenNames = Utils::toString(givenNamesW);

	// Grab the Last Name from the LastNameTextBox
	std::wstring lastNameW = Utils::toWideString(this->pAddNewCustomerWindowClass->LastNameTextBox->text());
	std::string lastName = Utils::toString(lastNameW);

	std::wcout << "wTitle: " << titleW << std::endl;
	std::wcout << "wGivenNames: " << givenNamesW << std::endl;
	std::wcout << "wLastName: " << lastNameW << std::endl;

	std::cout << "Title: " << title << std::endl;
	std::cout << "GivenNames: " << givenNames << std::endl;
	std::cout << "LastName: " << lastName << std::endl;

	/* NOTE: Qt doesn't convert to stdstring correctly cannot use this code 
		so I wrote my own routines. These exist in the StringUtils and WideStringUtils
		headers and cpp files. */
	////QString title = "MR";
	////std::string myString = title.toStdString();
	////std::cout << myString << std::endl;

	// Grab the Database Wrapper
	DatabaseWrapper* pDatabaseWrapper = DatabaseWrapper::getInstance(); 
	// Try and Add the customer
	if (pDatabaseWrapper->addCustomer(title, givenNames, lastName) == true)
	{
		// Show a Modal MessageBox
		QMessageBox aboutMessageBox;
		aboutMessageBox.setWindowTitle("Notice");
		aboutMessageBox.setText("Records Successfully Added");
		aboutMessageBox.exec();
	}
	else
	{
		// Show a Modal MessageBox
		QMessageBox aboutMessageBox;
		aboutMessageBox.setWindowTitle("Notice");
		aboutMessageBox.setText("Failed to add Record to the Database");
		aboutMessageBox.exec();
	}
	// Clear the Controls
	this->clear();
	// Close the main window
	this->close();
}

void AddNewCustomerWindow::cancelButtonReleasedSlot()
{
	// Clear the Controls
	this->clear();
	// Close the main window
	this->close();
}