#program for call by value
#include<stdio.h>
void swapx(int x, int y);
void main()
{
    int a = 10, b = 20; 
    swapx(a, b); 
    printf("In the Caller:\na = %d b = %d\n", a, b);
}
void swapx(int x, int y) 
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("Inside Function:\nx = %d y = %d\n", x, y);
}

