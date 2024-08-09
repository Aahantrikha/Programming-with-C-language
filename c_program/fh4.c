#include <stdio.h>
void main()
{
    int r,age;
    char name[20];
    FILE *fp;
    fp = fopen("datafile.txt","a");
    printf("Enter roll number,name and age");
    scanf("%d %s %d",&r,name,&age);
    fprintf(fp,"%d\t%s\t%d\n",r,name,age);
    fclose(fp);
    fp=fopen("datafile.txt","r");
    while(fscanf(fp,"%d %s %d",&r,name,&age)!=EOF)
    {
        printf("\nRoll Number:%d \nName :%s \nAge: %d ",r,name,age);
    }
}