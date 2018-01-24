#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void)
{       
      
        int x;
        int dayCounter ;
        int lowTemp[10];
        int highTemp[10];
        int day[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int max=0;
        int min=0;
      
        
        
        
        

    printf("---=== IPC Temperature Calculator V2.0 ===---\n");

    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d", &dayCounter);

   while (dayCounter <= 2 || dayCounter >= 11)
   {
        printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
        scanf("%d", &dayCounter);
   }

     printf("\n");
   for ( x = 0; x < dayCounter ; x++)
   {
        printf("Day %d - High: ", day[x]);
        scanf("%d", &highTemp[x]);
        printf("Day %d - Low: ", day[x]);
        scanf("%d", &lowTemp[x]);
   }
   printf("\nDay  Hi  Low\n");
   for ( x = 0; x < dayCounter ; x++)
   {
           printf("%d    %d    %d\n",day[x],highTemp[x],lowTemp[x]);
   }  
   
   
   for ( x = 0; x < dayCounter ; x++){
   
       if (highTemp[max] < highTemp[x]) 
          max = x ;
       if (lowTemp[min] > lowTemp[x]) 
           min = x;
        }
           printf("\nThe highest temperature was %d, on day %d\n",highTemp[max],day[max]);
           printf("The lowest temperature was %d, on day %d\n",lowTemp[min],day[min]);
           
          
           
        
        int n; 
        
        do { printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
        scanf("%d",&n);
            if (n > 4){
                printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
                scanf("%d",&n); 
            } 
            
           
            
            
         {
             if (n<0){
                printf("\nGoodbye!\n");
        return 0;   
         
            }
        float avgSum = 0.0;  
        for ( x = 0; x < n; x++ ){
        float avgOfDay = ( highTemp[x] + lowTemp[x])/2.0;
            avgSum += avgOfDay;
        }
             float totalAverage = avgSum/n; 
             
               

         printf("\nThe average temperature up to day %d is: %.2lf\n",day[n-1],totalAverage); 
            }
            
           
            
        }
        while (n<4 || n>0);
        {  printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
         scanf("%d", &n); }
         
         
return 0;
}
