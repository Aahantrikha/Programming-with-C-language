#include <iostream>
using namespace std;

class vector{
      int*arr;    
      int size;
      public:
      vector(int m)
      {
        size=m;
        arr=new int[size];
      }
}