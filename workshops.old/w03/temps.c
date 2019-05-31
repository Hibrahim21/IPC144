/*
	Name: Hamza Ibrahim
	Student ID : 107467185
	Section : IPC144SMM
	Student eMail : hibrahim21@myseneca.ca
	*/

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 4
#include <stdio.h>

int main(void)
{
	int cnt;
	int high = 0;
	int low = 0;
	float average = 0.0;
	int highest = 0;
	int lowest = 0;
	int c = 0;
	int cl = 0;


	// First output "---===IPC Temperature Analyzer ===---" 
	printf("---=== IPC Temperature Analyzer ===---\n");

	for (cnt = 1; cnt <= NUMS; cnt++)
	{
		printf("Enter the high value for day %d: ", cnt);
		scanf("%d", &high);
		printf("\n");

		printf("Enter the low value for day %d: ", cnt);
		scanf("%d", &low);
		printf("\n");

		while (high > 40 || low < -40 || high < low)
		{
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");

			printf("Enter the high value for day %d: ", cnt);
			scanf("%d", &high);
			printf("\n");

			printf("Enter the low value for day %d: ", cnt);
			scanf("%d", &low);
			printf("\n");

		}

		average = average + high + low;

		// Calculating the highest temp and its day with an if statement, placed in side the for loop to be 
		// to be over written everytime a higher number is enterd
		if (high > highest)
		{
			highest = high;
			c = cnt;
		}
		// Calculating the lowest temp and its day with an if statement, placed in side the for loop to be 
		// over written everytime a lower number is enterd
		if (low < lowest)
		{
			lowest = low;
			cl = cnt;
		}

	}
	// Dividing by 8 because user only has the option to input 8 numbers
	average = average / 8;
	// Printing the average (mean)
	printf("The average (mean) temperature was: %.2lf\n", average);

	// Printing The highest temp and its day
	printf("The highest temperature was %d, on day %d\n", highest, c);

	// Printing the lowest temp and its day
	printf("The lowest temperature was %d, on day %d\n", lowest, cl);
	printf("\n");


	return 0;
}