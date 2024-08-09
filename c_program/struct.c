#include <stdio.h>
struct date
{
    int d,m,y;
};
void main()
{
    struct date d1={21,11,23};
    printf("size of date= %d",sizeof(struct date));
    printf("\ndate is %d/%d/%d",d1.d,d1.m,d1.y);
    d1.m++;
}