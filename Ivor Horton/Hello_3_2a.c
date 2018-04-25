//Program 3.2a Using if statements to decide a discount (shorter version)
#include <stdio.h>

int main(void)
{
	const long long unit_price = 350;
	long long quantity = 0;
	
	printf("\nEnter the number that you want to buy:\n");
	scanf("%Ld",&quantity);
	
	long long discount = 5;
	if(quantity > 10)
		printf("The price for %Ld is %Ld.%Ld\n",quantity,unit_price * quantity * (100 - discount) / 100 / 100,(unit_price * quantity * (100 - discount) / 100) % 100);
	else
		printf("The price for %Ld is %Ld.%Ld\n",quantity,unit_price * quantity / 100,(unit_price * quantity) % 100);
	
	return 0;
}