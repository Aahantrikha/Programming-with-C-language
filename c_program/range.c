#include<stdio.h>
#include<limits.h>
void main()
{
    int x=1000000;
    short int y=32768;
    unsigned  short int z=32769;
    char ch='d';
      printf("Size of x  = %d\n",sizeof(int) );
     printf("Size of y  = %d\n",sizeof(y) );
      printf(" x  = %d\n",x );
      printf(" y  = %d\n",y);
      printf("z = %u\n",z);
      printf("Max limit for int %d\n",LONG_MAX);
printf("Min limit for int %d\n",LONG_MIN);
printf("Max limit for  short int %d\n",SHRT_MAX);

      printf("char is  %d\n",ch);



}