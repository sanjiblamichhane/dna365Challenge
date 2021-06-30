#include <stdio.h>

//arrays cannot be passed by values at all
void fun(int A[], int n)
// void fun(int *A, int n) 
{
    int i;
    //print all elements of array
    for(i= 0; i<n; i++)
    {
        printf("%d", A[i]);  
    }
}
int main()
{
    int A[5] = {2,4,6,8,10};
    fun(A,5);
}