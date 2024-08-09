#include <stdio.h>
void swap(int *a, int *b)
{
   int c;
     c = *a;
    *a = *b;
    *b = c;
}
void main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    printf("numbers before swapping are %d %d",a,b);
    swap(&a,&b);
    printf("numbers after swapping are %d %d",a,b);
}