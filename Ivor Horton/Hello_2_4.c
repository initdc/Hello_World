//Program 2.4 Simple Calculations
#include <stdio.h>
int main(void)
{
	int total_pets;
	int dogs;
	int cats;
	int dragons;
	int others;
	
	//Store the number of each kinds of pet
	dogs = 1;
	cats = 3;
	dragons = 5;
	others = 2;
	
	//Calculate the total number of pets
	total_pets = dogs + cats + dragons + others;
	
	//Display some output
	printf("We have %d pets in total.\n",total_pets);	//Output the result
	return 0;
}