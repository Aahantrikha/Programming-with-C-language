#include <stdio.h>
int x;
void m1()
{
     printf("x=%d\n", x);
     x+=100;
}
void main()
{
    x=50;
    printf("x=%d\n");
    x++;
    m1();
    printf("x=%d\n", x);
}