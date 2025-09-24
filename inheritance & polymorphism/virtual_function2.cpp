#include<iostream>
using namespace std;
class A{
    public:
    void f()
    {cout<<"f base\n";}
    virtual void g()
    {cout<<"g base\n";}
    virtual void h()
    {cout<<"h base \n";}
    void i()
    {cout<<"i base\n";}
};
class B : public A
{
    public :
    void f()
    {cout<<"f derived \n";}
    void g()
    {cout<<"g derived\n";}
    void j()
    {cout<<"j base \n";}
};
int main()
{
    A *ptr;
    ptr=new A;
    ptr->f(); // early binding // op --> f base
    ptr->g(); // late binding // op --> g base // because address is also type A
    ptr->h(); // late binding // op --> h base
    ptr->i(); // early binding // op --> i base
    delete ptr;
    ptr=new B;
    ptr->f(); // early binding // op --> f base
    ptr->g(); // late binding // op --> g derived
    ptr->h(); // late binding // op --> h base // h() is not overridden
    ptr->i(); // early binding // i base
    // ptr->j(); // error // because of early binding compiler search in class A and can't find j() , compilation error
    delete ptr;
}