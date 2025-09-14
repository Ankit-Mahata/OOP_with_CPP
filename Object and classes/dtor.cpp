#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(int x, int y)
    {
       real=x; imag=y;
    }
    ~complex()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};
int main()
{
    complex c1,c2(3,2);
}