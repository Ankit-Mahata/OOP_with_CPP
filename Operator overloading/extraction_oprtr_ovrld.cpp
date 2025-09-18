// to overload extraction operator to take input of complex numbers
#include<iostream>
using namespace std;
class complex{
    float real, imag;
    public:
    void show()
    {
        cout<<" complex nuumber is ---> "<<real<<" + i"<<imag<<endl;

    }
    friend void operator >>(istream &in, complex & c)
    {
        cout<<"Enter real and imaginary part : ";
        in>>c.real>>c.imag;
    }
};
int main()
{
    complex c1, c2;
    cin>>c1;
    cin>>c2;
    c1.show();
    c2.show();
    // we can't do cin>>c1>>c2; because chaining is not provided by function 
    // we will see this in next program
}