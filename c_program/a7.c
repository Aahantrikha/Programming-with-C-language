#include <stdio.h>
void main()
{
    int a;
    printf("enter your age ");
    scanf("%d", &a);
    char b;
    printf("\nenter your gender");
    fflush(stdin);
    scanf("%c", &b);
    printf("\n%d", (a>15)&&(b=='M'||b=='m'));
}