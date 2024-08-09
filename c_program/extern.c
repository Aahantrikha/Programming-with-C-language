#include <stdio.h>
void m1()
{
    extern int x;
    printf("x=%d\n",x);
    x+=10;
}
void main()
{
    extern int x;
    printf("x=%d\n",x);
    x+=10;
    m1();
    printf("x=%d\n",x);
}
int x=100;