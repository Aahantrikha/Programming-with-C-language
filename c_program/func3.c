#include <stdio.h>
// void main()
// {
//     int x = 10;
//     void m1();
//     printf("x in main %d\n", x);
//     m1();
//     printf("x in main %d\n", x);
// }
// void m1()
// {
//     int x = 100;
//     printf("x in m1 %d\n", x);

//     x++;
//     printf("x in m1 %d\n", x);
// }
// void main()
// {
//     int x=100;
//     void m1(int);
//     printf("x in main=%d\n", x);
//     m1(x);
//     printf("x in main=%d\n", x);
// }
// void m1(int a)
// {
//     printf("a in m1 =%d\n", a);
//     a+=10;
//     printf("a in m1=%d\n", a);
// }
void main()
{
    int a, b;
    void sum(int, int);
    printf("enter value you want to add");
    scanf("%d%d", &a, &b);
    sum(a, b);
}
void sum(int a, int b)
{
    printf("sum of both number is %d", a + b);
}