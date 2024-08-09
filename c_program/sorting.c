#include <stdio.h>
void main()
{
    int a[8] = {3, 17, 9, 5, 12, 15}, i = 0, j = 1, n;
    for (i = 0; i <= 4; i++)
    {
        for (j = i+1; j <= 5; j++)
        {
            if (a[i] > a[j])
            {
                n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
    }
    for (i = 0; i <= 5; i++)
    {

        printf(" %d", a[i]);
    }
}