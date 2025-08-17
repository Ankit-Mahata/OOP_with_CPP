#include<iostream>
using namespace std;
class product
{
  private : 
  int x,y;
  static int s;
  public:
  static void setstatic(int a)
  {s=a;}
  static void showstatic()
  {
    cout<<"\nstatic vlaue = "<<s<<endl;
   // cout<<"x= "<<x;  // cannot access instance member variable in static member function
   // static member function can only access static member variable
}

  void set(int a, int b)
  {
    x=a;
    y=b;
  }
  void show()
  {
    cout<<"\nx = "<<x<<"  y = "<<y<<endl;
    cout<<"static variable = "<<s<<endl;   // instance member function can access static member variable also
  }
};
int product :: s=1;
int main()
{
    product p1;
    p1.show();
    p1.set(10,20);
    product::setstatic(100);
    product::showstatic();
    p1.show();
    p1.setstatic(200); 
    p1.showstatic();  // Thus object can access both static member function and static member variable
}