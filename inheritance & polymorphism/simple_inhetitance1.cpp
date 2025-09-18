// to demonstrate simple inheritance 
#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    void input()
    {
        cout<<" Enter two integers : ";
        cin>>x>>y;
    }
    int add()
    {int z=x+y;
    return z; }
};
class B : public A
{
   public :
   void show()
   {
      int sum=add();
      cout<<sum;
   }
};
int main()
{
    A obj1;
    B obj2;
    obj1.input(); // initialized x,y of obj1
    obj2.input(); // initialized x,y of obj2
    cout<<"sum by object of class B : ";
    obj2.show();
    cout<<"\nSum by object of class A : "<<obj1.add();
}