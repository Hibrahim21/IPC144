/*
Name: Hamza Ibrahim
Student number: 107467185
Email: hibrahim21@myseneca.ca
Workshop: Struct
Section: IPC144SMM
Date: Oct 3, 2018
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 2
// Declare Struct Employee 
struct employee {
	int id;
	int age;
	double salary;
}emp[SIZE]; // Created a struct of an Array, it is the same as having struct employee emp[size]; in my main but a shorter version

int main(void) {
	// Declaring Variables
	int option = 0;
	int cnt;
	int Numemp;
	Numemp = 0;

	printf("---=== EMPLOYEE DATA ===---\n\n");
	do {
		// Print the option list

		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
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
				printf("%6d%9d%11.2lf\n", emp[cnt].id, emp[cnt].age, emp[cnt].salary);
			}
			printf("\n");

			break;
		case 2: // Adding Employee

			printf("Adding Employee\n");
			printf("===============\n");
			if (Numemp < SIZE)
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
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	} while (option != 0);

	return 0;
}