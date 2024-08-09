#include <stdio.h>
// void main()
// {
//     int x=50;
//     int f1(int);
//     printf("x= %d\n",x);
//     x+=50;
//     x=f1(x);
//     printf("x=%d\n", x);
//     printf("x=%d\n", f1(x));
// }
// int f1(int a)
// {
//     printf("a=%d\n", a);
//     a+=10;
//     return a;
// }
// void main()
// {
//     int sum(int,int);
//     int x,y,s;
//     printf("enter 2 numbers");
//     scanf("%d%d", &x,&y);
//     s=sum(x,y);
//     printf("Sum=%d",s);
// }
// int sum(int a, int b)
// {
//     return a+b;
// }
void main()
{
    int fact(int);
    int a,f;
    printf("enter a number for factorial");
    scanf("%d", &a);
    f=fact(a);
    printf("fact=%d",f);
}
int fact(int x)
{
    int i,fact=1;
    for ( i = x; i > 0; i--)
    {
        fact=fact*i;
    }
    return fact;
}