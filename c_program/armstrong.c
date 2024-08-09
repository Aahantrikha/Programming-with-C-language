#include <stdio.h>
void main()
{
    int n,r,num,sum=0;
     printf("enter a number you want to check");
    scanf("%d", &n);
    num=n;
    while (n>0)
    {r=n%10;
    n=n/10;
    sum=sum+r*r*r;}
    if (num==sum) printf("it is an armstrong number");
    else printf("it is not an armstrong number");
    
}