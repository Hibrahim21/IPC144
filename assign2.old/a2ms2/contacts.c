/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  1
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include "contacts.h"
#include "contactHelpers.h"
#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

// getName:
void getName(struct Name * name)
{
	char options;
	printf("Please enter the contact's first name: ");
	scanf("%31[^\n]", name->firstName);
	clearKeyboard();

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	options = yes();

	if (options == 1)
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]", name->middleInitial);
		clearKeyboard();

	}

	else
	{
		name->middleInitial[0] = '\0';
	}

	printf("Please enter the contact's last name: ");
	scanf("%36[^\n]", name->lastName);
	clearKeyboard();

}


// getAddress:
void getAddress(struct Address * address)
{
	char options;
	printf("Please enter the contact's street number: ");
	address->streetNumber = getInt();

	
	if (address->streetNumber <= -1)
	{
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		address->streetNumber = getInt();
	}

	printf("Please enter the contact's street name: ");
	scanf(" %41[^\n]", address->street);
	clearKeyboard();

	printf("Do you want to enter an apartment number? (y or n): ");
	options = yes();

	if (options == 1)
	{
		printf("Please enter the contact's apartment number: ");
		address->apartmentNumber = getInt();

		if (address->apartmentNumber <= -1)
		{
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			address->apartmentNumber = getInt();
		}
	}

	else
	{
		address->apartmentNumber = '\0';
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address->postalCode);
	clearKeyboard();

	printf("Please enter the contact's city: ");
	scanf(" %41[^\n]", address->city);
	clearKeyboard();

}


// getNumbers:
void getNumbers(struct Numbers * numbers)
{
	char options;
	//printf("Do you want to enter a cell phone number? (y or n): ");
	//options = yes();

	//if (options == 1)
	//{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %11[^\n]", numbers->cell);
		clearKeyboard();
	//}

	//else
	//{
		//numbers->cell[0] = '\0';
	//}

	printf("Do you want to enter a home phone number? (y or n): ");
	options = yes();

	if (options == 1)
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %11[^\n]", numbers->home);
		clearKeyboard();
	}

	else
	{
		numbers->home[0] = '\0';
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	options = yes();

	if (options == 1)
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %11[^\n]", numbers->business);	
		clearKeyboard();
	}

	else
	{
		numbers->business[0] = '\0';
	}
}


// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:
void getContact(struct Contact * info)
{
	struct Contact contInfo;

	getName(&contInfo.name);
	getAddress(&contInfo.address);
	getNumbers(&contInfo.numbers);

	*info = contInfo;
}

