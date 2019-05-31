/* -------------------------------------------
Name: Hamza Ibrahim
Student number: 107467185
Email: hibrahim21@myseneca.ca
Section: SMM
Date: 11/6/2018
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

// Structure type Name declaration
struct Name {

	char firstName[31];
	char middleInitial[7];
	char lastName[36];

};

struct Address {

	unsigned int streetNumber;
	char street[41];
	unsigned int apartmentNumber;
	char postalCode[8];
	char city[41];

};

struct Numbers {

	char cell[11];
	char home[11];
	char business[11];

};

struct Contact {

	struct Name names;
	struct Address addresses;
	struct Numbers numbers;

};

void getName(struct Name * names);

void getAddress(struct Address * addresses);

void getNumbers(struct Numbers * numbers);