#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 9

main()
{
	float C,F;
	
	printf("The \'C to \'F program\n");
	printf("\'C\t\'F\n");
	
	for(C=MIN;C<=MAX;C=C+STEP)
		printf("%3.0f\t%6.2f\n",C,C*9/5+32);
		
	return 0;
}