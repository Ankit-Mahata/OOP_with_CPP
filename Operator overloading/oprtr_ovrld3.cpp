// program to overload postfix unary operator
#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    void input()
    {
        cout<<"Enter real and imaginary value : ";
        cin>>real>>imag;
    }
    void output()
    {
        cout<<real<<" + i"<<"("<<imag<<")\n";
    }
    void operator ++(int)
    {
        real++;
        imag++;
    }
    void operator --(int)
    {
        real--;
        imag--;
    }
};
int main()
{
    complex c1,c2;
    c1.input();
    c2.input();
    c1++;
    c2--;
    c1.output();
    c2.output();
}
