#include <stdio.h>
#include <string.h>
void main()
{
    int i,l;
    char str[20];
    printf("enter a string");
    gets(str);
    // l=strlen(str);
    // for ( i = l; i >= 0; i--)
    // {
    //     printf("%c",str[i]);
    // }
    strrev(str);
    printf("reverse string %s", str);
}