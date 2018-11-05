//Program 3.5 Testing letters in a better way
#include <stdio.h>

int main()
{
	char letter = 0;
	printf("Enter an uppercase letter:");
	scanf("%c",&letter);
	
	if( letter >= 'A' && letter <= 'Z')
	{
		letter += 'a'-'A';
		printf("You entered an uppercase letter %c.\n",letter);
	}
	else
		printf("You didn't an uppercase letter.\n");
}