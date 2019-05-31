/*
Name: Hamza Ibrahim
Student number: 107467185
Email: hibrahim21@myseneca.ca
Workshop: Struct
Section: IPC144SMM
Date: Oct 13, 2018
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

// Declare Struct Employee 
struct employee
{
	int id;
	int age;
	double salary;
};

int main(void) {
	// Declaring Variables
	int option = 0;
	int cnt;
	int Numemp;
	Numemp = 0;
	int gone = 0;
	struct employee emp[SIZE] = { {0} };

	printf("---=== EMPLOYEE DATA ===---\n\n");
	do {
		// Print the option list

		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable

		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0: // Exit the program

			printf("Exiting Employee Data Program. Good Bye!!!");
			printf("\n");
			break;
		case 1: // Display Employee Data

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			for (cnt = 0; cnt < SIZE; cnt++)
			{
				if (emp[cnt].id > 0)
				{
					printf("%6d%9d%11.2lf\n", emp[cnt].id, emp[cnt].age, emp[cnt].salary);
				}

			}
			printf("\n");

			break;
		case 2: // Adding Employee

			printf("Adding Employee\n");
			printf("===============\n");
			
			if (gone != 0)
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[gone].id);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[gone].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[gone].salary);
				printf("\n");

				Numemp++;
			}
			
			else if (Numemp < SIZE)
			{

				printf("Enter Employee ID: ");
				scanf("%d", &emp[Numemp].id);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[Numemp].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[Numemp].salary);
				printf("\n");

				Numemp++;

			}
			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
				printf("\n");
			}

			break;

		case 3: // Updating Employee

			printf("Update Employee Salary\n");
			printf("======================\n");
			int empID = 0;
			int done = 0;
			do
			{
				int i;
				done = 0;
				printf("Enter Employee ID: ");
				scanf("%d", &empID);
				for (i = 0; i < SIZE; i++)
				{

					if (empID == emp[i].id) // if user id matches, set user to 0
					{
						printf("The current salary is %.2lf\n", emp[i].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[i].salary);
						done = 1;
					}
					else if (done != 1 && i == 3)
					{
						empID = 0;
						printf("*** ERROR: Employee ID not found! ***\n");
						done = 0;
					}
				}

			} while (empID != emp[Numemp].id && done != 1);

			printf("\n");


			break;

		case 4: // Removing Employee
			printf("Remove Employee\n");
			printf("===============\n");

			empID = 0;
			done = 0;
			do
			{
				int i;
				done = 0;
				printf("Enter Employee ID: ");
				scanf("%d", &empID);
				for (i = 0; i < SIZE; i++)
				{

					if (empID == emp[i].id) // if user id matches, set user to 0
					{
						printf("Employee %d will be removed\n", emp[i].id);
						emp[i].id = 0;
						done = 1;
						Numemp--;
						gone = i;
					}
					else if (done != 1 && i == 3)
					{
						empID = 0;
						printf("*** ERROR: Employee ID not found! ***\n");
						done = 0;
					}
				}

			} while (empID != emp[Numemp].id && done != 1);

			printf("\n");
			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	} while (option != 0);

	return 0;
}