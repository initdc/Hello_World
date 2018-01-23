#include <stdio.h>

int main()
{
	int q,w,x,p;
	int R[10];
	
	int c,g,nwhite,nother;
	int ngroup[10];
	
	nwhite = nother = 0;
	
	for (g = 0;g < 10;++g)
		ngroup[g] = 0;
	
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ngroup[c-'0'];
		else if (c == '\n' ||c == ' '||c == '\t')
			++nwhite;
		else
			++nother;
	printf("ngroups:");
	for (g = 0;g < 10;++g)
		printf(" %d",ngroup[g]);
	printf(", white space:%d, other:%d\n",nwhite,nother);
	
}