//Program 3.3 Using nested ifs to analyze numbers
#include <stdio.h>
#include <limits.h>

int main(void)
{
	long test = 0L;
	printf("Enter a integer less than %ld: ",LONG_MAX);
	scanf("%ld",&test);
	
	if(test % 2 == 0L)
	{
		printf("The number %ld is even.\n",test);
		if((test/2) % 2 == 0L)
			printf("Half of %ld is also even.\nThat is interesting, isn't?\n",test);
	}
	else
		printf("The number %ld is odd.\n",test);
	
	return 0;
}