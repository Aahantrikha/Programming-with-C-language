#include <stdio.h>
void main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    float y;
    printf("Enter a decimal number");
    scanf("%f", &y);
    char z;
    printf("Enter a character");
    fflush(stdin);
    scanf("%c", &z);
    char name[16];
    printf("Enter a string");
    scanf("%s", name);
    printf("Number is %d", x);
    printf("\nNumber is %f", y);
    printf("\nCharacter is %c", z);
    printf("\nName is %s", name);

}
