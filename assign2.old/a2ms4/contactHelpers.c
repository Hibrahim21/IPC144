/* -------------------------------------------
Name: Hamza Ibrahim
Student number: 107467185
Email: hibrahim21
Section: SMM
Date: 11/20/2018
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "contactHelpers.h"
#include "contacts.h"
#define MAXCONTACTS 5


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n')
		;
}

// pause:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
int getInt(void)
{
	char NL = 'x';
	int value;
	while (NL != '\n')
	{
		scanf("%d%c", &value, &NL);
		if (NL != '\n')
		{
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	}
	return value;
}

// getIntInRange:
int getIntInRange(int first, int second)
{
	int val;
	val = getInt();

	while (val < first || val > second)
	{
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", first, second);
		val = getInt();
	}
	return val;
}

// yes:
int yes(void)
{
	char x = 'x';
	char NextL = 'x';
	int returns = -1;

	while (NextL != '\n')
	{
		scanf("%c%c", &x, &NextL);
		if (NextL != '\n')
		{
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			scanf("%c%c", &x, &NextL);
		}

		while (x != 'Y' && x != 'y' && x != 'n' && x != 'N')
		{
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			scanf("%c%c", &x, &NextL);
		}
		if (x == 'y' || x == 'Y')
		{
			returns = 1;
		}

		if (x == 'n' || x == 'N')
		{
			returns = 0;
		}
	}

	return returns;
}

// menu:
int menu(void)
{
	int option;

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");


	option = getIntInRange(0, 6);

	return option;
}


// contactManagerSystem:
void contactManagerSystem(void)
{
	struct Contact info[MAXCONTACTS] = { { { "Rick", {'\0'}, "Grimes" },
   { 11, "Trailer Park", 0, "A7A 2J2", "King City" },
   { "4161112222", "4162223333", "4163334444" } },
   {
   { "Maggie", "R.", "Greene" },
   { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
   { "9051112222", "9052223333", "9053334444" } },
   {
   { "Morgan", "A.", "Jones" },
   { 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
   { "7051112222", "7052223333", "7053334444" } },
   {
   { "Sasha", {'\0'}, "Williams" },
   { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
   { "9052223333", "9052223333", "9054445555" } },
	};

	int choice;
	int opt = 0;

	while (opt == 0)
	{
		choice = menu();

		switch (choice)
		{
		case 0:

			printf("\nExit the program? (Y)es/(N)o: ");
			opt = yes();
			printf("\n");

			if (opt)
			{
				printf("Contact Management System: terminated\n");
			}
			break;

		case 1:
			printf("\n");
			displayContacts(info, MAXCONTACTS);
			pause();
			printf("\n");

			break;

		case 2:
			printf("\n");
			addContact(info, MAXCONTACTS);
			pause();
			printf("\n");

			break;

		case 3:
			printf("\n");
			updateContact(info, MAXCONTACTS);
			pause();
			printf("\n");

			break;

		case 4:
			printf("\n");
			deleteContact(info, MAXCONTACTS);
			pause();
			printf("\n");

			break;

		case 5:
			printf("\n");
			searchContacts(info, MAXCONTACTS);
			pause();
			printf("\n");

			break;

		case 6:
			printf("\n");
			printf("<<< Feature to sort is unavailable >>>\n\n");
			pause();
			printf("\n");

			break;

		default:
			break;
		}
	}
}


// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char telNum[])
{
	int needInput = 1;

	while (needInput == 1)
	{
		scanf("%10s", telNum);
		clearKeyboard();
		int cnt = 0;
		for (cnt = 0; cnt < 10; cnt++)
		{
			// (String Length Function: validate entry of 10 characters)
			if (strlen(telNum) == 10 && isdigit(telNum[cnt]) > 0)
			{
				needInput = 0;
			}
			else if (isdigit(telNum[cnt]) == 0)
			{
				printf("Enter a 10-digit phone number: ");
				cnt = 10;
				needInput = 1;
			}
		}
	}
}

// findContactIndex:
int findContactIndex(const struct Contact info[], int size, const char cellNum[])
{
	int temp = -1;
	int i = 0;
	for (i = 0; i < size; i++)
	{
		if (strcmp(info[i].numbers.cell, cellNum) == 0)
		{
			temp = i;
		}
	}
	return temp;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");
}


// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int a)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n", a);
}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact* info)
{
	printf(" %s", info->name.firstName);
	if (strlen(info->name.middleInitial) != 0)
	{
		printf(" %s", info->name.middleInitial);
	}
	printf(" %s\n", info->name.lastName);

	printf("    C: %-10s   H: %-10s   B: %-10s\n", info->numbers.cell, info->numbers.home, info->numbers.business);

	printf("       %d %s, ", info->address.streetNumber, info->address.street);
	if (info->address.apartmentNumber > 0)
	{
		printf("Apt# %d, ", info->address.apartmentNumber);
	}
	printf("%s, %s\n", info->address.city, info->address.postalCode);
}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact info[], int b)
{
	int counter = 0;
	displayContactHeader();
	int i = 0;
	for (i = 0; i < b; i++)
	{
		if (strlen(info[i].numbers.cell) != 0)
		{
			displayContact(&info[i]);
			counter++;
		}
	}
	displayContactFooter(counter);
}


// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact info[], int b)
{
	int valid;
	char cell[11];

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cell);

	valid = findContactIndex(info, sizeof(info), cell);
	if (valid == -1)
	{
		printf("*** Contact NOT FOUND ***\n");
		printf("\n");
	}
	else
	{
		printf("\n");
		displayContact(&info[valid]);
		printf("\n");
	}
}


// addContact:
// Put empty function definition below:
void addContact(struct Contact info[], int b)
{
	int cnt; 
	int empty = -1;

	for (cnt = 0; cnt < b; cnt++)
	{
		if (strlen(info[cnt].numbers.cell) == 0)
		{
			empty = cnt;
			cnt = b;
		}
	}
	if (empty > -1)
	{
		getContact(&info[empty]);
		printf("--- New contact added! ---\n");
		printf("\n");
	}
	else
	{
		printf("*** ERROR: The contact list is full! ***\n");
		printf("\n");
	}
	
}


// updateContact:
// Put empty function definition below:
void updateContact(struct Contact info[], int b)
{
	char cell[11];
	int found;
	int choice;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cell);

	found = findContactIndex(info, sizeof(info), cell);

	if (found == -1)
	{
		printf("*** Contact NOT FOUND ***\n\n");
	}
	else
	{
		printf("\nContact found:\n");
		displayContact(&(info[found]));
		printf("\n");

		printf("Do you want to update the name? (y or n): ");
		choice = yes();

		if (choice == 1)
		{
			getName(&(info[found].name));
		}
		printf("Do you want to update the address? (y or n): ");
		choice = yes();

		if (choice == 1)
		{
			getAddress(&info[found].address);
		}
		printf("Do you want to update the numbers? (y or n): ");
		choice = yes();

		if (choice == 1)
		{
			getNumbers(&info[found].numbers);
		}
		printf("--- Contact Updated! ---\n\n");
	}
}


// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact info[], int b)
{
	char cell[11];
	int found;
	int choice;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cell);

	found = findContactIndex(info, sizeof(info), cell);

	if (found == -1)
	{
		printf("*** Contact NOT FOUND ***\n\n");
	}
	else
	{
		printf("\nContact found:\n");
		displayContact(&(info[found]));
		printf("\n");

		printf("CONFIRM: Delete this contact? (y or n): ");
		choice = yes();
		if (choice == 1)
		{
			info[found].numbers.cell[0] = '\0';
			printf("--- Contact deleted! ---\n");
		}
		
	}
	printf("\n");
}


// sortContacts:
// Put empty function definition below:
void sortContacts(struct Contact info[], int b)
{

}
