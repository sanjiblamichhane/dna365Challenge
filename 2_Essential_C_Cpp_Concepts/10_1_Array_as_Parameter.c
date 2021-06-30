//8/15/20
// This example shows how a function can return an array
#include <stdio.h>

int [] fun(int n) //returns an array -- square brackets
{
    int *P;
    P = (int *)malloc (n*sizeOf(int));
    return(P); 
}
int main()
{
    int *A;
    A = fun(5);
}