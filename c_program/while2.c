#include<stdio.h>
void main()
{
    // int num,sum=0,i=1;
    // printf("enter a number");
    // scanf("%d", &num);
    // while (num>=i)
    // {
    //      sum=sum+i;
    //      printf("%3d ",i++ );  
    // }
    // printf("sum=%d\n", sum);

    int num,i=1,fact=1;
    printf("enter a number");
    scanf("%d", &num);
    while (num>0)
    {
    fact=fact*num;
    num--;
    }
    printf("factorial of entered number is %d", fact);
}