#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	enum WEEKDAY{SUN, MON, TUE, WEN, THU, FRI, SAT};

	int date;
	const WEEKDAY date_1 = TUE;
	WEEKDAY what_day;

	cout<<"Enter the date: ";
	cin >> date;
	if(date<1 || date > 31)
	{
		cout<<"Date error, please retry!"<<endl;
		return 1;
	}

	what_day = WEEKDAY ((date + (int)date_1 - 1)%7);
	cout<<"Janauary 2019"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Su  Mo  Tu  We  Th  Fr  Sa"<<endl;
	cout<<"--------------------------"<<endl;
	switch (what_day)
	{
		case SUN:
			cout<<setw(2)<<date;
			break;
		case MON:
			cout<<setw(6)<<date;
			break;
		case TUE:
			cout<<setw(10)<<date;
			break;
		case WEN:
			cout<<setw(14)<<date;
			break;
		case THU:
			cout<<setw(18)<<date;
			break;
		case FRI:
			cout<<setw(22)<<date;
			break;
		case SAT:
			cout<<setw(26)<<date;
			break;											
	}
	cout<<endl<<"--------------------------"<<endl;

	return 0;
}