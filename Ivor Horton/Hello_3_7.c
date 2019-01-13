//Program 3.7 A confused recruitting policy
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	bool interview = false;
	int college = 0;
	int age = 0;
	int subject = 0;

	printf("\nWhat college? 1 for Harvard, 2 for Yale, 3 for others: ");
	scanf("%d",&college);
	printf("\nWhat subject? 1 for chemisty, 2 for economics, 3 for others: ");
	scanf("%d",&subject);
	printf("\nHow old is the applicant? ");
	scanf("%d",&age);

	interview = ((age >25 && subject ==1 && college != 2) || (college == 2 && subject == 1 ) || (age < 28 && college == 1 && subject == 2) || (age > 25 && college ==2 && subject != 1));
	if(interview)
		printf("\n-- Good luck,you get an interview --\n");
	else
		printf("\n-- Reject,sorry for that --\n");
}