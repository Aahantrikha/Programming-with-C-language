#include <stdio.h>
#include <string.h>
void main()
{
    // char str1[20]="abc";
    // char str2[20]="abc";
    // int d;
    // d=strcmp(str1,str2);
    // printf("%d",d);
    // char fn[20],ln[20],fullname[20];
    // printf("enter first name & last name");
    // gets(fn);
    // gets(ln);
    // strcat(fn," ");
    // strcat(fn,ln);
    // printf("first name %s\n",fn);
    // printf("last name %s",ln);
    char city[5][20];
    int i=0;
    printf("enter 5 cities names");
    for (int i=0;i<5;i++)
        gets(city[i]);
    printf("list of all cities is\n");
    for ( i = 0; i < 5; i++)
    {
        puts(city[i]);
    }
    
}