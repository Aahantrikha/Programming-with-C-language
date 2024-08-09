#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Rectangle r1={10,5};
    // cout<<r1.length<<endl;
    // cout<<r1.breadth<<endl;
    // Rectangle *p=&r1;
    // cout<<p->length<<endl;
    // cout<<p->breadth<<endl;
    Rectangle *p;
    p=new Rectangle;
    p->length=15;
    p->breadth=7;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
}