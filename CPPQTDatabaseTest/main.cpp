/* SimpleDatabase Application Using Qt, MySQL and C++ 
 (c) Dodgee Software 2018
	Youtube: https://youtube.com/dodgeesoftware */

// C/C++ Includes
#include <iostream>

// QT Includes
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
#include "Application.h"
#include "MainWindow.h"

// Program Entry Point
int main(int argc, char *argv[])
{
	// Create the Database Instance
	DatabaseWrapper* pDatabaseWrapper = DatabaseWrapper::getInstance();
	// Try and Connect tot he Database
	if (pDatabaseWrapper->connect("tcp://127.0.0.1:3306/dbTest", "neipo", "neipo") == false)
		return EXIT_FAILURE;
	// Create our Application
	Application application(argc, argv);
	// Run our Application
	int result = application.exec();
	// Disconnect from the Database
	pDatabaseWrapper->disconnect();
	// Return result
	return result;
}