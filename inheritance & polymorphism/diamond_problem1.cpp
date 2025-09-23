// The given program is an example of multipath inheritance which is a type of hybrid inheritance
// in diamond problem , the data from grandparent class is copied in child class from both parent1 & parent2 classes
// since, two copies of data are present in child class , ambiguity error occurs 
// this code is all about to removing ambiguity error with the help of virtual base class
// this method is also known as virtual inheritance
#include<iostream>
using namespace std;
class base{
    public : 
    void fun()
    {cout<<"base class\n";}
};
class parent1 : virtual public base{};
class parent2 : virtual public base{};
class child : public parent1, public parent2
{};
int main()
{
    child ch;
    ch.fun();
}
