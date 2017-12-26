#include <stdio.h>

int main()
{
	int g;
	
	int ngroup[9];
		
	for (g = 1;g < 10;++g)
	{
		ngroup[g] = 1;
		for (;ngroup[g] <= g;++ngroup[g])
		{
			printf("%d*%d=%2d",ngroup[g],g,g*ngroup[g]);
			printf("  ");
		}
		printf("\n");
	}
}