#include <stdio.h>
void main()
{
    int age;
    char gender;
    printf("enter your age");
    scanf("%d", &age);
    printf("%d", age);
    if (age>18)
    {
        printf("\nenter your gender");
        fflush(stdin);
        scanf("%c", &gender);
        if (gender=='m'||gender=='M')
        printf("\nyou are eligible");
        else
        printf("\nyou are not eligible");
    }
    else
    printf("you are not eligiblle");
}