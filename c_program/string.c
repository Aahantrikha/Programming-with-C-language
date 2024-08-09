#include <stdio.h>
void main()
{
    int i,count=0;
    // char a[20]={'A','M','R','I','T','A','\0'};
    char str[20];
    printf("enter a string");
    // scanf("%s",str);
    gets (str);
    for ( i = 0; str[i]!=0; i++)
    {
        count++;
        printf("%c\n",str[i]);
    }
    printf("total %d",count);
}