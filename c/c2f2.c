#include <stdio.h>

int main ()
{
	float c,f;
	float min,max,step;
	
	c=0.0;
	min=0.0;
	max=300.0;
	step=9;
	printf("\'C\t\'F\n");
	while(c<=max)
	{
		f=c*9/5+32;
		printf("%8.2f\t%8.2f\n",c,f);
		c=c+step;
	}
	return 0;
}