#include <stdio.h>
void main()
{
    char letter;
    printf("enter a letter");
    scanf("%c", &letter);
    switch (letter)
    {
    case 'a':
        printf("it is a vowel");
        break;
    case 'e':
        printf("it is a vowel");
        break;
    case 'i':
        printf("it is a vowel");
        break;
    case 'o':
        printf("it is a vowel");
        break;
    case 'u':
        printf("it is a vowel");
        break;
    default:
        printf("it is not a vowel");
        break;
    }
}