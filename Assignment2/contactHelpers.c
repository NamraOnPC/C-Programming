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

#include <string.h>

#include "contactHelpers.h"

#define MAXCONTACTS 5

void clearKeyboard(void)
{
    while (getchar() != '\n'); 
    
}

void pause(void)
{   
    
    printf("(Press Enter to Continue)" );
    clearKeyboard();
}

int getInt(void)
{
    char NL = 0;
    int value;
    
    do{
    scanf("%d%c", &value , &NL);
    if (NL != '\n'){
    printf("*** INVALID INTEGER *** <Please enter an integer>: ");
    clearKeyboard();
    }
    } while (NL != '\n');
    return value;
}


int getIntInRange(int lowLimit, int upLimit)
{
  int value;
  do{
    value = getInt();
    if (value < lowLimit || value > upLimit){
    printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", lowLimit,upLimit);
    }
  } while (value < lowLimit || value > upLimit);
  return value;
}

int yes(void)
{
    char CH;
    char NL = 0;
    do {
    scanf("%c%c", &CH , &NL);
    if(!(CH == 'y' || CH == 'Y' || CH == 'n' || CH == 'N') || NL != '\n') {
    printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
    if (NL != '\n') clearKeyboard();
    }
  } while (!(CH == 'y' || CH == 'Y' || CH == 'n' || CH == 'N') || NL != '\n');
    if (NL != '\n') clearKeyboard();
    return CH == 'y' || CH == 'Y';
}

int menu(void)
{   
    int option;
    printf("Contact Management System\n");
    printf("-------------------------\n");
    printf("1. Display contacts\n");
    printf("2. Add a contact\n");
    printf("3. Update a contact\n");
    printf("4. Delete a contact\n");
    printf("5. Search contacts by cell phone number\n");
    printf("6. Sort contacts by cell phone number\n");
    printf("0. Exit\n\n");
    printf("Select an option:> ");
    option=getIntInRange(0,6);
    printf("\n");
    return option;
}

void ContactManagerSystem(void){  
struct Contact contacts[MAXCONTACTS] = 
    { { { "Rick", {'\0'}, "Grimes" },
        { 11, "Trailer Park", 0, "A7A 2J2", "King City" },
        { "4161112222", "4162223333", "4163334444" } },
        {
            { "Maggie", "R.", "Greene" },
            { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
            { "9051112222", "9052223333", "9053334444" } },
        {
            { "Morgan", "A.", "Jones" },
            { 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
            { "7051112222", "7052223333", "7053334444" } },
        {
            { "Sasha", {'\0'}, "Williams" },
            { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
            { "9052223333", "9052223333", "9054445555" } },
    };
    int foo;
    int done=0;
    
    do{
    foo=menu( );
    if(foo==1){
    displayContacts(contacts,MAXCONTACTS);
    pause();
    printf("\n");
    }
    else if(foo==2){
    addContact(contacts,MAXCONTACTS);
    pause();
    printf("\n");
    }
    else if(foo==3){
    updateContact(contacts,MAXCONTACTS);
    pause();
    printf("\n");
    }
    else if(foo==4){
    deleteContact(contacts,MAXCONTACTS);
    pause();
    printf("\n");
    }
    else if(foo==5){
    searchContacts(contacts,MAXCONTACTS);
    pause();
    printf("\n");
    }
    else if(foo==6){
    sortContacts(contacts,MAXCONTACTS);
    pause();
    printf("\n");
    }
    else if(foo==0){
    printf("Exit the program? (Y)es/(N)o: ");
    done=yes();
    printf("\n");
    if(done==1){
    printf("Contact Management System: terminated\n");
    }
    }
    else{
    done=0;
    }
    }while(done==0);
}
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;
    
    while (needInput == 1) {
    scanf("%10s", telNum);
    clearKeyboard();
    
    if (strlen(telNum) == 10)
    needInput = 0;
    else 
    printf("Enter a 10-digit phone number: ");
    }    
}

int findContactIndex(const struct Contact contacts[], int measure , const char cellNum[])
{  
   int i;
   int result;
   int compare;
   int dontStop=1;
    
   for(i=0; i<measure&&dontStop; i++){
    compare = strcmp(contacts[i].numbers.cell, cellNum);
    if(compare==0){
    result=i;
    dontStop=0;
    }else{
    result = -1;    
    }
   }
   
    return result;
}
    
void displayContactHeader(void) {
    
    printf("+-----------------------------------------------------------------------------+\n");
    printf("|                              Contacts Listing                               |\n");
    printf("+-----------------------------------------------------------------------------+\n");
    
}

void displayContactFooter(int totalContacts) {

    printf("+-----------------------------------------------------------------------------+\n");
    if (totalContacts > 0)
    {
    printf("Total contacts: %d\n\n", totalContacts);
    }
}

void displayContact(const struct Contact *contact) {
if(contact->name.middleInitial[0]=='\0' && contact->name.firstName[0] != '\0')
{
printf(" %s %s\n",contact->name.firstName, contact->name.lastName);
}
else if(contact->name.middleInitial[0] != '\0' && contact->name.firstName[0] != '\0')
{
printf(" %s %s %s\n",contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
}
if(contact->numbers.cell[0] != '\0') 
{
printf("    C: %-10s   H: %-10s   B: %-10s\n",contact->numbers.cell, contact->numbers.home, contact->numbers.business);
}
if(contact->address.apartmentNumber > 0 && contact->address.street[0] != '\0')
{
printf("       %d %s, Apt# %d, %s, %s\n",contact->address.streetNumber,contact->address.street,contact->address.apartmentNumber,contact->address.city,contact->address.postalCode);
}
else if (contact->address.apartmentNumber <= 0 && contact->address.street[0] != '\0')
{
printf("       %d %s, %s, %s\n",contact->address.streetNumber, contact->address.street,contact->address.city,contact->address.postalCode);
}

    
}

void displayContacts(const struct Contact contacts[], int noOfContacts) {
    
int totalContacts = 0;
int i;
    
displayContactHeader();
for (i=0; i<noOfContacts; i++) {
   if(contacts[i].numbers.cell[0] != '\0') 
    {
    displayContact(&contacts[i]);
    totalContacts++;
    }
}
    displayContactFooter(totalContacts);
}

void searchContacts(const struct Contact contacts[], int noOfContacts) {

char cell[10];
int result;

printf("Enter the cell number for the contact: ");
getTenDigitPhone(cell);

result = findContactIndex(contacts,noOfContacts,cell);
if(result==-1)
{
    printf("*** Contact NOT FOUND ***\n");
    
}
else
{
    printf("\n");
    displayContact(&contacts[result]);
    printf("\n");
}

}

void addContact(struct Contact contacts[], int dimensions) {

int i;
int noOfContacts = 0;
int done=1;

for (i = 0; i < dimensions&&done; i++) {
    if(strlen(contacts[i].numbers.cell) > 0){
    noOfContacts++;     
    }
if(strlen(contacts[i].numbers.cell) == 0){
    getContact(&contacts[i]);
    printf("--- New contact added! ---\n");
    done=0;
}
else if(noOfContacts == dimensions){
printf("*** ERROR: The contact list is full! ***\n");
}
}
}
void updateContact(struct Contact contacts[], int dimensions){
    char cell[10];
    int outcome;
    int choice;
    int choice2;
    int choice3;
    
printf("Enter the cell number for the contact: ");
getTenDigitPhone(cell);
outcome = findContactIndex(contacts,dimensions,cell);

if(outcome==-1){
    printf("*** Contact NOT FOUND ***\n");
}else{
    printf("\n");
    printf("Contact found:\n");
    displayContact(&contacts[outcome]);
    printf("\n");
    printf("Do you want to update the name? (y or n): ");
    choice = yes();
    if(choice==1){
    getName(&contacts[outcome].name);    
    }
    clearKeyboard();
    printf("Do you want to update the address? (y or n): ");
    choice2=yes();
    if (choice2==1){
    getAddress(&contacts[outcome].address);    
    }
    clearKeyboard();
    printf("Do you want to update the numbers? (y or n): ");
    choice3 = yes();
    if (choice3==1){
    getNumbers(&contacts[outcome].numbers);    
    }
    printf("--- Contact Updated! ---\n");
}
}

void deleteContact(struct Contact contacts[], int dimensions) {
    char cell[10];
    int outcome;
    int choice;
    
    printf("Enter the cell number for the contact: ");
    getTenDigitPhone(cell);
    outcome = findContactIndex(contacts,dimensions,cell);
    
    if(outcome==-1){
    printf("*** Contact NOT FOUND ***\n");
    }else 
    {
    printf("\n");
    printf("Contact found:\n");
    displayContact(&contacts[outcome]);
    printf("\n");
    printf("CONFIRM: Delete this contact? (y or n): ");
    choice=yes();
    if (choice==1){
    contacts[outcome].numbers.cell[0] = '\0';
    contacts[outcome].name.firstName[0] = '\0';
    contacts[outcome].address.street[0] = '\0';
    printf("--- Contact deleted! ---\n");
    }
}
}

void sortContacts(struct Contact contacts[], int size){
    
    printf("<<< Feature to sort is unavailable >>>\n");
    
}





