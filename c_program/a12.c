#include <stdio.h>
void main()
{
    int a,b,c,big;
    printf("enter three values");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?((a>c)?(big=a):(big=c)):((b>c)?(big=b):(big=c));
    big= (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("largest number is %d\n",big);
}