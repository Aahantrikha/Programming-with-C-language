#include <stdio.h>
// void main()
// {
//     int sum(int);
//     int x,res;
//     printf("enter a natural number");
//     scanf("%d",&x);
//     res=sum(x);
//     printf("sum of %d natural number is %d",x, res);
// }
// int sum(int n)
// {
//     int s;
//     if (n==0)
//     {
//         return 0;
//     }
//     else
//     s=n+sum(n-1);
//     return s;
// }
void fun1()
{
    static int x=10;
    printf("x= %d\n",x++);
}
void main()
{
    int i;
    for ( i = 1; i <=10; i++)
    {
          fun1();
    }
    
}