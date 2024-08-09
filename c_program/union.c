#include <stdio.h>
union abc
{
    int a;
    float b;
    char c;
}u;

void main()
{
    u.a=10;
    u.b=20.3;
    u.c='A';
    printf("%d\n",u.a);
    printf("%f\n",u.b);
    printf("%c\n",u.c);
    
}