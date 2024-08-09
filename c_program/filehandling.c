#include <stdio.h>
void main()
{
// FILE*fp;
// printf("%d\n",fp);
// fp=fopen("vscode.exe","r");
// printf("%d",fp);
char ch;
int i=0,j=1;
FILE *fp;
fp=fopen("a1.c","r");
if (fp==NULL)
{
    printf("file does not exist");
}
else
{
    printf("file does not exist");
    while ((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
        if (ch=='\n')
        {
            j++;
        }
        
        i++;
    }
    printf("%d",i);
    printf("\n%d",j);
}
fclose(fp);
}