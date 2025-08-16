//to use function overloading with same no. of argument but of different types
#include<iostream>
using namespace std;
 float add(float a, float b)
   {return a+b;}
 int add(int a, int b)
   {return a+b;}

   int main()
   {
    cout<<"sum1 --> "<<add(2,4)<<endl;
    cout<<"sum2 --> "<<add(2.5f,3.5f)<<endl;
   }
 
    /* add(2.5,3.5);
    above line is ambiguos error because , 
    in c++ literal values like 2.5,3.5 are considered as double by default 
    by compiler . here , there is no any function that have double type 
    argument. so double can be type promoted in both float and int 
    so compiler get confused thinking which function to call */
    // to avoid this ambiguity, we can use float literals by appending 'f' or 'F'
    // or we can make formal parameters of add function as double type