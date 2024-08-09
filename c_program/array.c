#include <stdio.h>
void main()
{
   int i=0;
    int a[5];
    printf("enter an array");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]); 
    }
    printf("Array is \n");
    for ( i = 0; i <5; i++)
    {
        printf(" %3d",a[i]);
    }
    printf("\n");
    }