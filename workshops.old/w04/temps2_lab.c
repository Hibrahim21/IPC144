//--------------------------------------------------

// Name: Hamza Ibrahim       

// Student Number: 107467185

// Email: hibrahim21@myseneca.ca         

// Section: IPC144SMM       

// Workshop: Array_lab      

//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cnt;
	int high[10];
	int low[10];
	int NUMS;

	// First output "---===IPC Temperature Calculator V2.0 ===---" 
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &NUMS);

	if (NUMS > 10 || NUMS < 3)
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &NUMS);
		printf("\n");
	}

	for (cnt = 1; cnt <= NUMS; cnt++)
	{
		printf("Day %d - High: ", cnt);
		scanf("%d", &high[cnt]);

		printf("Day %d - Low: ", cnt);
		scanf("%d", &low[cnt]);

		while (high[cnt] > 40 || low[cnt] < -40 || high[cnt] < low[cnt])
		{
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");

			printf("Day %d - High:", cnt);
			scanf("%d", &high[cnt]);

			printf("Day %d - Low: ", cnt);
			scanf("%d", &low[cnt]);
		}


	}


	// Printing the otput 
	printf("\nDay  Hi  Low\n");
	for (cnt = 1; cnt <= NUMS; cnt++)
	{
		printf("%d    %d    %d\n", cnt, high[cnt], low[cnt]);
	}


	return 0;
}