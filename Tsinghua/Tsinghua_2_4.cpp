#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	enum WEEKDAY{SUN, MON, TUE, WEN, THU, FRI, SAT};

	int date,i;
	const WEEKDAY date_1 = TUE;
	WEEKDAY weekday;

	/* cout<<"Enter the date: ";
	cin >> date;
	if(date<1 || date > 31)
	{
		cout<<"Date error,please retry"<<endl;
		return 1;
	} */
	date = 1;

	cout<<"Janauary 2019"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Su  Mo  Tu  We  Th  Fr  Sa"<<endl;
	cout<<"--------------------------"<<endl;

	for(i = 0;i <31;i++)
	{
		weekday = WEEKDAY ((date + (int)date_1 - 1)%7);
	
		switch (weekday)
		{
			case SUN:
				if(date == 1 )
					cout<<setw(2)<<date;
				else
					cout<<setw(2)<<date;
				break;
			case MON:
				if(date == 1 )
					cout<<setw(6)<<date;
				else
					cout<<setw(4)<<date;
				break;
			case TUE:
				if(date == 1 )
					cout<<setw(10)<<date;
				else
					cout<<setw(4)<<date;
				break;
			case WEN:
				if(date == 1 )
					cout<<setw(14)<<date;
				else
					cout<<setw(4)<<date;
				break;
			case THU:
				if(date == 1 )
					cout<<setw(18)<<date;
				else
					cout<<setw(4)<<date;
				break;
			case FRI:
				if(date == 1 )
					cout<<setw(22)<<date;
				else
					cout<<setw(4)<<date;
				break;
			case SAT:
				if(date == 1 )
					cout<<setw(26)<<date;
				else
					cout<<setw(4)<<date;
				cout<<endl;
				break;											
		}

		date++;	
	}

	cout<<endl<<"--------------------------"<<endl;

	return 0;
}