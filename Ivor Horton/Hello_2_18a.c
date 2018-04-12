//Program 2.18a the tree
#include <stdio.h>

int main()
{
	long double h1,h2,h3;
	long double d1,d2;

	h1 = h2 = h3 = 0L;
	d1 = d2 = 0L;
	
	printf("Please input the height of the man and the taller man (to separate by space):\n");
	scanf("%Lf %Lf",&h1,&h2);
	//printf("%d %d\n",h1,h2);
	
	printf("Please intput the distance of the man to the taller man and the taller man to the tree (to separate by space):\n");
	scanf("%Lf %Lf",&d1,&d2);
	//printf("%d %d\n",d1,d2);
	
	//(h3-h2) / d2 = (h2-h1) / d1;
	h3 = (h2-h1) * d2 / d1 + h2;
	printf("The height of the tree is %.3Lf\n",h3);
	
	return 0;