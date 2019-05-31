/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include "contactHelpers.h"
#include "contacts.h"
#include <stdio.h>
// This source file needs to "know about" the functions you prototyped
//       in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------
// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+
// clearKeyboard:  Empty function definition 
void clearKeyboard(void)
{
	while (getchar() != '\n')
		;
}

// pause: Empty function definition goes here:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();

}

// getInt: Empty function definition goes here:
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

// getIntInRange: Empty function definition goes here:
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

// yes: Empty function definition goes here:
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

// menu: Empty function definition goes here:
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

	
	option = getIntInRange(0,6);

	return option;
}

// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void)
{
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
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");

			break;

		case 2:

			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");

			break;

		case 3:

			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");

			break;

		case 4:

			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");

			break;

		case 5:

			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");

			break;

		case 6:

			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");

			break;
		
		default:
			break;
		}
	}
}

