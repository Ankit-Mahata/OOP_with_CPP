// overriding a function in child classes and accessing them by base class pointer
// virtual function implements late binding
#include<iostream>
using namespace std;
class animal{
    public :virtual void fun()
    {
        cout<<"sound\n";
    }
};
class dog : public animal{
    public : void fun()
    {
        cout<<"bark !!\n";
    }
};
class tiger : public animal
{
   public: void fun()
    {
        cout<<"roar !!";
    }
};
int main()
{
  animal *an= new animal;
  an->fun();
  an=new dog;
  an->fun(); // bark !!
  an=new tiger;
  an->fun();
  delete an;
  

}