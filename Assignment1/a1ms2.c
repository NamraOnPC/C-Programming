





/* -------------------------------------------
Name: NAMRA FANSE
Student number: 112219175
Email: nrfanse@myseneca.ca
Section: IPC144SXX
Date: 16/10/2017
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"
int main(void)
{
	//decalre variables here 
	struct Name contactName = { {0}, {0}, {0}};
     
    struct Address contactAddress = { 0, {0}, 0, {0}, {0} };
    
    struct Numbers contactNumbers = { {0}, {0}, {0} };

	char response, response2, response3, response4, response5 ;

	//display title here 
	printf("Contact Management System\n");
	printf("-------------------------\n");

	//Contact name input 
	printf("Please enter the contact's first name: ");
	scanf("%30s", contactName.firstName);
	
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &response);

	if ( response == 'y' || response == 'Y' )
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6s", contactName.middleInitial);
	}
    else
    {
        
    }

	printf("Please enter the contact's last name: ");
	scanf(" %35s", contactName.lastName);

// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf(" %d", &contactAddress.streetNumber);
	
	printf("Please enter the contact's street name: ");
    scanf(" %40s",contactAddress.street);
    
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &response2);

	if ( response2 == 'y' || response2 == 'Y' )
	{
		printf("Please enter the contact's apartment number: ");
		scanf(" %d",&contactAddress.apartmentNumber);
	}
	else 
	{
	    
	}


	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]",contactAddress.postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %40s", contactAddress.city);
// Contact Numbers Input :
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &response3);

	if ( response3 == 'y' || response3 == 'Y' ) 
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %20s", contactNumbers.cell);
	}
	else 
	{
	    
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &response4);

	if ( response4 == 'y' || response4 == 'Y' ) 
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %20s", contactNumbers.home);
	}
    else 
    {
        
    }
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &response5);

	if ( response5 == 'y' || response5 == 'Y' )
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %20s", contactNumbers.business);
		
	}
    else 
    {
        
    }


	//Display Contact Summary Details
    printf("\nContact Details\n");
    printf("---------------\n");
    printf("Name Details\n");
    
    printf("First name: %s\n", contactName.firstName);
    if ( response == 'y' || response == 'Y')
    {
        printf("Middle initial(s): %s\n", contactName.middleInitial);
        
    }
    printf("Last name: %s\n\n", contactName.lastName);
    
    printf("Address Details\n");
    printf("Street number: %d\n", contactAddress.streetNumber);
    printf("Street name: %s\n", contactAddress.street);
    
    if ( response2 == 'y' || response2 == 'Y' )
    {
        printf("Apartment: %d\n", contactAddress.apartmentNumber);
        
    }
    
    printf("Postal code: %s\n", contactAddress.postalCode);
    printf("City: %s\n\n", contactAddress.city);
    
    printf("Phone Numbers:\n");
    
    if( response3 == 'y' || response3 == 'Y')
    {
        printf("Cell phone number: %s\n", contactNumbers.cell);
    }
    if( response4 == 'y' || response4 == 'Y')
    {
        printf("Home phone number: %s\n",contactNumbers.home);
    }
    if( response5 == 'y' || response5 == 'Y')
    {
        printf("Business phone number: %s\n\n",contactNumbers.business);
    }
	//Display Completion message 

    printf("Structure test for Name, Address, and Numbers Done!\n");
    
    return 0;
    
}

