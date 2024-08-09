#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("atm.c","r");
    fp2=fopen("filehandling3.c","w");
    printf("copying data from one file to another ");
    printf("\nData of file\n");
    while ((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
        putchar(ch);
    }
    fclose(fp1);
    fclose(fp2);
    printf("\ndata of file 2\n");
    fp2=fopen("filehandling3.c","r");
    while ((ch=fgetc(fp2))!=EOF)
    {putchar(ch);}
}