#include <stdio.h>
#include <conio.h>
void main()
{
    // char ch;
    // printf("Enter a character");
    // ch=getch();
    // putch(ch);
    // while ((ch=getch())!='\r')
    // {
    //    putch('*');
    // }
    char pass[20];
    int i=0;
    printf("enter your password");
    while ((pass[i]=getch())!='\r')
    {
        putch('x');
        i++;
    }
    pass[i]='\0';
    printf("password is %s",pass);
}