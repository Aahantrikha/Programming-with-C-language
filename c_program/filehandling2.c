#include <stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("a2.c","a");
printf("Enter data to store");
while ((ch=getchar())!='#')
{
    fputc(ch,fp);
}
fclose(fp);
}