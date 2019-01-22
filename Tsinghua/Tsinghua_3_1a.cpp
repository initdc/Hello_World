#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int CheckIn ();
bool IsPrime (int a);

int main()
{
    int n,cki;
    bool result;

    cout<<"The program judges that a number is prime or not.\n";
    cout<<"Please enter a number that bigger than 2, ";

    cki = CheckIn();
    if(cki == -1)
        return -1;
    else
        n=cki;

    while (n <= 2)
    {
        cout<<"You entered an error number, please retry, ";
        cki = CheckIn();
        if(cki == -1)
            return -1;
        else
            n=cki;
    }

    result = IsPrime(n);

    if(result == true)
        cout<<"Yes, it is prime.\n";
    else
        cout<<"No, it's composite.\n";

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

bool IsPrime (int a)
{
    if(a%2 == 0)
        return false;
    else if(a == 3 )
        return true;
    else
    {
        for(int i=3;i< sqrt(a)+1;i=i+2)
        {
            if(a%i == 0)
                return false;
            else
                return true;
        }
    }
}
