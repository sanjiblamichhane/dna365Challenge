#include <stdio.h>

void swap (int *x, int *y) //pointers
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(&a, &b); //addresses of a and b
    printf("%d %d", a, b);
}
//formal parameters must be pointers
//actual parameters should be address
//actual variables are modified 
//suitable mechanism for modifying the actual parameters