// template funtion overloaded with normal function
#include<iostream>
using namespace std;
template<class t>
t sum(t x, t y)
{
    t s;
    s=x+y;
    return s;
}
int sum(int a, int b)
{
    int s;
    s=a+b;
    return s;
}
int main()
{
    cout<<" sum = "<<sum(2,5)<<endl;
    cout<<" sum = "<<sum(2.3,3.7)<<endl;
}