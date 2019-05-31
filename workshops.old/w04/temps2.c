/*
Name: Hamza Ibrahim
	Student ID : 107467185
	Section : IPC144SMM
	Student eMail : hibrahim21@myseneca.ca
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	int main(void)
{
	int c;
	int cl;
	int cnt;
	int high[10];
	int low[10];
	int NUMS;
	int max;
	int min;
	int number;
	double avg = 0.0;


	// First output "---===IPC Temperature Calculator V2.0 ===---" 
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &NUMS);
	printf("\n");
	if (NUMS > 10 || NUMS < 3 || NUMS == 0)
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &NUMS);
		printf("\n");
	}
	for (cnt = 0; cnt < NUMS; cnt++)
	{
		printf("Day %d - High: ", cnt + 1);
		scanf("%d", &high[cnt]);
		printf("Day %d - Low: ", cnt + 1);
		scanf("%d", &low[cnt]);
		while (high[cnt] > 40 || low[cnt] < -40 || high[cnt] < low[cnt])
		{
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");
			printf("Day %d - High:", cnt+1);
			scanf("%d", &high[cnt]);
			printf("Day %d - Low: ", cnt+1);
			scanf("%d", &low[cnt]);
		}
	}
	// For loop for determining the highest and lowest, printing of the output as well.
	max = high[0];
	min = low[0];
	for (cnt = 1; cnt < NUMS; cnt++)
	{
		if (max <= high[cnt])
		{
			max = high[cnt];
			c = cnt + 1;
		}
		if (min >= low[cnt])
		{
			min = low[cnt];
			cl = cnt + 1;
		}
	}
	// Printing the otput 
	printf("\nDay  Hi  Low\n");
	for (cnt = 0; cnt < NUMS; cnt++)
	{
		printf("%d    %d    %d\n", cnt + 1, high[cnt], low[cnt]);
	}
	printf("\nThe highest temperature was %d, on day %d\n", max, c);
	printf("The lowest temperature was %d, on day %d\n", min, cl);
	printf("\n");
	// Prompting the user to see the average
	do

	{
		printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, "
			"enter a negative number to exit: ", NUMS);
		scanf("%d", &number);
		printf("\n");
		while (number > NUMS || number == 0)
		{
			printf("Invalid entry, please enter a number between 1 and %d, inclusive: ", NUMS);
			scanf("%d", &number);
			printf("\n");
		}
		avg = 0.0;
		for (cnt = 0; cnt < number; cnt++)
		{
			avg += high[cnt] + low[cnt];
		}

		avg /= (number * 2);

		if (number >= 1)
		{
			printf("The average temperature up to day %d is: %.2lf\n", number, avg);
			printf("\n");
		}
		if (number <= -1)
		{
			printf("Goodbye!\n");
			printf("\n");
		}

	} while (number < NUMS && number >= 1);


	return 0;
}



