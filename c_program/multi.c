#include <stdio.h>
void main()
{
    // int a[2][2] = {{1, 12},{ 34, 8}}, b[2][2] = {{3, 6},{ 9, 1}}, i, j, k, c[2][2] = {};
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         c[i][j] = 0;
    //         for (k = 0; k < 2; k++)
    //         {
    //             c[i][j] += a[i][k] * b[k][j];
    //         }
    //         printf("%3d", c[i][j]);
    //     }
    //     printf("\n");
    // }
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,k,b[1][1][1],sum;
     for ( i = 0; i < 3; i++)
     {
        sum=0;
        for ( j = 0; j< 3; j++)
        {
            sum+=a[i][j];
        }
        printf("%2d\n", sum);
     }
}