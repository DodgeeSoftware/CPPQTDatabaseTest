/* SimpleDatabase Application Using Qt, MySQL and C++ 
 (c) Dodgee Software 2018
	Youtube: https://youtube.com/dodgeesoftware */

#pragma once

// C/C++ Includes
#include <iostream>
#include <string>

/* Customer class is a container which
	has information about a customer */
class Customer
{
	// *****************************
	// * CONSTRUCTORS / DESTRUCTOR *
	// *****************************
	public:
		// Constructor
		Customer()
		{
			this->customerID = -1;
			this->title = "";
			this->givenNames = "";
			this->lastName = "";
		}
		// Destructor
		virtual ~Customer() {}
	
	protected:
		// Members and Methods

	// **************
	// * PROPERTIES *
	// **************
	public:
		// Get CustomerID
		long getCustomerID() { return this->customerID; }
		// Set CustomerID
		void setCustomerID(long customerID) { this->customerID = customerID; }
		// Get Title
		std::string getTitle() { return this->title; }
		// Set Title
		void setTitle(std::string title) { this->title = title; }
		// Get GivenNames
		std::string getGivenNames() { return this->givenNames; }
		// Set GivenNames
		void setGivenNames(std::string givenNames) { this->givenNames = givenNames; }
		// Get LastName
		std::string getLastName() { return this->lastName; }
		// Set LastName
		void setLastName(std::string lastName) { this->lastName = lastName; }

	protected:		
		// Customer ID
		long customerID;
		// Title
		std::string title;	
		// Given Names
		std::string givenNames;
		// Last Name
		std::string lastName;
};

