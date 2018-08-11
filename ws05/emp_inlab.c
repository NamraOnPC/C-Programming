
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 2 // Define Number of Employees "SIZE" to be 2


struct empData {
    int identificationNumber;
    int Age;
    double Salary;
};// Declare Struct Employee


/* main program */
int main(void) {

        int i=0;
        int cnt =0;
        int option = 0;
        printf("---=== EMPLOYEE DATA ===---\n");
		
       struct empData
       emp[SIZE] = {{0,0,0.0}};

          // Declare a struct Employee array "emp" with SIZE elements
	// and initialize all elements to zero

        do {

                // Print the option list
                printf("\n");
                printf("1. Display Employee Information\n");
                printf("2. Add Employee\n");
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
                    printf("%6d%9d   %.2f",emp[cnt].identificationNumber,emp[cnt].Age, emp[cnt].Salary  );   
                    printf("\n");
                            
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
                        
                        // Check for limits on the array and add employee
                        // data accordingly.



                        break;
                                  default:
                        printf("ERROR: Incorrect Option: Try Again\n\n");
                }

        } while (option != 0);


        return 0;
}
                         


