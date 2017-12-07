#include <stdio.h>

#define ON 1
#define OFF 0

int main ()
{
	int c,nl,nw,nc,state;
	
	nl = nw = nc = 0;
	
	while ((c=getchar()) != EOF)
	{
		/*if (c != '\n'||c != ' '||c != '\t')
			putchar(c);
		else putchar('\n');*/
		putchar(c);
		if (c == '\n')
			++nl;
		if (c == '\n'||c == ' '||c == '\t')
		{
			state = OFF;
			putchar('\n');
		}
		else if (state == OFF)
		{
			state = ON;
			++nw;
			//putchar('\n');
		}
		++nc;
	}
	printf("C:%d L:%d W:%d\n",nc,nl,nw);
}