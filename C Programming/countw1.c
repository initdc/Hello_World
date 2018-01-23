#include <stdio.h>

#define IN 1
#define OUT 0

main ()
{
	int c,nl,nw,nc,state;
	
	nl = nw = nc = 0;
	
	while ((c = getchar()) != EOF)
	{
		++nc;

		/*putchar('\n');
		printf("%c" "\n",c);*/
		
		if (c == '\n')
			++nl;
		if (c == ' '||c == '\t' ||c == '\n')
		{
			state = OUT;
			putchar(c);
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("L:%d W:%d C:%d\n",nl,nw,nc);
}