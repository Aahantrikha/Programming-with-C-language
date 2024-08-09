#include <stdio.h>
void main()
{
    int a[5]={3,1,7,9,6},*p,i;
    // printf("%d\n",a);
    // printf("%d\n",&a[0]);
    // printf("%d\n",*p);
    p=a;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*p);//printf("%d",*(p*i));
        *p=*p+10;
        p++;
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    
}