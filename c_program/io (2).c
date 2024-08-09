#include <stdio.h>
void main()
{
    char ch;
    printf("enter a character");
    ch=getchar();
    putchar(ch);
    while ((ch=getchar())!='\n')
    {
        putchar(ch);
    }
    
}