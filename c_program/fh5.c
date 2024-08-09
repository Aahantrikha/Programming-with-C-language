#include <stdio.h>
struct stu
{
    int age;
    char name[20];
    int reg_no;
    
}s;

void main()
{
      FILE*fp;
      printf("enter your age,name and registration number");
      scanf("%d",&s.age);
      fflush(stdin);
      scanf("%s",&s.name);
      scanf("%d",&s.reg_no);
      fp=fopen("a1.dat","w");
      fwrite(&s,sizeof(s),1,fp);
}