// program to implement concept of operator overloading and overload operator function
#include<iostream>
using namespace std;
class complex{
    float real,img;
    public:
    complex()
    {
        real=0;
        img=0;

    }
    void input()
    {
        cout<<"Enter real and imaginary values of complex number : ";
        cin>>real>>img;
    }
    void display()
    {
        cout<<"The sum of two complex numbers is ---\n";
        cout<<real<<" + i "<<img<<endl;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void operator *(complex c)  // to multiply two complex numbers 
    {
        float x,y;
        x=real*c.real-img*c.img;
        y=real*c.img+img*c.real;
        cout<<"("<<real<<" + i"<<img<<") * "<<"("<<c.real<<" + i"<<c.img<<")  =  ";
        cout<<x<<" + i "<<y<<endl;
        
    }
    void operator *(float a) // Operator func overloaded , in case if complex number is multiplied by integer
    { 
        float x,y;
        x=real*a;
        y=img*a;
        cout<<"("<<real<<" + i"<<img<<") * "<<a<<"  =  ";
        cout<<x<<" + i "<<y<<endl;
    }
     

};
int main()
{
    complex c1,c2;
    c1.input();
    c2.input();
    complex c3=c1+c2;
    c3.display();
    c1*c2;
    c1*2;  // if 2*c1 , then we need a friend function 
    c2*3;
}
