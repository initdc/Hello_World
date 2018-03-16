//Program 2.13 Choosing the correct type for the job 1
#include <stdio.h>

int main(void)
{
	const float Revenue_per_150 = 4.5f;
	short JanSold = 23500;
	short FebSold = 19300;
	short MarSold = 21600;
	float RevQuarter = 0.0f;
	
	/*unsigned*/ short QuarterSold = JanSold + FebSold + MarSold;
	printf("stock sold in\nJan %d\nFeb %d\nFeb %d\n",JanSold,FebSold,MarSold);
	printf("Total stock sold in first quarter: %d\n",QuarterSold);
	
	RevQuarter = QuarterSold / 150 * Revenue_per_150;
	printf("Sales revenue this quarter is $ %.2f\n",RevQuarter);
	
	return 0;
}