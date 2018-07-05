/* SimpleDatabase Application Using Qt, MySQL and C++ 
 (c) Dodgee Software 2018
	Youtube: https://youtube.com/dodgeesoftware */

#pragma once

// C++ Includes
#include <iostream>

// Qt Includes
#include <QtCore/QDebug.h>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessagebox.h>

// Window Includes
#include "GeneratedFiles/ui_AddNewCustomerWindow.h"

// My Includes
#include "DatabaseWrapper.h"
#include "StringUtils.h"
#include "WideStringUtils.h"

/* The AddNewCustomerWindow class is the container for
	our add new customer window. It inherits 
	from QMainWindow */
class AddNewCustomerWindow : public QMainWindow
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
		AddNewCustomerWindow(QWidget *parent = Q_NULLPTR);
		// Destructor
		virtual  ~AddNewCustomerWindow();

	protected:
		// Members and Methods

	// ***********
	// * GENERAL *
	// ***********
	public:
		void clear();

	protected:
		// Members and Methods

	// ***********
	// * WINDOWS *
	// ***********
	public:
		// Members and Methods

	protected:
		// Members and Methods

	protected:
		Ui::AddNewCustomerWindowClass* pAddNewCustomerWindowClass;

	// *********
	// * SLOTS *
	// *********
	public slots:
		// Ok Button Released Slot
		void okButtonReleasedSlot();
		// Cancel Button Released Slot
		void cancelButtonReleasedSlot();

	protected:
		// Members and Methods
};

