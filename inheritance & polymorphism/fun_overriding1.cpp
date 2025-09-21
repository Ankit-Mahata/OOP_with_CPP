// to override a function of base class in derived class and to call the base class function using scope resolution operator
#include<iostream>
using namespace std;
class A{
    public :
    void show()
    {cout<<"from Base class A\n";}
};
class B:public A{
    public :
    void show()
    {cout<<"from Derived class B\n";}
};
int main()
{
    B b;
    b.show();
    b.A::show(); 
}