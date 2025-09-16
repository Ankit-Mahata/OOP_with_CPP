// to multiply complex number with an integer using friend function
#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    void input()
    {
        cout<<"\nEnter real and imaginary part of complex number : ";
        cin>>real>>imag;
    }
    void output()
    {
        cout<<"\nThe complex number is : "<<real<<" + "<<imag<<"i"<<endl;
    }
    
    friend complex operator *(int x , complex c)
    {
        complex temp;
        temp.real=x*c.real;
        temp.imag=x*c.imag;
        return temp;
    }
    friend complex operator *(complex c, int x)
    {
        complex temp;
        temp.real=x*c.real;
        temp.imag=x*c.imag;
        return temp;
    }

};
int main()
{
    complex c1,c2,c3,c4;
    c1.input();
    c2.input();
    c3=c1*3;
    c4=4*c2;
    c3.output();
    c4.output();
    }
