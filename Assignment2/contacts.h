/* -------------------------------------------
Name: NAMRA FANSE
Student number: 112219175
Email: nrfanse@myseneca.ca
Section: IPC144SXX
Date: 20/12/2017
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */
#ifndef CONTACTS_H_
#define CONTACTS_H_

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
	char cell[11];
	char home[11];
	char business[11];
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
    void getContact(struct Contact * ) ;

#endif
