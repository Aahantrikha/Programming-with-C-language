#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    // int a=10;
    // int *p;
    // p=&a;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    // int A[5]={2,4,6,8,10};
    int *p;
    // p=A;
    // p=(int *)malloc(5*sizeof(int));/
    p=new int[5];
    p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;
    }
    delete [ ] p;
}