#include <stdio.h>
double compare(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}
void main()
{
    int x, y, z;
    char a, b, c;
    printf("enter 2 numbers\n");
    scanf("%d%d", &x, &y);
    z = compare(x, y);
    printf("largest number is %d\n", z);
    printf("enter 2 characters\n");
    fflush(stdin);
    scanf("%c", &a);
    fflush(stdin);
    scanf("%c", &b);
    c = compare(a, b);
    printf("largest char is %c", c);
}