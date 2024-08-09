#include <stdio.h>
void main()
{
    char a;
    printf("enter anything");
    scanf("%c", &a);
    if ((a>='a' && a<='z')||(a>='A' && a<='Z'))
    printf("it is a char");
    else 
    printf("the entered number is not a char");
}