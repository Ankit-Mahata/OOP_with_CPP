// sum of two complex numbers using objects (without using operator overloading)
#include<iostream>
using namespace std;
class complex{
    float x,y;
    public:
    complex(float r=0, float i=0)
    {
        x=r;
        y=i;
    }
    void display()
    {
        cout<<x<<" + i "<<y<<endl;
    }
    void sum(complex a, complex b)
    {
        x=a.x+b.x;
        y=a.y+b.y;
    }
};
int main()
{
    complex c1(2.5,4),c2(3.4,5.5),c3;
    c3.sum(c1,c2);
    c3.display();
}