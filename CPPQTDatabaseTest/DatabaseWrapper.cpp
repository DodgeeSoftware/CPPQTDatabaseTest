#include "DatabaseWrapper.h"

DatabaseWrapper::DatabaseWrapper()
{
	// Set up our member variables
	this->pConnection = 0;
	this->connectedFlag = false;
	this->pDriver = get_driver_instance();
}

DatabaseWrapper::DatabaseWrapper(DatabaseWrapper& other)
{
	// Proteced copy constructor not implemented
}

DatabaseWrapper::~DatabaseWrapper()
{
	// Delete our instance of the DatabaseWrapper
	if (this->pInstance != 0)
		delete this->pInstance;
	// Clear the pointer
	this->pInstance = 0;
}

DatabaseWrapper* DatabaseWrapper::pInstance = 0;

DatabaseWrapper* DatabaseWrapper::getInstance()
{
	// If there is no Instance create it
	if (DatabaseWrapper::pInstance == 0)
		DatabaseWrapper::pInstance = new DatabaseWrapper();
	// Return the Instance
	return DatabaseWrapper::pInstance;
}

bool DatabaseWrapper::connect(std::string url, std::string username, std::string password)
{
	try 
	{
		// Message to the Console
		std::cout << "Trying to connect to the Database" << std::endl;
		// Try and Open the Connection
		this->pConnection = this->pDriver->connect(url, username, password);
		// Message to the Console
		std::cout << "Database connection Successful" << std::endl;
		// Set our Connection flag
		this->connectedFlag = true;
	}
	catch(sql::SQLException e)
	{		      
		// Handle errors for JDBC
		std::cout << e.what() << std::endl;
		// Failure
		return false;
	}
	// Success
	return true;
}

void DatabaseWrapper::disconnect()
{
	try
	{
		// Message to the console
		std::cout << "Closing Database" << std::endl;
		// Try and Close the database connection
		this->pConnection->close();
		// Set connectedFlag to false
		this->connectedFlag = false;
	}
	catch(sql::SQLException e)
	{
		//Handle errors for JDBC
		std::cout << e.what() << std::endl;
	}
}

bool DatabaseWrapper::addCustomer(std::string title, std::string givenNames, std::string lastName)
{
	// Message to the Console
	std::cout << "bool DatabaseWrapper::addCustomer(" << title << ", " << givenNames << ", " << lastName << ")" << std::endl;

	// Validate Parameters
	if (title.length() == 0 || givenNames.length() == 0 || lastName.length() == 0) { return false; }
	// Validate Database Connection
	if (this->connectedFlag == false) { return false; }
	/// Try and Add the new Customer
	try {
		// Create a statement
		sql::Statement* pStatement = this->pConnection->createStatement();

		std::string insert = "INSERT INTO Customers(Title, GivenNames, LastName) ";
		insert.append("VALUES(\'" + title + "\', '" + givenNames + "\', '" + lastName + "\')");
		std::cout << insert << std::endl;
		// Run an Insert
		pStatement->executeUpdate(insert);
		std::cout << "INSERT Successful" << std::endl;
		// Success
		return true;
	}
	catch(sql::SQLException e)
	{
		// Handle errors for JDBC
		std::cout << e.what() << std::endl;
		// Failure
		return false;
	}
	// failed
	return false;
}

bool DatabaseWrapper::isCustomer(long customerID)
{
	// Validate CustomerID
	if (customerID < 0) { return false; }
	// Validate Database Connection
	if (this->connectedFlag == false) { return false; }
	// Try and Get the Customer
	try {

		// Create a statement
		sql::Statement* pStatement = this->pConnection->createStatement();
		std::string query = "SELECT CustomerID FROM Customers WHERE CustomerID=";
		std::stringstream ss;
		ss << customerID;
		query.append(ss.str());
		// Run a Query
		sql::ResultSet* pResultSet = pStatement->executeQuery(query);
		// If there is no last record there are no records so return false
		if (pResultSet->last() == false) { return false; }
		/* Where the last row is the first then there 
			* is a Customer matching the ID so return true */
		if (pResultSet->getRow() == 1) { return true; }
		// Failure
		return false;
	}
	catch(sql::SQLException e)
	{
		// Handle errors for JDBC
		std::cout << e.what() << std::endl;
		// Failure
		return false;
	}
	// failed
	return false;
}

Customer DatabaseWrapper::getCustomer(long customerID)
{
	// Make a Customer
	Customer customer;
	// Validate CustomerID
	if (customerID > 0 && this->connectedFlag == true)
	{
		// Try and Get the Customer
		try {

			// Create a statement
			sql::Statement* pStatement = this->pConnection->createStatement();
			std::string query = "SELECT * FROM Customers WHERE CustomerID=";
			std::stringstream ss;
			ss << customerID;
			query.append(ss.str());
			// Run a Query
			sql::ResultSet* pResultSet = pStatement->executeQuery(query);
			pResultSet->last();
			if (pResultSet->getRow() == 1)
			{
				// Grab Customer Fields		         
				customer.setCustomerID(pResultSet->getInt64("CustomerID"));
				customer.setTitle(pResultSet->getString("Title"));
				customer.setGivenNames(pResultSet->getString("GivenNames"));
				customer.setLastName(pResultSet->getString("LastName"));
			}
		}
		catch(sql::SQLException e)
		{
			// Handle errors for JDBC
			std::cout << e.what() << std::endl;
		}			
	}
	// Return Customer
	return customer;
}

bool DatabaseWrapper::removeCustomer(long customerID)
{
	// Validate CustomerID
	if (customerID < 0) { return false; }
	// Validate Database Connection
	if (this->connectedFlag == false) { return false; }
	// Validate CustomerID
	if (this->isCustomer(customerID) == false) { return false; }
	try {
		// Create a statement
		sql::Statement* pStatement = this->pConnection->createStatement();
		std::string sql = "DELETE FROM Customers WHERE CustomerID=";
		std::stringstream ss;
		ss << customerID;
		sql.append(ss.str());
		pStatement->executeUpdate(sql);
		// Success
		return true;
	}
	catch(sql::SQLException e)
	{
		// Handle errors for JDBC
		std::cout << e.what() << std::endl;
		// Failure
		return false;
	}
	// Failure
	return false;
}

std::vector<Customer> DatabaseWrapper::getCustomers()
{
	// Create our List of customers
	std::vector<Customer> customers;
	if (this->connectedFlag == true)
	{
		try
		{
			// Create a statement
			sql::Statement* pStatement = this->pConnection->createStatement();
			// Run a Query
			sql::ResultSet* pResultSet = pStatement->executeQuery("SELECT * FROM Customers");
			// Go through the result set one record (row) at a time		
			while(pResultSet->next())
			{
				// Grab Customer Fields		         
				long customerID = pResultSet->getInt64("CustomerID");
				std::string title = pResultSet->getString("Title");
				std::string lastName = pResultSet->getString("LastName");
				std::string givenNames = pResultSet->getString("GivenNames");
				// Create a Customer
				Customer customer;
					customer.setCustomerID(customerID);
					customer.setTitle(title);
					customer.setLastName(lastName);
					customer.setGivenNames(givenNames);
				// Add the Customer to the Customers list
				customers.push_back(customer);
				}
		}
		catch(sql::SQLException e)
		{
			// Handle errors for JDBC
			std::cout << e.what() << std::endl;
		}
	}		
	// Return the list of Customers
	return customers;
}