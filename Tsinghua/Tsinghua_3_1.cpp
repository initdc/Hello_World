#include <iostream>

using namespace std;

bool IsPrime (int a);

int main()
{
    double n;
    bool result;
    cout<<"The program judges that a number is prime or not.\n";
    cout<<"Please enter a number that bigger than 2: ";
    cin >>n;
    while (n <= 2)
    {
        cout<<"You entered an error number, please retry: ";
        cin >>n;
    }

    result = IsPrime((int)n);

    if(result == true)
        cout<<"Yes, it's prime.\n";
    else
        cout<<"No, it is not prime.\n";

}

bool IsPrime (int a)
{
    if(a%2 == 0)
        return false;
    else if(a == 3 )
        return true;
    else
    {
        for(int i=3;i<a;i=i+2)
        {
            if(a%i == 0)
                return false;
            else
                return true;
        }
    }
}
