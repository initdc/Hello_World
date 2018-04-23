//Program 3.2 Using if statements to decide a discount
#include <stdio.h>

int main(void)
{
	const long double unit_price = 3.50;
	long long quantity = 0;
	printf("\nEnter the number you want to buy:\n");
	scanf("%Ld",&quantity);
	
	long double total = 0.0;
	if(quantity > 10)
		total = 0.95 * unit_price * quantity;
	else
		total = unit_price * quantity;
	printf("The price for %Ld is %.2Lf\n",quantity,total);
	
	return 0;
}