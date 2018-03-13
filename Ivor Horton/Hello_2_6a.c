//Program 2.6a Expenditure
#include <stdio.h>

int main(void)
{
	int bank_saving,bank_expend,bank_left;
	int month,times;
	int saving[] = {3500,3500,4000,4000,4000,4000,4000,4000,4000,4000,4000,8400,3800};
	int expend[] = {1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
	
	bank_saving = bank_expend = bank_left = 0;
	
	for(times = 0,month = 1;times < 13;times = times + 1,month = month +1)
	{
		if(times%12 == 0)
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