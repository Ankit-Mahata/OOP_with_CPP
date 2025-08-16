// type promotion in function overloading
#include<iostream>
using namespace std;
void fun(float a)
{cout<<"a = "<<a<<endl;}
void fun(int b)
{cout<<"b = "<<b<<endl;}
int main()
{
    char c='A';
    fun(c);
    fun((float)c); // explicitly casting c to float
}
// here, there is no any exact match for fun(c)
// so the compiler will promote the char type to int type
// and call the fun(int b) function
// if we want to call fun(float a) function, we can explicitly cast c to float
// like this: fun((float)c);
/* char --> int 
   float --> int 
   enum --> int */