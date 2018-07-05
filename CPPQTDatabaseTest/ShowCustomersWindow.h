/* SimpleDatabase Application Using Qt, MySQL and C++ 
 (c) Dodgee Software 2018
	Youtube: https://youtube.com/dodgeesoftware */

#pragma once

// C++ Includes
#include <iostream>
#include <sstream>

// Qt Includes
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessagebox.h>
#include <QtWidgets/QTablewidget.h>

// Window Includes
#include "GeneratedFiles/ui_ShowCustomersWindow.h"

// My Includes
#include "DatabaseWrapper.h"

/* The ShowCustomersWindow class is the container for
	our show customer window. It inherits 
	from QMainWindow */
class ShowCustomersWindow : public QMainWindow
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
		ShowCustomersWindow(QWidget *parent = Q_NULLPTR);
		// Destructor
		virtual ~ShowCustomersWindow();

	protected:
		// Methods and Members

	// ***********
	// * GENERAL *
	// ***********
	public:
		// Refresh	
		void refresh();
		// clear
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
		Ui::ShowCustomersWindowClass* pShowCustomersWindowClass;

	// *********
	// * SLOTS *
	// *********
	public slots:
		//// Add Customer Button Released Slot
		//void addCustomerButtonReleasedSlot();

	protected:
		// Members and Methods
};

