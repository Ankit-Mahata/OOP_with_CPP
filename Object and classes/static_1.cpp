// program to demonstrate static data member
// static member variable must be defined outside the class
#include<iostream>
using namespace std;
class product{
    public:
    static int price;
};
int product:: price; // stastic member variable defined

int main()
{
    cout<<product::price; // accessing static member variable using class name
    product::price=50;  // can be accessed outside the class because this time it is public
    cout<<endl<<product::price;
    product p1,p2;
    p1.price=100;         // accessing static member variable using object
    cout<<endl<<p2.price; // accessing static member variable using another object
}