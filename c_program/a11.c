#include <stdio.h>
void main()
{
    float a,b,c,d;
    printf("enter marks of maths:");
    scanf("%f", &a);
    printf("enter marks of english:");
    scanf("%f", &b);
    printf("enter your marks of computer science:");
    scanf("%f",&c);
    d=((a+b+c)/300)*100;
    printf("\n%.2f Percentage of the subjects are", d);
    (d>33)?printf("\nyou have passed the exams"):
    printf("\nyou have failed the exams");
}
