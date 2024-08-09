#include <stdio.h>
void main()
{
    int n,r,num,rev=0;
    printf("enter a number you want to check");
    scanf("%d", &n);
    num=n;
    while (n>0)
    {r=n%10;
    n=n/10;
    rev=rev*10+r;}
    if (rev==num) printf("This number is palindrome");
    else printf("It is not palindrome");
}