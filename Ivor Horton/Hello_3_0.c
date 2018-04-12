//Program 3.0 if
#include <stdio.h>

int main()
{
	int num = 0;
	printf("Please input a number between 1 and 10:\n");
	scanf("%d",&num);
	
	if(num > 5)
		printf("The numeber %d you entered is greater than 5.\n",num);
	
	if(num < 6)
		printf("The number %d you entered is lower than 6.\n",num);
}