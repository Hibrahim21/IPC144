#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"

/* -------------------------------------------
Name: Hamza Ibrahim
Student number: 107467185
Email: hibrahim21@myseneca.ca
Section: SMM
Date: 11/1/2018
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */


int main(void)
{
	// Declaring variables
	char options[4];

	// Declaring the structs
	struct Name fullName = { {0} };
	struct Address fullAddress = { 0, {'\0'}, 0, {'\0'}, {'\0'} };
	struct Numbers contactNum = { {0} };

	// Welcome message
	printf("Contact Management System\n");
	printf("-------------------------\n");
	
	//---------------------------------------------------------------------
	// CONTACT NAME

	// Asking for First name and storing it in member firstName
	printf("Please enter the contact's first name: ");
	scanf(" %31[^\n]", fullName.firstName);

	// Asking the user if they want to enter their initials
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &options[0]);

	// If 'y' or 'Y', ask for middle initials
	if (options[0] == 'y' || options[0] == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %7[^\n]", fullName.middleInitial);
	}
	
	printf("Please enter the contact's last name: ");
	scanf(" %36[^\n]", fullName.lastName);
	

	//--------------------------------------------------------------
	// CONTACT ADDRESS
	
	// Asking for Street #
	printf("Please enter the contact's street number: ");
	scanf(" %d", &fullAddress.streetNumber);

	// Asking for street name
	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]", fullAddress.street);

	// Asking the user if they have an apartment #
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &options[1]);

	// If 'y' or 'Y', ask for apartment number
	if (options[1] == 'y' || options[1] == 'Y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &fullAddress.apartmentNumber);
	}

	// Ask user to enter postal Code
	printf("Please enter the contact's postal code: ");
	scanf(" %8[^\n]", fullAddress.postalCode);
	

	// Ask the user to enter the city
	printf("Please enter the contact's city: ");
	scanf(" %41[^\n]", fullAddress.city);

	//--------------------------------------------------------------
	// CONTACT NUMBERS

	// Ask if they want to enter a Cell #
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &options[2]);

	if (options[2] == 'y' || options[2] == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %[^\n]", contactNum.cell);
	}

	// Ask if they want to enter a Home #
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &options[3]);

	if (options[3] == 'y' || options[3] == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %[^\n]", contactNum.home);
	}

	// Ask if they want to enter a Business #
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &options[4]);

	if (options[4] == 'y' || options[4] == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %[^\n]", contactNum.business);
	}

	printf("\n");

	//--------------------------------------------------------------------------
	
	// CONTACT DETAILS

	printf("Contact Details\n");
	printf("---------------\n");

	//Name Details
	printf("Name Details\n");
	printf("First name: %s\n", fullName.firstName);

	if (options[0] == 'y' || options[0] == 'Y')
	{
		printf("Middle initial(s): %s\n", fullName.middleInitial);
	}

	printf("Last name: %s\n", fullName.lastName);
	printf("\n");
	
	// Address Details
	printf("Address Details\n");
	printf("Street number: %d\n", fullAddress.streetNumber);
	printf("Street name: %s\n", fullAddress.street);

	if (options[1] == 'y' || options[1] == 'Y')
	{
		printf("Apartment: %d\n", fullAddress.apartmentNumber);
	}

	printf("Postal code: %s\n", fullAddress.postalCode);
	printf("City: %s\n", fullAddress.city);
	printf("\n");

	// Phone Numbers
	printf("Phone Numbers:\n");

	if (options[2] == 'y' || options[2] == 'Y')
	{
		printf("Cell phone number: %s\n", contactNum.cell);
	}

	if (options[3] == 'y' || options[3] == 'Y')
	{
		printf("Home phone number: %s\n", contactNum.home);
	}

	if (options[4] == 'y' || options[4] == 'Y')
	{
		printf("Business phone number: %s\n", contactNum.business);
	}

	printf("\n");
	printf("Structure test for Name, Address, and Numbers Done!\n");

	
	return 0;
}