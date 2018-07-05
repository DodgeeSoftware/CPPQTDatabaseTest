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
#include "GeneratedFiles/ui_RemoveCustomerWindow.h"

// My Includes
#include "DatabaseWrapper.h"
#include "StringUtils.h"
#include "WideStringUtils.h"

/* The RemoveCustomerWindow class is the container for
	our remove customer window. It inherits 
	from QMainWindow */
class RemoveCustomerWindow : public QMainWindow
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
		RemoveCustomerWindow(QWidget *parent = Q_NULLPTR);
		// Destructor
		virtual ~RemoveCustomerWindow();

	protected:
		// Methods and Members

	// ***********
	// * GENERAL *
	// ***********
	public:
		// Clear
		void clear();

	// ***********
	// * WINDOWS *
	// ***********
	public:
		// Members and Methods

	protected:
		// Members and Methods

	protected:
		Ui::RemoveCustomerWindowClass* pRemoveCustomerWindowClass;

	// *********
	// * SLOTS *
	// *********
	public slots:
		// Cancel Button Released Slot
		void cancelButtonReleasedSlot();
		// Remove Button Released Slot
		void removeButtonReleasedSlot();

	protected:
		// Members and Methods
};

