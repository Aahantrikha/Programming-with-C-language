#include <stdio.h>
void main()
{
    int num,l,b,side;
    float radius;
    printf("enter your choice\n1. To calculate area of Rectange\n2.To calculate area of Square\n3.To calculate area of Circle");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    {printf("\nenter length of rectangle");
    scanf("%d", &l);
    printf("\nenter breadth of rectangle");
    scanf("%d", &b);}
    printf("\nArea of rectangle is %d",l*b);
        break;
    case 2:
    printf("\nenter side of square");
    scanf("%d", &side);
    printf("\n Area of square is %d", side*side);
    break;
    case 3:
    printf("\nenter radius of circle");
    scanf("%f", &radius);
    printf("\narea of circle is%f", 3.14*radius*radius);
    break;
    default:
        break;
    }
}