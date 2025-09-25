#include<iostream>
using namespace std;
class vechicle{
    public:
    vechicle()
    {cout<<"ctor of vehicle\n";}
    virtual void show()
    {cout<<"From vechicle\n";}
    virtual ~vechicle()
    {cout<<"dtor of vechicle\n";}
};
class car : public vechicle{
    public :
    car()
    {cout<<"ctor of car\n";}
    void show()
    {cout<<"from vehicle\n";}
    ~car()
    {cout<<"dtor of car\n";}
};
int main()
{
    vechicle *ptr=new vechicle;
    ptr->show();
    delete ptr;
    ptr = new car;
    ptr->show();
    delete ptr;
}