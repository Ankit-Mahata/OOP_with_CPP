// constructor calling in multi level inheritance
#include<iostream>
using namespace std;
class one{
    public:
    one(int x=0)
    {cout<<"ctor of class one\n";}
};
class two : public one{
    public:
    two(int y=0):one(y)
    {cout<<"ctor of class two\n";}
};
class three : public two{
    public:
    three(int z=0):two(z)
    {cout<<"ctor of class three\n";}
};
int main()
{
    three t(10);
}