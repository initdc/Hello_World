//Program 3.4 Converting uppercase to lowercase
#include <stdio.h>

int main()
{
	char letter = 0;
	printf("Enter an uppercase letter:\n");
	scanf("%c",&letter);
	if(letter >= 'A'&letter <= 'Z')
	{
		letter = letter - 'A' + 'a';
		printf("You entered an uppercase %c.\n",letter);
	}
	else
		printf("Please check your shift button, I just want a capital letter.\n");
	
	return 0;
}