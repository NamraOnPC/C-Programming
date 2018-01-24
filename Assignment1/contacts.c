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



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"
char response,response2,response3,response4,response5;

void getName(struct Name*ptr_name) {
	printf("Please enter the contact's first name: ");
	scanf("%30s", (*ptr_name).firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &response);

	if ( response == 'y' || response == 'Y' )
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s",(*ptr_name).middleInitial);
	}
	else
	{

	}

	printf("Please enter the contact's last name: ");
	scanf("%35s",(*ptr_name).lastName);

};
void getAddress(struct Address*ptr_address){
	printf("Please enter the contact's street number: ");
	scanf("%d",&(*ptr_address).streetNumber);

	printf("Please enter the contact's street name: ");
	scanf("%40s",(*ptr_address).street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c",&response2);

	if (response2 == 'y' || response2 == 'Y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf("%d",&(*ptr_address).apartmentNumber);
	}
	else
	{

	}

	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]",(*ptr_address).postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %40s",(*ptr_address).city);


};
void getNumbers(struct Numbers *ptr_numbers)
{
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c",&response3);

	if ( response3 == 'y' || response3 == 'Y' )
	{
		printf("Please enter the contact's cell phone number: ");
		scanf("%20s", (*ptr_numbers).cell);
	}
	else
	{

	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &response4);

	if (response4 == 'y' || response4 == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", (*ptr_numbers).home);
	}
	else
	{

	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &response5);

	if ( response5 == 'y' || response5 == 'Y' )
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", (*ptr_numbers).business);

	}
	else
	{

	}


};
