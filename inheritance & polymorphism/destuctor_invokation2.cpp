#include<iostream>
using namespace std;
class base1{
    public :
    base1()
    {cout<<"ctor of base1\n";}
    ~base1()
    {cout<<"Dtor of base1\n";}
};
class base2{
    public:
    base2()
    {cout<<"ctor of base2\n";}
    ~base2()
    {cout<<"Dtor of base2\n";}
};
class derived:public base1,public base2
{
    public:
    derived()
    {cout<<"ctor of derived\n";}
    ~derived()
    {cout<<"Dtor of derived\n";}
};
int main()
{
    derived obj;
}
// order of call of ctor [ base1 -> base2 -> derived ]
// order of call of dtor [ derived -> base2 -> base1 ] (reverse of ctor)