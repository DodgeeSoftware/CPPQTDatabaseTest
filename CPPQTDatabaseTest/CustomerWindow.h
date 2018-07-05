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
#include "GeneratedFiles/ui_CustomerWindow.h"

// My Includes
#include "DatabaseWrapper.h"
#include "StringUtils.h"
#include "WideStringUtils.h"

/* The CustomerWindow class is the container for
	our customer window. It inherits 
	from QMainWindow */
class CustomerWindow : public QMainWindow
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
		CustomerWindow(QWidget *parent = Q_NULLPTR);
		// Destructor
		virtual ~CustomerWindow();

	protected:
		// Members and Methods

	// ***********
	// * GENERAL *
	// ***********
	public:
		// Clear
		void clear();

	protected:
		// Members and Methods

	// ************
	// * CUSTOMER *
	// ************
	public:
		// Get Customer	
		Customer getCustomer();
		// Set Customer
		void setCustomer(Customer customer);

	protected:
		Customer customer;

	// ***********
	// * WINDOWS *
	// ***********
	public:
		// Members and Methods

	protected:
		// Members and Methods

	protected:
		Ui::CustomerWindowClass* pCustomerWindowClass;

	// *********
	// * SLOTS *
	// *********
	public slots:
		// Done Button Released Slot
		void doneButtonReleasedSlot();

	protected:
		// Members and Methods
};

