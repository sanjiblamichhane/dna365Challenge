#include <iostream>
using namespace std;


//prototype
int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x, y, z;
    cin>>x>>endl;
    cin>>endl;
    cin>>z>>endl;
    
    z = add(x, y );
    cout<<z<<endl;
    return 0;
}