/*
	Name: Hamza Ibrahim
	Student ID : 107467185
	Section : IPC144SMM
	Student eMail : hibrahim21@myseneca.ca
	*/


#define _CRT_SECURE_NO_WARNINGS
#define NUMS 3
#include <stdio.h>

int main(void)
{
	int cnt;
	int high=0;
	int low=0;
	float average = 0.0;

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
		average = average +high + low;

	}
	average = average / 6;
	printf("The average (mean) temperature was: %.2lf\n", average);

	return 0;
}
