#include <stdio.h>
#include <process.h>
#include <stdlib.h>
struct stu
{
    int id, age;
    char name[20];
} s;
FILE *fp;
void add_record()
{
    printf("\t\tadd record");
    printf("\nEnter ID");
    scanf("%d", &s.id);
    printf("enter a name");
    fflush(stdin);
    gets(s.name);
    printf("\nEnter age");
    scanf("%d", &s.age);
    fp = fopen("func2.dat", "a");
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
}
void Display_Record()
{
    fp = fopen("func2.dat", "r");
    printf("ID \t Name\t Age \t\n");
    while (fread(&s, sizeof(s), 1, fp))
    {
        printf("%d\t%s\t %d\t\n", s.id, s.name, s.age);
    }
    fclose(fp);
}
void search_record()
{
    int id;
    fp = fopen("func2.dat", "r");
    printf("Enter ID to search");
    scanf("%d", &id);
    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.id == id)
        {
            printf("ID \t Name\t Age \t\n");
            printf("%d\t%s\t %d\t\n", s.id, s.name, s.age);
            break;
        }
    }
}
void update_record()
{
    int id;
    fp = fopen("func2.dat", "r+");
    printf("Enter ID to update");
    scanf("%d", &id);
    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.id == id)
        {
            printf("loc%d\n",ftell(fp));
        }
    }
    fclose(fp);
}
void main()
{
    int ch;
    while (1)
    {
        printf("select an option\n");
        printf("1.Add Record\n");
        printf("2.Display Records\n");
        printf("3.To search records\n");
        printf("4.To update record\n");
        printf("5.To delete record\n");
        printf("6.To Exit");
        scanf("%d", &ch);
        if (ch == 1)
        {
            add_record();
        }
        else if (ch == 2)
        {
            Display_Record();
        }
        else if (ch == 3)
        {
            search_record();
        }
        else if (ch==4)
        {
            update_record();
        }
        
        else if (ch == 6)
        {
            exit(0);
        }
    }
}