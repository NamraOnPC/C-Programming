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



void printSectionHeader(const char*);

int main(void)
{
    ContactManagerSystem();

    return 0;
}

// Display specified test section header
void printSectionHeader(const char* testName)
{
    printf("\n");
    printf("------------------------------------------\n");
    printf("Testing: %s\n", testName);
    printf("------------------------------------------\n");
}