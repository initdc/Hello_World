//Program 3.4 Converting uppercase to lowercase
#include <stdio.h>

int main()
{
	char letter = 0;
	printf("Enter an uppercase letter:");
	scanf("%c",&letter);
	if(letter >= 'A')
	{
		if(letter <= 'Z')
		{
			letter = letter + 32;
			printf("You entered an uppercase %c.\n",letter);
		}
		else
		{
			if(letter >= 'a')
			{
				if(letter <= 'z')
					printf("Try using the shift key, I want a capital letter.\n");
			}
			else
				printf("[i] You didn't enter a letter.%d\n",letter);
		}
	}
	else
		printf("[o] You didn't enter a letter.%d\n",letter);
	
	return 0;
}