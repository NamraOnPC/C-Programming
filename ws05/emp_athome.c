

// Name :- Namra Fanse
// Student Number :- 112219175
// Email :- nrfanse@myseneca.ca
// Workshop :- 5
// Section - IPC144SXX
// Date :- 11/10/2017
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 4 // Define Number of Employees "SIZE" to be 2


struct empData {
    int identificationNumber;
    int Age;
    double Salary;
};// Declare Struct Employee


/* main program */
int main(void) {
        
        
        int x=0;
        int i=0;
        int cnt =0;
        int option = 0;
        int find = 0;
        printf("---=== EMPLOYEE DATA ===---\n");

       struct empData 
       emp[SIZE] = {{0,0,0.0}};   // Declare a struct Employee array "emp" with SIZE elements
        // and initialize all elements to zero

        do {

                // Print the option list
                printf("\n");
                printf("1. Display Employee Information\n");
                printf("2. Add Employee\n");
                printf("3. Update Employee Salary\n");
                printf("4. Remove Employee\n");
                printf("0. Exit\n\n");
                printf("Please select from the above options: ");

                // Capture input to option variable
                scanf("%d",&option);
                printf("\n");

                switch (option) {
                case 0:
                printf("Exiting Employee Data Program. Good Bye!!!\n");// Exit the program

                        break;
                case 1: // Display Employee Data
                                // @IN-LAB

                        printf("EMP ID  EMP AGE EMP SALARY\n");
                        printf("======  ======= ==========\n");

                        for ( cnt = 0; cnt < SIZE ; cnt++ ){
                            if (emp[cnt].identificationNumber > 0)
                    printf("%6d%9d%11.2f\n",emp[cnt].identificationNumber,emp[cnt].Age, emp[cnt].Salary  );
                   // printf("\n"); 
                    
                        }// Use "%6d%9d%11.2lf" formatting in a
                        // printf statement to display
                        // employee id, age and salary of
                        // all  employees using a loop construct

                        // The loop construct will be run for SIZE times
                        // and will only display Employee data
                        // where the EmployeeID is > 0

                        break;
                case 2: // Adding Employee
                                // @IN-LAB

                if (cnt < SIZE){
                for (i = 0 ; i < SIZE; i++){
                        printf("Adding Employee\n");
                        printf("===============\n");

                        printf("Enter Employee ID: ");
                        scanf("%d", &emp[cnt].identificationNumber);
                        printf("Enter Employee Age: ");
                        scanf("%d", &emp[cnt].Age);
                        printf("Enter Employee Salary: ");
                        scanf("%lf", &emp[cnt].Salary);

                cnt++;
                break;
                }
                }
                else{
                     printf("Adding Employee\n");
                     printf("===============\n");
                     printf("ERROR!!! Maximum Number of Employees Reached\n");

                }
                    break;
                        // Check for limits on the array and add employee
                        // data accordingly.

                case 3: //Updating Employee Salary 
                
                
                do{
                    
                       printf("Update Employee Salary\n");
                       printf("======================\n");
                       
                       printf("Enter Employee ID: ");
                       scanf("%d",&x);
                       
                       for (cnt = 0; cnt < SIZE; cnt++){
                           if (x == emp[cnt].identificationNumber){
                               printf("The current salary is %.2f\n",emp[cnt].Salary);
                               find = 1;
                               break;
                            
                           }
                       }
                       
                       }while(!find);
                       
                       
                    printf("Enter Employee New Salary: ");
                    scanf("%lf", &emp[cnt].Salary);
                    break;
                
                
                
                
                break;
                
                case 4: //Removing Employee 
                
                    do{
                    
                       printf("Remove Employee\n");
                       printf("===============\n");
                       
                       printf("Enter Employee ID: ");
                       scanf("%d",&x);
                       
                       for (cnt = 0; cnt < SIZE; cnt++){
                           if (x == emp[cnt].identificationNumber){
                               printf("Employee %d will be removed\n",x);
                               find = 1; 
                               emp[cnt].identificationNumber = 0;
                               emp[cnt].Age = 0;
                               emp[cnt].Salary = 0;
                               cnt--; 
                               
                               break;
                            
                           }
                       }
                       
                       }while(!find);
                
                break;
                
                                  default:
                        printf("ERROR: Incorrect Option: Try Again\n");
                }

        } while (option != 0);


        return 0;
}






