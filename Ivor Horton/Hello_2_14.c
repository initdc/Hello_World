//Program 2.14 Choosing the correct type for the job 2
#include <stdio.h>

int main(void)
{
	const float Revenue_per_150 = 4.5f;
	unsigned short JanSold = 23500;
	unsigned short FebSold = 19300;
	unsigned short MarSold = 21600;
	float RevQuarter = 0;
	
	unsigned long QuarterSold = JanSold + FebSold + MarSold;
	printf("stock sold in\nJan %d\nFeb %d\nFeb %d\n",JanSold,FebSold,MarSold);
	printf("Total stock sold in first quarter: %ld\n",QuarterSold);
	
	//RevQuarter = QuarterSold / 150 * Revenue_per_150;
	//RevQuarter = Revenue_per_150 * QuarterSold / 150;
	RevQuarter = (float)QuarterSold / 150 * Revenue_per_150;
	printf("Sales revenue this quarter is $ %.2f\n",RevQuarter);
	
	return 0;
}