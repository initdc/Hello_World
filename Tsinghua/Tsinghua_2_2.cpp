#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int leng,heig;
	
	cout<< "Please enter the length of the bottom line of triangle: ";
	cin >> leng;
	if(leng%2 == 0)
	{
		heig = leng /2;
		leng = leng -1;
	}
	else
		heig = (leng+1) /2;
	
	for(int i=0;i< heig;i++)
	{
		for(int j=heig-leng;j<heig;j++)
		{
			if(abs(j)-i>0)
				cout<<" ";
			else
				cout<<"*";
		}
		cout<<endl;
	}
}