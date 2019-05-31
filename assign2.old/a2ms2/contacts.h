/* -------------------------------------------
Name: Hamza Ibrahim
Student number: 107467185
Email: hibrahim21
Section: SMM
Date: 11/14/2018
----------------------------------------------
Assignment: 2
Milestone:  1
---------------------------------------------- */

//------------------------------------------------------
// Structure Types
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        structures here...                       |
// +-------------------------------------------------+

// Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};


// Structure type Address declaration
struct Address {
	unsigned int streetNumber;
	char street[41];
	unsigned int apartmentNumber;
	char postalCode[8];
	char city[41];
};


// Structure type Numbers declaration
struct Numbers {
	char cell[11];
	char home[11];
	char business[11];
};


// Structure type Contact declaration
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};

//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function prototypes here...              |
// +-------------------------------------------------+

// Get and store from standard input the values for Name
void getName(struct Name * name);


// Get and store from standard input the values for Address
void getAddress(struct Address * address);


// Get and store from standard input the values for Numbers
void getNumbers(struct Numbers * numbers);


// Get and store from standard input the values for a Contact (NOT: Contacts)
void getContact(struct Contact * info);

