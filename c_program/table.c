#include <stdio.h>
void main()
{
    int num,i=1,table=1;
    printf("enter a number");
    scanf("%d", &num);
    while (i<=10)
    {
        printf("%dx%d=%3d\n",num,i, num*i);
         i++;
    }
}