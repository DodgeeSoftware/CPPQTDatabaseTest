/* SimpleDatabase Application Using Qt, MySQL and C++ 
 (c) Dodgee Software 2018
	Youtube: https://youtube.com/dodgeesoftware */

#pragma once

// C/C++ Includes
#include <iostream>
#include <sstream>
#include <vector>

// JDBC SQL Includes
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
#include "Customer.h"

/* The Database Wrapper class provides an interface
	which wraps up SQL queries on the database used
	by this application. Based on the singleton 
	design pattern */
class DatabaseWrapper
{
	// *****************************
	// * CONSTRUCTORS / DESTRUCTOR *
	// *****************************
	public:
		// Destructor
		virtual ~DatabaseWrapper();

	protected:
		// Constructor
		DatabaseWrapper();
		// Copy Constructor
		DatabaseWrapper(DatabaseWrapper& other);

	// *************
	// * SINGLETON *
	// *************
	public:
		// Get the Instance of the Database Wrapper Singleton
		static DatabaseWrapper* getInstance();

	protected:
		// Instance
		static DatabaseWrapper* pInstance;

	// ***********************
	// * DATABASE CONNECTION *
	// ***********************
	public:
		// Connect to the Database
		bool connect(std::string url, std::string username, std::string password);
		// Disconnect from the Database
		void disconnect();

	protected:
		// Database Driver
		sql::Driver* pDriver;
		// Database Connection
		sql::Connection* pConnection;
		// Connected Flag
		bool connectedFlag;

	// **********************
	// * DATABASE FUNCTIONS *
	// **********************
	public:
		// Add Customer
		bool addCustomer(std::string title, std::string givenNames, std::string lastName);
		// Is Customer
		bool isCustomer(long customerID);
		// Get's a Customer
		Customer getCustomer(long customerID);
		// Remove Customer
		bool removeCustomer(long customerID);
		// Grab a list of all the Customers
		std::vector<Customer> getCustomers();
};

