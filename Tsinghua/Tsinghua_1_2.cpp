#include <iostream>
using namespace std;

int main()
{
	double saving,interest;
	double whole_s,whole_i;
	
	cout<< "How much monney will you save to bank:";
	cin >> saving;
	cout<< "How much is the interest now(%): ";
	cin >> interest;
	whole_i = saving * interest / 100;
	whole_s = saving + whole_i;
	cout<< "Your interest will be: "<<whole_i<<" ,and your whole year saving will be: "<<whole_s<<endl;
	
	return 0;
}