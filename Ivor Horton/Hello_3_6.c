// Program 3.6 Multiple discount levels
#include <stdio.h>

int main()
{
	const double unit_price = 2.99;
	const double discount1 = 0.15;
	const double discount2 = 0.10;
	const double discount3 = 0.05;
	double total_price = 0.0;

	int quantity = 0;
	printf("Enter the number you want to buy:");
	scanf("%d",&quantity);
	char complex = *(quantity>1 ? "s":"");

	total_price = unit_price * quantity * (1- (quantity>50 ? discount1 : (quantity>20 ? discount2: (quantity>10 ? discount3:0.0))));
	printf("The total price of your %d unit%c is %.4f\n",quantity,complex,total_price);
}