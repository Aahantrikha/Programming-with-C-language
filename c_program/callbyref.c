#include <stdio.h>
void func(int *x, int *y)
{
   *x=*x+10;
   *y=*y+10;
   printf("\nx=%d",*x);
   printf("\ny=%d",*y);
}
void main()
{
  int x,y;
  printf("enter 2 numbers");
  scanf("%d %d",&x, &y);
  printf("\nx=%d",x);
  printf("\ny=%d",y);
  func(&x,&y);
  printf("\nx=%d",x);
  printf("\ny=%d",y);
}