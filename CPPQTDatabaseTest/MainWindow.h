/* SimpleDatabase Application Using Qt, MySQL and C++ 
 (c) Dodgee Software 2018
	Youtube: https://youtube.com/dodgeesoftware */

#pragma once

// C++ Includes
#include <iostream>

// Qt Includes
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessagebox.h>

// Window Includes
#include "AddNewCustomerWindow.h"
#include "CustomerWindow.h"
#include "FindCustomerWindow.h"
#include "RemoveCustomerWindow.h"
#include "ShowCustomersWindow.h"
#include "GeneratedFiles/ui_MainWindow.h"

/* The Main Window class is the container for
	our main applicaiton window. It inherits 
	from QMainWindow */
class MainWindow : public QMainWindow
{
	/* BoilerPlate Macro required 
		because the base Object implements
		a QObject*/
	Q_OBJECT

	// *****************************
	// * CONSTRUCTORS / DESTRUCTOR *
	// *****************************
	public:
		// Constructor
		MainWindow(QWidget *parent = Q_NULLPTR);
		// Destructor
		virtual ~MainWindow();

	protected:
		// Members and Methods

	// ***********
	// * WINDOWS *
	// ***********
	public:
		// Members and Methods

	protected:
		// AddNewCustomerWindow
		AddNewCustomerWindow addNewCustomerWindow;		
		// CustomerWindow
		CustomerWindow customerWindow;		
		// FindCustomerWindow
		FindCustomerWindow findCustomerWindow;
		// RemoveCustomerWindow
		RemoveCustomerWindow removeCustomerWindow;
		// ShowCustomersWindow
		ShowCustomersWindow showCustomersWindow;

	protected:
		Ui::MainWindowClass* pMainWindowClass;

	// *********
	// * SLOTS *
	// *********
	public slots:
		// Add Customer Button Released Slot
		void addCustomerButtonReleasedSlot();
		// Find Customer Button Released Slot
		void findCustomerButtonReleasedSlot();
		// Remove Customer Button Release Slot
		void removeCustomerButtonReleasedSlot();
		// Show Customer Button Release Slot
		void showCustomersButtonReleasedSlot();
		// Quit Button Release Slot
		void quitButtonReleasedSlot();
		// About Button Released Slot
		void aboutButtonReleasedSlot();

	protected:
		// Members and Methods
};
