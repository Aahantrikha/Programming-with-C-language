#include <stdio.h>
void main()
{
    // int number;
    // printf("enter a number");
    // scanf("%d", &number);
    // if(number%2==0)
    // printf("entered number is even");
    // if(number%2!=0)
    // printf("entered number is odd");
    int a,b;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    if (a>b)
    printf("first number is greater");
    if (a<b)
    printf("second number is greater");
    if (a==b)
    printf("both numbers are equal");
}