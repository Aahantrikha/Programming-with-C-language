#include<stdio.h>
void main()
{
    int r,n,rev=0;
    printf("enter a number which you want to reverse");
    scanf("%d", &n);
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    printf("reversed number is %d", rev);
}