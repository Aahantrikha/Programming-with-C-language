#include <stdio.h>
void main()
{
    int a[5][5], i,j,r,c;
    printf("enter rows");
    scanf("%d", &r);
    printf("enter coloumns");
    scanf("%d", &c);
    printf("'enter an array");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
           scanf("%d", &a[i][j]);
        } 
    }
    printf("the array is\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    
    
    
}