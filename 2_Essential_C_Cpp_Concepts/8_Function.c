//Functions == modules
//monolitic programming == everything in one place
//modular programmig  == procedural programming
#include <stdio.h>

//prototype
int add (int a, int b)
{
    int c;
    c = a+b;
    return (c);
}
int main()
{
    int x, y, z;
    x =10; 
    y = 5;

    z = add(x, y);
    printf("Sum is %d\n", z);
    }