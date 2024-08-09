#include <stdio.h>
void main()
{
    // int x=7,y=9;
    // printf("%d", x&y);
    // printf("\ns%d", x|y);
    int age;
    printf("enter your age");
    scanf("%d", &age);
     if (age>18)
     printf("\nyou are eligible to drive");
     if (age<18)
     printf("\nyou are not eligible to drive");
}