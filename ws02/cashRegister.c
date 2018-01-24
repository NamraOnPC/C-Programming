#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	double amount;
	double GST;
	int Loonies;
	int Quarters;
	int Dimes;
	int remain;
	int Nickels;
	int Pennies;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	GST = (amount * .13) + .005;

	remain = (amount + GST) * 100;

	printf("GST: %.2lf\n", GST);
	printf("Balance owing: $%.2lf\n", (float)remain / 100);

	Loonies = remain / 100;
	remain = remain % 100;

	printf("Loonies required: %d", Loonies);
	printf(", balance owing $%.2lf\n", (float)remain / 100);

	Quarters = remain / 25;
	remain = remain % 25;

	printf("Quarters required: %d", Quarters);
	printf(", balance owing $%.2lf\n", (float)remain / 100);

	Dimes = remain / 10;
	remain = remain % 10;

	printf("Dimes required: %d", Dimes);
	printf(", balance owing $%.2lf\n", (float)remain / 100);

	Nickels = remain / 5;
	remain = remain % 5;

	printf("Nickels required: %d", Nickels);
	printf(", balance owing $%.2lf\n", (float)remain / 100);

	Pennies = remain / 1;
	remain = remain % 1;

	printf("Pennies required: %d", Pennies);
	printf(", balance owing $%.2lf\n", (float)remain / 100);



	return 0;


}
