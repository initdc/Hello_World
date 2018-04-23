//Program 3.1 A simple example of if statement
#include <stdio.h>

int main (void)
{
	int number = 0;
	
	printf("\nEnter a integer bettwen 1 and 10: ");
	scanf("%d",&number);
	
	if(number > 5)
		printf("You entered the number %d is greater than 5.\n",number);
	if(number < 6)
		printf("You entered the number %d is lower than 6.\n",number);
	return 0;
}