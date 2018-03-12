//Program 2.5 Calculations of cookies
#include <stdio.h>
int main(void)
{
	int cookies = 7;
	int cookie_calories = 126;	//calories per cookie	
	int total_eaten = 0;
	int eaten = 2;
	cookies = cookies - eaten;
	total_eaten = total_eaten + eaten;
	printf("I have eaten %d cookies, here is still %d cookies left.\n",total_eaten,cookies);
	eaten = 2;
	cookies = cookies - eaten;
	total_eaten = total_eaten + eaten;
	printf("I have eaten %d cookies, here is only %d cookies left.\n",total_eaten,cookies);
	printf("I have getten %d calories from cookies that I have eaten.\n",total_eaten * cookie_calories);
	
	return 0;
}