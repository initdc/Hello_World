//Program 3.5A Testing letters in a better way
#include <stdio.h>
#include <ctype.h>

int main()
{
	char letter = 0;
	printf("Enter an uppercase letter:");
	scanf("%c",&letter);
	
	if(isalpha(letter) && isupper(letter))
		printf("You entered an uppercase letter %c.\n",tolower(letter));
	else
		printf("You didn't an uppercase letter.\n");
}