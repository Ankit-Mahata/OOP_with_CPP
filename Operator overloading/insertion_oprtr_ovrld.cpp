// overloading insertion operator to print complex numbers
#include<iostream>
using namespace std;
class complex {
    float real, imag;
    public:
    void input()
    {
        cout<<" Enter real and imaginary values : ";
        cin>>real>>imag;
    }
    friend void operator <<(ostream &obj1, complex &obj2)
    {
        obj1<<" "<<obj2.real<<" + i"<<obj2.imag<<endl;
    }
};
int main()
{
    complex c1,c2;
    c1.input();
    c2.input();
    cout<<c1;
    cout<<c2;
}