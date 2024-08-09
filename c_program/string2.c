#include <string.h> 
#include <stdio.h>
void main()
{
    int l;
    char str[20];
    puts("enter a string");
    gets(str);
    l=strlen(str);
    puts("string is");
    puts(str);
    printf("length of string is %d",l);
    strupr(str);
    printf("upper case string is %s",str);
    strlwr(str);
    printf("lower case string is %s",str);
}
