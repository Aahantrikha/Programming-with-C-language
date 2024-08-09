#include <stdio.h>
void main()
{
    // int a=0,b=5,c=3;
    // printf("%d", a&&(b||c));
    int x=10;
    int y=20;
    printf("value before swapping of x %d", x);
    printf("\nvalue before swapping of y %d", y);
    int z=y;
    y=x;
    x=z;
    printf("\nvalue after swapping of x%d",x);
    printf("\nvalue after swapping of y%d",y);

}