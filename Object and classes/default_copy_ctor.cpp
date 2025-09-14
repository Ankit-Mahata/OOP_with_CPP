#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    complex()
    {
        cout<<"Enter real and imaginary values ----\n";
        cin>>real>>imag;
    }
    void show()
    {
        cout<<real<<" + i"<<imag<<"\n";
    }
};
int main()
{
    complex c1,c2;
    complex c3=c2; /// copy ctor is provided by compiler here
    c1.show();
    c2.show();
    c3.show();

}