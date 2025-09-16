#include<iostream>
using namespace std;
class complex{
    int r,i;
    public:
    complex()
    {
        r=0;
        i=0;
    }
    void showdata()
    {
        cout<<"real="<<r<<" imaginary="<<i;
    }
};
int main()
{
    complex c1;
    c1.showdata();
}