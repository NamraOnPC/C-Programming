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
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#include "contacts.h"

void clearKeyboard(void);

void pause(void);

int getInt(void);

int getIntInRange(int lowLimit,int upLimit);

int yes(void);

int menu(void);

void ContactManagerSystem(void);

void getTenDigitPhone(char[]);

int findContactIndex(const struct Contact contacts[], int measure , const char cellNum[]);

void displayContactHeader(void);

void displayContactFooter(int);

void displayContact(const struct Contact *contact);

void displayContacts(const struct Contact contacts[], int noOfContacts);

void searchContacts(const struct Contact contacts[], int noOfContacts);

void addContact(struct Contact contacts[], int dimensions);

void updateContact(struct Contact contacts[], int size);

void deleteContact(struct Contact contacts[], int size);

void sortContacts(struct Contact contacts[],int size);

