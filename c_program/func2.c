#include <stdio.h>
void main()
{
    void sum(),product();
    printf("calling sum\n");
    sum();
    printf("\ncalling product function\n");
    product();
}
void sum()
{
    int x,y,s;
    printf("input numbers to add");
    scanf("%d%d", &x,&y);
    s=x+y;
    printf("\nsum is %d", s);
}
void product()
{
    int x,y,p;
    printf("\ninput numbers to multiply");
    scanf("%d%d", &x,&y);
    p=x*y;
    printf("\nproduct is %d", p);
}&�J   aahan               