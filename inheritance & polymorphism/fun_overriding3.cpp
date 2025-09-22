#include<iostream>
using namespace std;
class base{
    public :
    void fun1()
    {cout<<"base class";}
};
class derived: public base{
    public:
    void fun()
    {cout<<"derived class";}
    void fun1(int x)
    {cout<<"derived class with int arg";}
};
int main()
{
    derived d;
    d.fun(); // derived class
    d.fun1(10); // derived class with int arg
    // d.fun1(); // error: no matching function for call to 'derived::fun1()'
    d.base::fun1(); // base class
}