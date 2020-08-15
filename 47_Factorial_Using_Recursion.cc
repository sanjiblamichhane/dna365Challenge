/*
Note: 0! = 1  and 1! = 1 
Factorial is not defined for negative number.

*/ 

#include <iostream>
using namespace std;

// prototype
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)* n;
    }
}

int main()
{
    int r;
    r = fact(-1);
    cout<<r<<endl;

    return 0;
}