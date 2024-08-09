#include <stdio.h>
#define pi 3.14
#define sq(x) x*x
#define exp1(x,y) 2*x*y+x*x+y*y
void main()
{
//    int r=7;
//    float area=pi*r*r;
//    printf("area is %f",area);
   int a;
   printf("enter value of a\n");
   scanf("%d",&a);
   printf("%d\n",sq(a));
   printf("%d\n",sq(16));
   printf("%d",exp1(2,3));
}