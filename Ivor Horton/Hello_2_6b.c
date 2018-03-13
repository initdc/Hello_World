//Program 2.6b Salary
#include <stdio.h>

int main(void)
{
	int bank_saving,bank_expend,bank_left;
	int month,times,s,e;
	int saving[128] = {3500,3500,4000,4000,4000,4000,4000,8400,3800};
	int expend[128] = {1400,1500,1600,1700,1800,1900,2000,2100,2200};
	
	bank_saving = bank_expend = bank_left = 0;
	
	for(s = 127;s >= 0;s = s-1)
	{
		if((saving[s] %100) != 0)
		saving[s] = 0;
	}
	
	for(e = 127;e >= 0; e = e-1)
	{
		if((expend[e] %100) !=0)
		expend[e] = 0;
	}
	
	for(times = 0,month = 6;times < 9;times = times + 1,month = month +1)
	{
		if((month-1)%12 == 0)
			month = 1;
		
		printf("Hi, Mr. Lu:\n\tThis is your bill for %d month:\n",month);
		bank_saving = bank_saving + saving[times];
		printf("\tYou have already deposited %d dollars to your account.\n",bank_saving);
		bank_expend = bank_expend + expend[times];
		printf("\tYou have already spent %d dollars from your account.\n",bank_expend);
		bank_left = bank_saving - bank_expend;
		printf("\tThere is still %d dollars in your account.\n\tHave a good day!\n\n",bank_left);
	}
	return 0;
}