// Name: NAMRA FANSE
// Student Number: 112219175		
// Email: nrfanse@myseneca.ca
// Section: IPC144SXX
// Workshop:3 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMS 4 
int main(void)
{
	int dayCounter;
	float lowTemp;
	float highTemp;
	float totalLow = 0;
	float totalHigh = 0;
	double average;
	int max=0;
	int min=0;
	int maxday;
	int minday;

	printf("---=== IPC Temperature Analyzer ===---");

	for (dayCounter = 1; dayCounter <= 4; dayCounter++)
	{
		printf("\nEnter the high value for day %d: ", dayCounter);
		scanf("%f", &highTemp);
		printf("\nEnter the low value for day %d: ", dayCounter);
        	scanf("%f", &lowTemp);

		while (highTemp > 40 || lowTemp < -40 || highTemp < lowTemp)
		{
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\nEnter the high value for day %d: ", dayCounter);
			scanf("%f", &highTemp);
			printf("\nEnter the low value for day %d: ", dayCounter);
			scanf("%f", &lowTemp);
		}
		totalLow += lowTemp;
		totalHigh += highTemp;
                if (highTemp>max) {
	           max = highTemp;
	           maxday = dayCounter;
                }
                if (lowTemp<min ) {
	        min = lowTemp;
	        minday = dayCounter;
        }
	} 
average = (float)(totalHigh + totalLow) / (NUMS * 2);

	printf("\nThe average (mean) temperature was: %.2lf\n", average);
        printf("The highest temperature was %d, on day %d\n",max,maxday);
	printf("The lowest temperature was %d, on day %d\n",min,minday);

	return 0;
}



