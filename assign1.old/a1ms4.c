#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "contacts.h"
/* -------------------------------------------
Name: Hamza Ibrahim
Student number: 107467185
Email: hibrahim21@myseneca.ca
Section: SMM
Date: 11/7/2018
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

int main(void)
{
	struct Contact Information = { { {"\0"}, {0, "\0", 0, "0", "0"}, {'\0'} } };

	printf("Contact Management System\n");
	printf("=========================\n");

	// Calling the getName function
	getName(&Information.names);

	// Calling the getAddress function
	getAddress(&Information.addresses);

	// Calling the getNumbers function
	getNumbers(&Information.numbers);

	// CONTACT DETAILS
	printf("Contact Details\n");
	printf("===============\n");

	//Name Details
	printf("Name Details\n");
	printf("------------\n");

	printf("First name: %s\n", Information.names.firstName);
	printf("Middle initial(s): %s\n", Information.names.middleInitial);
	printf("Last name: %s\n", Information.names.lastName);
	printf("\n");

	// Address Details
	printf("Address Details\n");
	printf("---------------\n");

	printf("Street number: %d\n", Information.addresses.streetNumber);
	printf("Street name: %s\n", Information.addresses.street);
	printf("Apartment: %d\n", Information.addresses.apartmentNumber);
	printf("Postal code: %s\n", Information.addresses.postalCode);
	printf("City: %s\n", Information.addresses.city);
	printf("\n");

	// Phone Numbers
	printf("Phone Numbers\n");
	printf("-------------\n");

	printf("Cell phone number: %s\n", Information.numbers.cell);
	printf("Home phone number: %s\n", Information.numbers.home);
	printf("Business phone number: %s\n", Information.numbers.business);
	printf("\n");

	printf("Structure test for Contact using functions done!\n");

	return 0;
}
