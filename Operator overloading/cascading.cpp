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
    complex& operator ++()
    {
        real++;
        imag++;
        cout<<this<<endl;
        return *this;
    }
};
int main()
{
    complex c1,c2;
    c1.input();
    c2=++++c1;
    c1.output();
    c2.output();
    
}