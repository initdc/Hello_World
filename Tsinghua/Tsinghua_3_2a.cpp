#include <iostream>
#include <cstdio>

using namespace std;

int CheckIn ();
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int cki,a,b,ng,nl;
    cout<<"This program shows the GCD and LCM of 2 numbers."<<endl;

    cout<<"Please enter the first number: ";
    
    cki = CheckIn();
    if(cki == -1)
        return -1;
    else
        a=cki;

    while (a < 0)
    {
        cout<<"You entered an error number, please retry: ";
        cki = CheckIn();
        if(cki == -1)
            return -1;
        else
            a=cki;
    }

    cout<<"and the second number: ";
    cki = CheckIn();
    if(cki == -1)
        return -1;
    else
        b=cki;

    while (b < 0)
    {
        cout<<"You entered an error number, please retry: ";
        cki = CheckIn();
        if(cki == -1)
            return -1;
        else
            b=cki;
    }

    ng = gcd( a, b);
    nl = lcm( a, b);
    cout<<"-------------------------"<<endl;
    cout<<"The GCD of "<<a<<" and "<<b<<" is "<< ng <<endl;
    cout<<"The LCM of "<<a<<" and "<<b<<" is "<<nl <<endl;
}

int CheckIn ()
{
    int a = 0;
    printf("[Check Input]: ");
    int x = scanf("%d",&a);
    if(x != 1)
        return -1;
    else
        return a;
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
