#include <stdio.h>
void main()
{
    int i,j;
    // for ( i = 1; i <= 5; i++)
    // {
    //     for ( j = 1; j <= 5; j++)
    //     {
    //         printf("%d",j);
    //     }
    // printf("\n");
    // }
    // for ( i = 5; i>0; i--)
    // {
    //     for ( j = 5; j>0; j--)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");  
    // }
    // for ( i = 1; i <= 5; i++)
    // {
    //     for ( j = 1; j<=5; j++)
    //     {
    //        if ((i==1||i==5)||(j==1||j==5))
    //        {
    //         printf("* ");
    //        }
    //        else
    //        printf("  ");
    //     }
    //     printf("\n");
    // }
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {printf("%d", j);
//         }
//         printf("\n");
// }
// for ( i = 1; i <=5; i++)
// {
//     for ( j = 5; j >=i; j--)
//     {
//         printf("%d",j);
//     }
//     printf("\n");   
// }
// for ( i = 'A'; i <='E'; i++)
// {
//     for ( j = 'A'; j<=i; j++)
//     {
//         printf("%c",i);
//     }
//     printf("\n");
// }
// for (i = 1; i <=5; i++)
// {
//     for (j = 1; j <= i; j++)
//     {
//        { if (j%2==0)
//         {
//         printf("0");
//         }
//         else
//         printf("1");}
//     }
//     printf("\n");
// }
// for ( i = 1; i <= 5; i++)
// {
//     for ( j = 1; j <= i; j++)
//     {
//         if ((i+j)%2==0)
//         {
//             printf("1");
//         }
//         else
//         printf("0");
//     }
//        printf("\n");
// }
for ( i = 1; i <= 5; i++)
{
    for ( j = 5; j >= i; j--)
    {
    printf(" ");
    }
    for ( j = 1; j <= i; j++)
    {
        printf("* ");
    }
    printf("\n");
}
}