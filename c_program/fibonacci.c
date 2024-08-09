#include<stdio.h>
void main()
{
    int a=0,b=1,c,n;
    c=a+b;
    printf("fibonacci series: %d, %d ", a,b);
    for (n= 3; n <= 8; ++n)
    {
        printf(",%d ", c);
        a=b;
        b=c;
        c=a+b;
    }
    
    
}