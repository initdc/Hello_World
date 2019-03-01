//zaizhou3
//language: C++

#include <iostream>
#include <vector>

using namespace std;

void fact(int num, int div, vector<int>* result)
{
    if(div == num){
        result->push_back(div);
        return;
    }
    if(num % div == 0){
        result->push_back(div);
        fact(num / div, div, result);
    } else {
        fact(num, div + 1, result);
    }
}

int main()
{
    vector<int>* result = new vector<int>;
    fact(299, 2, result);
    for(int I = 0; I < result->size(); I++){
        cout << (*result)[I] << ", ";
    }
    cout << endl;
}