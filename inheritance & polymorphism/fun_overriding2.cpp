#include<iostream>
using namespace std;
class one{
    public :
    void show()
    {cout<<"from class one\n";}
};
class two{
    public :
    void show()
    {cout<<"from class two\n";}
};
class derived : public one, public two{

};
int main()
{
    derived d;
    // d.show();
    d.one::show();
    d.two::show();


}