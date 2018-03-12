//Program 2.6 Cookies and Kids
#include <stdio.h>
int main(void)
{
	int cookies = 45;
	int kids = 7;
	int cookies_per_kid = 0;
	int cookies_left = 0;
	
	cookies_per_kid = cookies / kids;
	cookies_left = cookies % kids;
	printf("Every kid can get %d cookies,",cookies_per_kid);
	printf("here is %d cookies left.\n",cookies_left);
	
	return 0;
}