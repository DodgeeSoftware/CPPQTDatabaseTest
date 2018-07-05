/* SimpleDatabase Application Using Qt, MySQL and C++ 
 (c) Dodgee Software 2018
	Youtube: https://youtube.com/dodgeesoftware */

#pragma once

// QT INCLUDES
#include <QtCore/QDebug.h>
#include <QtWidgets/QApplication.h>
#include <QtWidgets/QPushbutton.h>
#include <QtWidgets/QMessageBox>

// JDBC Includes
#include <jdbc/mysql_connection.h>
#include <jdbc/mysql_driver.h>
#include <jdbc/mysql_error.h>
#include <jdbc/cppconn/build_config.h>
#include <jdbc/cppconn/config.h>
#include <jdbc/cppconn/connection.h>
#include <jdbc/cppconn/datatype.h>
#include <jdbc/cppconn/driver.h>
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/metadata.h>
#include <jdbc/cppconn/parameter_metadata.h>
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>
#include <jdbc/cppconn/resultset_metadata.h>
#include <jdbc/cppconn/sqlstring.h>
#include <jdbc/cppconn/statement.h>
#include <jdbc/cppconn/variant.h>
#include <jdbc/cppconn/version_info.h>
#include <jdbc/cppconn/warning.h>

// My Includes
#include "DatabaseWrapper.h"
#include "MainWindow.h"

/* The Application Class is the Base
	of our application*/
class Application :	public QApplication
{
	// ******************************
	// * CONSTRUCTORS / DESTRUCTORS *
	// ******************************
	public:
		// Constructor
		Application(int argc, char *argv[]);
		// Destructor
		virtual ~Application();
	
	protected:
		// Methods and Members

	// ***************
	// * MAIN WINDOW *
	// ***************
	public:
		// Methods and Members
	
	protected:
		// Main Window
		MainWindow mainWindow;
};

