#include <stdio.h>
struct Emp
{
   int id,sal;
   char name[20];
}e={101,1200,"abc"};
void main()
{
  struct Emp *p1;
  printf("size of p1=%d\n",sizeof(p1));
  p1=&e;
  printf("%d\n",p1);
  printf("%d\n",*p1);
  printf("id=%d\n",p1->id);
  printf("name=%s\n",p1->name);
  printf("salary=%d",p1->sal);
}