/*
 Name: Hamza Ibrahim
 Student#: 107467185
 Section: IPC144SMM
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//declaring all my varibles
	double amountDue; //amount to be paid
	double GST;
	double balanceOwing;
	int loonies;
	double balanceOwingL;
	int quarters;
	double balanceOwingQ;
	int dimes;
	double balanceOwingD;
	int nickels;
	double balanceOwingN;
	int pennies;
	double balanceOwingP;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amountDue);

	//GST calculation
	GST = amountDue * .13 + 0.005;
	printf("GST: %.2lf\n", GST);

	//first balance owing
	balanceOwing = amountDue + GST;
	printf("Balance owing: $%.2lf\n", balanceOwing);

	//Loonies calculations with owing balance
	loonies = (int)balanceOwing;
	balanceOwingL = ((int)balanceOwing * 100) % 100;
	balanceOwingL = balanceOwing - loonies;
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, balanceOwingL);

	//Quarters calculations with owing balance
	quarters = (balanceOwingL * 100) / 25;
	balanceOwingQ = balanceOwingL - (float)quarters * 25 / 100;
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, balanceOwingQ);

	//Dimes calculations with owing balance
	dimes = (balanceOwingQ * 100) / 10;
	balanceOwingD = balanceOwingQ - (float)dimes * 100 / 10;
	printf("Dimes required: %d, balance owing $%.2lf\n", dimes, balanceOwingD);

	//Nickels calculations with owing balance
	nickels = (balanceOwingD * 100) / 5;
	balanceOwingN = balanceOwingD - (float)nickels * 5 / 100;
	printf("Nickels required: %d, balance owing $%.2lf\n", nickels, balanceOwingN);

	//Pennies calculations with owing balance
	pennies = (balanceOwingN * 100) / 1;
	balanceOwingP = balanceOwingN - (float)pennies * 1 / 100;
	printf("Pennies required: %d, balance owing $%.2lf\n", pennies, balanceOwingP);

	return 0;
}