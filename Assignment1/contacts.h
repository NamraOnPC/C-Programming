/* -------------------------------------------
Name: NAMRA FANSE
Student number: 112219175
Email: nrfanse@myseneca.ca
Section: IPC144SXX
Date: 10/12/2017
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */


struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// structure type address declaration
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// structure type Numbers declaration
struct Numbers{
	char cell[21];
	char home[21];
	char business[21];
};

// structure type Contact declaration
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};


void getName( struct Name * ) ;
    void getAddress( struct Address * ) ;
     void getNumbers(struct Numbers * ) ;

