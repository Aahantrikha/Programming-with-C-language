#include <stdio.h>
void main()
{
    float a;
    printf("enter your percentage");
    scanf("%f", &a);
    printf("%f", a);
    if (a>80)
    printf("your grade is excellent");
    else if (a>60&&a<80)
    printf("your grade is good");
    else if (a>40&&a<59)
    printf("your grade is average");
    else if(a>=0&&a<40)
    printf("your grade is poor");
    else 
    printf("invalid entry");
}