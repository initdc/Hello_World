#include <stdio.h>

char main()
{
	char c,cn;
	
	cn=0;
	
	while ((c = getchar()) != EOF)
		if (c == '\\')
			++cn;
	printf("%d\n",cn);
}