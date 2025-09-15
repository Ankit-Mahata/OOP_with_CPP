// unary prefix operator overloading
#include<iostream>
using namespace std;
class space{
    float x,y,z;
    public:
    void setter()
    {
        cout<<"Enter three coordinates : ";
        cin>>x>>y>>z;
    }
    void getter()
    {
        cout<<"x = "<<x<<"  y = "<<y<<"  z = "<<z<<endl;
    }
    void operator ++()
    {
        ++x;++y;++z;
    }
    void operator --()
    {
        --x;--y;--z;
    }
    void operator -()
    {
        x=-x;y=-y;z=-z;
    }
};
int main()
{
    space s1,s2,s3,s4;
    s1.setter();
    s2.setter();
    s3.setter();
    ++s1;
    --s2;
    -s3;
    s1.getter();
    s2.getter();
    s3.getter();
    s4.setter();
    s4.operator -(); //same as -s4 ;
    s4.getter();
}