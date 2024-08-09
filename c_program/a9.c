#include <stdio.h>
void main()
{
// int x=15;
// int y;
// y=x++ + ++x;
// printf("x=%d\n", x);
// printf("y=%d\n", y);
int x=3, y=7,z=13,d;
d=(x++ > ++y)&&(z++>++y);
printf("x=%d",x);
printf("\ny=%d",y);
printf("\nz=%d",z);
printf("\nd=%d",d);
}
