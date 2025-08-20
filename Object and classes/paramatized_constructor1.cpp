#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    void print()
    {
        cout<<real<<" + "<<imag<<endl;
    }
    complex()
    {
        real=0;
        imag=0;
    }
    complex(int a, int b)
    {
        real=a;
        imag=b;
    }
    void setdata()
    {
        cout<<"Enter real and imaginary values : ";
        cin>>real>>imag;
    }

};
int main()
{
    complex c1,c2,c3(2,3);
    c1.print();
    c2.print();
    c3.print();
    c1.setdata();
    c2.setdata();
    c3.setdata();
    c1.print();
    c2.print();
    c3.print();

}
