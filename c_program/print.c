#include <stdio.h>
void print_array(int *p, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", *p);
        p++;
    }
}
void main()
{
    int a[5] = {7, 3, 2, 5, 17}, n;
    n = 5;
    print_array(&a[0], n);
}