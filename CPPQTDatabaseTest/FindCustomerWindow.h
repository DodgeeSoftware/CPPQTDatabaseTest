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
#include "GeneratedFiles/ui_FindCustomerWindow.h"
#include "CustomerWindow.h"

// My Includes
#include "DatabaseWrapper.h"
#include "StringUtils.h"
#include "WideStringUtils.h"

/* The FindCustomerWindow class is the container for
	our find customer window. It inherits 
	from QMainWindow */
class FindCustomerWindow : public QMainWindow
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
		FindCustomerWindow(QWidget *parent = Q_NULLPTR);
		// Destructor
		virtual ~FindCustomerWindow();

	protected:
		// Methods and Members

	// ***********
	// * GENERAL *
	// ***********
	public:
		// Clear the Interface
		void clear();

	protected:
		// Methods and Members

	// ***********
	// * WINDOWS *
	// ***********
	public:
		// Members and Methods

	protected:
		// CustomerWindow
		CustomerWindow customerWindow;

	protected:
		Ui::FindCustomerWindowClass* pFindCustomerWindowClass;

	// *********
	// * SLOTS *
	// *********
	public slots:
		// Cancel Button Released Slot
		void cancelButtonReleasedSlot();
		// Search Button Released Slot
		void searchButtonReleasedSlot();

	protected:
		// Members and Methods
};

