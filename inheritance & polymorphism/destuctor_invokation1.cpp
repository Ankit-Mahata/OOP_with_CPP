// dectructor invokation in single inheritance
#include<iostream>
using namespace std;
class base{
    public:
    ~base()
    {cout<<"base destructor\n";}
};
class derived : public base{
    public :
    ~derived()
    {cout<<"derived destructor\n";}
};
int main()
{
    derived obj; 
}

