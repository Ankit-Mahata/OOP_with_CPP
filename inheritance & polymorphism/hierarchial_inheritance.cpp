//  example of hierarchial inheritance
#include<iostream>
using namespace std;
class A{
    protected:int x,y;
    public:
    void assign(int a=0,int b=0)
    {
        x=a; y=b;
    }
};
class B : public A{
    public:
    void add()
    {
      cout<<"sum="<<x+y<<endl;
    }
};
class C : public A{
  public :
    void sub()
    {
      cout<<"difference="<<x-y<<endl;
    }
};
class D:public A{
    public:
    void mul()
    {
        cout<<"product="<<x*y<<endl;
    }
};
class E : public A{
    public:
    void div()
    {
        if(y!=0)
        cout<<"division="<<x/y<<endl;
        else
        cout<<"division by zero error"<<endl;
    }
};
int main()
{
   A a; B b; C c; D d; E e;
   b.assign(10,5);
    b.add();
    c.assign(10,5);
    c.sub();
    d.assign(10,5);
    d.mul();
    e.assign(10,0);
    e.div();
    e.assign(10,2);
    e.div();

}