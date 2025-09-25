// function template overloaded with function template
#include<iostream>
using namespace std;
template <class t>
void add (t x, t y)
{
    cout<<"sum1 = "<<x+y<<endl;
}
template<class a, class b>
void add (a x, b y)
{
    cout<<"sum2 = "<<x+y<<endl;
}
int main()
{
    add(2,3);
    add(1.1,2);
    add(2.4,3.5);
    add(5,1.1);
}
