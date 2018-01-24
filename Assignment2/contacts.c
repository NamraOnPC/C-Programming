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



#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

#include "contacts.h"

#include "contactHelpers.h"

void getName( struct Name*ptr_name ) { 

int response;

printf("Please enter the contact's first name: ");
scanf("%[^\n]", (*ptr_name).firstName);
	
printf("Do you want to enter a middle initial(s)? (y or n): ");
clearKeyboard();
response=yes();

if (response==1)
{
printf("Please enter the contact's middle initial(s): ");
scanf("%[^\n]", (*ptr_name).middleInitial);
}
else
{

}
clearKeyboard();
printf("Please enter the contact's last name: ");
scanf("%[^\n]", (*ptr_name).lastName);

return;
}
void getAddress(struct Address*ptr_address) {
    
 char response=0;
    
printf("Please enter the contact's street number: ");
(*ptr_address).streetNumber = getInt();

printf("Please enter the contact's street name: ");
scanf("%[^\n]",(*ptr_address).street);

printf("Do you want to enter an apartment number? (y or n): ");
scanf(" %c", &response);
clearKeyboard();

if (response=='y'||response=='Y')
{
printf("Please enter the contact's apartment number: ");
scanf("%d", &(*ptr_address).apartmentNumber);
}
else
{
ptr_address->apartmentNumber=0;
}

printf("Please enter the contact's postal code: ");
scanf(" %[^\n]",(*ptr_address).postalCode);

printf("Please enter the contact's city: ");
scanf(" %[^\n]",(*ptr_address).city);

return;
}
void getNumbers(struct Numbers *ptr_numbers)
{
char option;
char option2;
printf("Please enter the contact's cell phone number: ");
getTenDigitPhone((*ptr_numbers).cell);

printf("Do you want to enter a home phone number? (y or n): ");
scanf(" %c", &option);
clearKeyboard();
if (option == 'y' || option == 'Y') 
{
printf("Please enter the contact's home phone number: ");
getTenDigitPhone((*ptr_numbers).home);
}
else
{
ptr_numbers->home[0]='\0';	    
}
printf("Do you want to enter a business phone number? (y or n): ");
scanf(" %c", &option2);	
if (option2 == 'y' || option2 == 'Y')
{
printf("Please enter the contact's business phone number: ");
getTenDigitPhone((*ptr_numbers).business);

}
else
{
clearKeyboard();
ptr_numbers->business[0]='\0';
}

return;
}
void getContact(struct Contact *ptr_contact){
    getName(&ptr_contact->name);
    getAddress(&ptr_contact->address);
    getNumbers(&ptr_contact->numbers);
    
    return;
}





