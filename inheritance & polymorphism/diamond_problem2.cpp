// removing ambiguity error in diamond problem using scope resolution operator
#include<iostream>
using namespace std;
class base{
    public : 
    void fun()
    {cout<<"base class\n";}
};
class parent1 : public base{};
class parent2 : public base{};
class child : public parent1, public parent2
{};
int main()
{
    child ch;
    ch.parent1::fun();
    ch.parent2::fun();
}