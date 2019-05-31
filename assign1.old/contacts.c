#define _CRT_SECURE_NO_WARNINGS
#include "contacts.h"
#include <stdio.h>

// Get Name Function
void getName(struct Name * names)
{
	char options;
	printf("Please enter the contact's first name: ");
	scanf(" %[^\n]", names->firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &options);
	if (options == 'y' || options == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %[^\n]", names->middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf(" %[^\n]", names->lastName);
}

// Get Address Function
void getAddress(struct Address * addresses)
{
	char options;
	printf("Please enter the contact's street number: ");
	scanf(" %d", &addresses->streetNumber);
	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]", addresses->street);
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &options);
	if (options == 'y' || options == 'Y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &addresses->apartmentNumber);
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]", addresses->postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %[^\n]", addresses->city);
}

// Get Number Function
void getNumbers(struct Numbers * numbers)
{
	char options;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &options);
	if (options == 'y' || options == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %[^\n]", numbers->cell);
	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &options);
	if (options == 'y' || options == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %[^\n]", numbers->home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &options);
	if (options == 'y' || options == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %[^\n]", numbers->business);
	}
	printf("\n");
}