#include <stdio.h>
void main()
{
    int num;
    printf("enter a number");
    scanf("%1d", &num);
    switch (num)
    {
    case 0:
        printf("1");
        break;
    case 1:
        printf("2");
        break;
    case 2:
        printf("3");
        break;
    case 3:
        printf("4");
        break;        
    default:
        printf("wrong entered element");
        break;
    }
}