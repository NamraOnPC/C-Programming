#define _CRT_SECURE_NO_WARNINGS

#include "contacts.h"

#include <stdio.h> 

int main (void) {
    struct Name name = { {0},{0},{0} };
     
    struct Address address = { 0,{0},0,{0},{0}};
    
    struct Numbers numbers = { {0},{0},{0} };
   

    printf("Contact Management System\n");
	printf("-------------------------\n");


   getName(&name);
   getAddress(&address);
   getNumbers(&numbers);
    
	//Display Contact Summary Details
    printf("\nContact Details\n");
    printf("---------------\n");
    printf("Name Details\n");
    
    printf("First name: %s\n", name.firstName);
    printf("Middle initial(s): %s\n", name.middleInitial);
    printf("Last name: %s\n\n", name.lastName);
    printf("Address Details\n");
    printf("Street number: %d\n", address.streetNumber);
    printf("Street name: %s\n", address.street);
    printf("Apartment: %d\n", address.apartmentNumber);
    printf("Postal code: %s\n", address.postalCode);
    printf("City: %s\n\n", address.city);
    printf("Phone Numbers:\n");
    printf("Cell phone number: %s\n", numbers.cell);
    printf("Home phone number: %s\n",numbers.home);
    printf("Business phone number: %s\n\n",numbers.business);
    
	//Display Completion message 

    printf("Structure test for Contact using functions done!\n");
    
    return 0;
    
}



