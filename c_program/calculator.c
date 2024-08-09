#include <stdio.h>
void main()
{
    int choice;
    float a,b;
    printf("enter first number");
    scanf("%f", &a);
    printf("enter second number");
    scanf("%f", &b);
    printf("enter a choice");
    printf("\n1-Addition");
    printf("\n2-Subtraction");
    printf("\n3-Multiplication");
    printf("\n4-Division");
    scanf("%d", &choice);
    if (choice==1)
    printf("\n%f", a+b);
    else if (choice==2)
    printf("\n%f", a-b);
    else if (choice==3)
    printf("\n%f", a*b);
    else if (choice==4)
    printf("\n%f", a/b);
    else 
    printf("\ninvalid choice");
    

}
