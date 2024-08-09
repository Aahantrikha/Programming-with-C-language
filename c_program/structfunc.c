#include <stdio.h>
struct Emp
{
    int id,salary;
    char name[20];
};
typedef struct Emp Emp;
Emp print_data(Emp e)
{
    printf("Name\tId\tSalary\n");
    printf("%s\t%d\t%d",e.name,e.id,e.salary);
    e.id++;
    e.salary=10000;
    return e;
}
void main()
{
    Emp e1={101,12000,"meta"},e2;
    e2=print_data(e1);
print_data(e2);    
// printf("hello");
}