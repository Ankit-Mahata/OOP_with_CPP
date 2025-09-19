// To show how a constructor is called simple inheritance
#include<iostream>
using namespace std;
class A
{
  public:
  A()
  {cout<<"Constructor of class A"<<endl;}  
};
class B:public A
{
  public:
  B():A()  // compiler's mechanism of calling a constructor
  {
    cout<<"constructor of class B"<<endl;
  }
};
int main()
{
  B obj;
}
