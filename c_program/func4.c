#include <stdio.h>
void main()
{
    void sum(int, int);
    void fact(int);
    int x, y, z, a, Factorial, s;
    printf("1. sum \n 2. Factorial");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("enter the numbers you want to add");
        scanf("%d%d", &x, &y);
        sum(x, y);
    }
    else
    {
        printf("enter the number you want factorial of");
        scanf("%d", &z);
        fact(z);
    }
}
void sum(int a, int b)
{
    printf("\nThe sum of the numbers are %d", a + b);
}
void fact(int z)
{
    int i, f = 1;
    for (i = z; i > 0; i--)
    {
        f = f * i;
    }
    printf("\nthe factorial of number is %d", f);
}