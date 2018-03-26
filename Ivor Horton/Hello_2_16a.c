//Program 2.16a Using type char and + ('a' - 'A')
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char first = 'A';
	char second = 'B';
	char lest = 'x';
	
	char number = 40;
	char ex1 = first + 2+'a'-'A';
	char ex2 = second - 1+'a'-'A';
	char ex3 = lest + 2-'a'+'A';
	
	printf("Character values  %5c%5c%5c\n",toupper(ex1),ex2,tolower(ex3));
	printf("Numeriacl equivalents %-5d%-5d%-5d\n",ex1,ex2,ex3);
	printf("The number %d is the code for the character %c\n",number,number);
	return 0;
}