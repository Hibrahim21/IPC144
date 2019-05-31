/*
 Name: Hamza Ibrahim
 Student#: 107467185
 Section: IPC144SMM
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	
	// Declaring all my varibles
	double amountDue;
	int loonies = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;
	/* Important lesson, using too many varibles is something that will
	confuse the programmer.
	*/
	// Read User input and store in amountDue 
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amountDue);

	// GST calculation with New balanceOwing
	double GST = (amountDue * 0.13) + 0.005;
	amountDue += GST;
	printf("GST: %.2lf\n", GST);
	printf("Balance owing: $%.2lf\n", amountDue);


	// Loonies claculation with balanceOwing
	loonies = (int)amountDue;
	amountDue = amountDue - loonies;
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, amountDue);

	// Quarters calculation with balanceOwing
	quarters = (amountDue * 100);
	amountDue = (quarters % 25);
	printf("Quarters required: %d, balance owing $%1.2f\n", quarters / 25, (float)amountDue / 100);

	// Dimes calculation with balanceOwing
	dimes = (int)(amountDue) / 10;
	amountDue = (int)amountDue % 10;
	printf("Dimes required: %d, balance owing $%1.2f\n", dimes, (float)(amountDue) / 100);

	// Nickels calculations with balanceOwing
	nickels = (int)(amountDue) / 5;
	amountDue = (int)amountDue % 5;
	printf("Nickels required: %d, balance owing $%1.2f\n", nickels, (float)amountDue / 100);

	// Pennies calculations with balanceOwing
	pennies = (int)(amountDue) / 1;
	amountDue = (int)(amountDue) % 1;
	printf("Pennies required: %d, balance owing $%1.2f\n", pennies, (float)amountDue / 100);

	

	return 0;
}
