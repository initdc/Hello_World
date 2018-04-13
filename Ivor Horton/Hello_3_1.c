//Program 3.1 if 
#include <stdio.h>

int main()
{
	int num = 0;
	printf("Please input a number between 1 and 10:\n");
	scanf("%d",&num);
	
	if(num > 5)
		printf("You entered %d which is greater than 5.\n",num);
	
	if(num < 6)
		printf("You entered %d which is less than 6.\n",num);
}