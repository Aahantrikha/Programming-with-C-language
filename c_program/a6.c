#include <stdio.h>
void main()
{
    float r;
    printf("Enter the radius of a circle");
    scanf("%f", &r);
    float area = 3.14*r*r;
    printf("the area of circle is %f", area);
}