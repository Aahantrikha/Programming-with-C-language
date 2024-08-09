#include <stdio.h>
struct Emp
{
    int id, sal;
    char name[20];
};
void main()
{
    struct Emp e[5];
    printf("Enter records\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Details of Employee %d\n", i + 1);
        printf("employee ID=");
        scanf("%d", &e[i].id);
        printf("employee Name=");
        fflush(stdin);
        gets(e[i].name);
        printf("Salary=");
        scanf("%d", &e[i].sal);
    }
    printf("\n\n");
    printf("EmpID\tName\tSalary\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d\n", e[i].id, e[i].name, e[i].sal);
    }
}