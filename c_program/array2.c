#include <stdio.h>
void main()
{
    // int a[20],n,i;
    // printf("enter number of values to store");
    // scanf("  %d", &n);
    // printf("enter %d elements", n);
    // for ( i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    // printf(" list is \n");
    // for( i = 0; i < n; i++)
    // {
    //     printf(" %d", a[i]);
    // }
    int a[10] = {9, 3, 5, 10, 7, 9, 72, 7}, i, n,flag=0;
    printf("enter a number");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if ((a[i])==n)
        { flag=1;
        printf("element is present at position %d", i+1);
        break;}
    }
    if (flag!=1)
    printf("number is not present in array");
}