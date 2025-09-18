// to overload insertion(<<),extraction(>>) and plus(+) that allow chaining of complex numbers
// i.e. we can do cout<<c1<<c2; or cin>>c1>>c2; or c=c1+c2+c3;
#include<iostream>
using namespace std;
class complex{
    float real, imag;
    public:
    complex operator +(complex c) // we can also return by reference (complex&)
    {
       complex temp;
       temp.real=real+c.real;
       temp.imag=imag+c.imag;
       return temp; // for chaining 
    }
    friend ostream& operator <<(ostream &out, complex &c)
    {
        out<<c.real<<" + i"<<c.imag<<endl;
        return out; // for chaining

    }
    friend istream& operator >>(istream &in, complex &c)
    {
        cout<<" Enter real and imaginary part : ";
        in>>c.real>>c.imag;
        return in; // for chaining
    }
};
int main()
{
    complex c1,c2;
    cin>>c1>>c2;
    cout<<" \nthe complex numbers are .....\n";
    cout<<c1<<c2;
    complex c3;
    cin>>c3;
    cout<<c3;
    complex c;
    c=c1+c2+c3;
    cout<<"The sum of 3 complex numbers is : ";
    cout<<c;

}