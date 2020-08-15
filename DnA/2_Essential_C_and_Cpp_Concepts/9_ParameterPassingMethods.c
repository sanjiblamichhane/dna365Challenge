// PASS BY VALUE
//swapping of two numbers
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    printf("%d %d", a, b);
}
// any changes done in fomal parameters are not reflected in actual parameters.
// we can use pass by value when we don't have to modify actual parameters

 