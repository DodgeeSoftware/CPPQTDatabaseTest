#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	// Create a new Interface for the GUI
	this->pMainWindowClass = new Ui::MainWindowClass();
	// Setup the GUi (attach the componets to this window)
	this->pMainWindowClass->setupUi(this);

	// Connect Signals and Slots for the GUI
	MainWindow::connect(this->pMainWindowClass->AddCustomerButton, SIGNAL(released()), SLOT(addCustomerButtonReleasedSlot()));
	MainWindow::connect(this->pMainWindowClass->FindCustomerButton, SIGNAL(released()), SLOT(findCustomerButtonReleasedSlot()));
	MainWindow::connect(this->pMainWindowClass->RemoveCustomerButton, SIGNAL(released()), SLOT(removeCustomerButtonReleasedSlot()));
	MainWindow::connect(this->pMainWindowClass->ShowCustomersButton, SIGNAL(released()), SLOT(showCustomersButtonReleasedSlot()));
	MainWindow::connect(this->pMainWindowClass->QuitButton, SIGNAL(released()), SLOT(quitButtonReleasedSlot()));
	MainWindow::connect(this->pMainWindowClass->AboutButton, SIGNAL(released()), SLOT(aboutButtonReleasedSlot()));
}

MainWindow::~MainWindow()
{
	delete this->pMainWindowClass;
	this->pMainWindowClass = 0;
}

void MainWindow::addCustomerButtonReleasedSlot()
{
	this->addNewCustomerWindow.show();
}

void MainWindow::findCustomerButtonReleasedSlot()
{
	this->findCustomerWindow.show();
}

void MainWindow::removeCustomerButtonReleasedSlot()
{
	this->removeCustomerWindow.show();
}

void MainWindow::showCustomersButtonReleasedSlot()
{
	// Refresh the Show Customers Window
	this->showCustomersWindow.refresh();
	this->showCustomersWindow.show();
}

void MainWindow::quitButtonReleasedSlot()
{
	// Quit the main window
	this->close();
}

void MainWindow::aboutButtonReleasedSlot()
{
	// Show a Modal MessageBox
	QMessageBox aboutMessageBox;
	aboutMessageBox.setWindowTitle("About");
	aboutMessageBox.setText("(c) Dodgee Software 2018");
	aboutMessageBox.exec();
}