#include<iostream>
using namespace std;
class base1{
    protected:
    int x;
    public:
    void show1()
    {cout<<"x="<<x<<endl;}
};
class base2
{   protected :
    int y;
    public:
    void show()
    {cout<<"y="<<y<<endl;}
};
class derived:public base1, public base2
{
   public:
   void get()
   {
     cout<<"Enter two integer : ";
     cin>>x>>y;
   }
   void show3()
   {cout<<"sum="<<x+y;}
};
int main()
{
    derived d;
    d.get();
    d.show3();


}