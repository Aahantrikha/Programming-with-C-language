#include <stdio.h>
void main()
{
    int comp(int,int);
    int a,b,result;
    printf("enter values to compare");
    scanf("%d%d", &a,&b);
}
int comp(int x,int y)
{
    if (x>y)
    {
        printf("%d is greater than %d", x,y);
    }
    else if (x<y)
    {
        printf("%d is greater than %d", y,x);
    }
    else printf("%d is equals to %d", x,y);
}