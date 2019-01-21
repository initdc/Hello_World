#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    double a,b,ng,nl;
    cout<<"This program shows the GCD and LCM of 2 numbers."<<endl;

    cout<<"Please enter the first number: ";
    cin >>a;
    while (a < 0)
    {
        cout<<"You entered an error number, please retry: ";
        cin >>a;
    }

    cout<<"and the second number: ";
    cin >>b;
    while (b < 0)
    {
        cout<<"You entered an error number, please retry: ";
        cin >>b;
    }

    ng = gcd( (int)a, (int)b);
    nl = lcm( (int)a, (int)b);
    cout<<"-------------------------"<<endl;
    cout<<"The GCD of "<<a<<" and "<<b<<" is "<< ng <<endl;
    cout<<"The LCM of "<<a<<" and "<<b<<" is "<<nl <<endl;
}

int gcd(int a, int b)
{
    int t,i;

    if(a > b)
    {
        t = a;
        a = b;
        b = t;
    }

    if(a == b)
        return a;

    if(b%a == 0)
        return a;
    else
    {
        for(i= a-1;i>0;i--)
        {
            if((b%i == 0)&&(a%i ==0))
                return i;
        }
    }
}

int lcm(int a, int b)
{
    return a*b / gcd(a,b);
}