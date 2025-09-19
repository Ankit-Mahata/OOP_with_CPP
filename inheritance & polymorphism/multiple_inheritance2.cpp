// To demonstrate constructor call in multiple inheritance
#include<iostream>
using namespace std;
class A{
    float salary;
    public:
    A(float s)
    {salary=s;}
    float getsalary()
    {return salary;}
};
class B{
    float bonus;
    public:
    B(float b)
    {bonus=b;}
    float getbonus()
    {return bonus;}
};
class derived: private A,private B
{
   public:
   derived(float x,float y):A(x),B(y)
   {

   }
   void total()
   {
    cout<<"Total salary : "<<getsalary()+getbonus();
   }
};
int main()
{
    float s,b;
    cout <<"Enter salary and bonus : ";
    cin>>s>>b;
    derived d(s,b);
    d.total();
}
