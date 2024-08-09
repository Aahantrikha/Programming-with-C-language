#include <stdio.h>
void main()
{
    int x;
    printf("Enter Emp ID");
    scanf("%d", &x);
    char name[16];
    printf("Enter a name");
    scanf("%s", name);
    float y;
    printf("Enter your salary");
    scanf("%f", &y);
    printf("emp ID is %d", x);
    printf("\n name is %s", name);
    printf("\n salary is %f", y);
}