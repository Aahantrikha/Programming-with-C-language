#include <stdio.h>
void main()
{
    int a[2][2]={{1,4},{2,3}}, b[2][2]={{4,5},{6,8}}, i,j, c[2][2];
    printf("first matrix is\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix is\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    printf("sum is\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            c[i][j]= a[i][j]+b[i][j];
            printf(" %4d", c[i][j]);
        }
        printf("\n");
    }
}