// friend function as a bridge between multiple functions
#include<iostream>
using namespace std;
class physics;
class cpp;
class math 
{
    int m1;
    public:
    void getdata()
    {
        cout<<"Enter math marks : "<<endl;
        cin>>m1;
    }
    friend void sum(math,physics,cpp);
};
class physics{
    int m2;
    public:
    void getdata()
    {
        cout<<"Enter physics marks : "<<endl;
        cin>>m2;
    }
    friend void sum(math,physics,cpp);
};
class cpp{
    int m3;
    public:
    void getdata()
    {
        cout<<"Enter C++ marks : "<<endl;
        cin>>m3;
    }
    friend void sum(math,physics,cpp);
};
void sum(math m,physics p,cpp c)
{
    cout<<"\nThe sum of marks is "<<m.m1+p.m2+c.m3;
}
int main()
{
    math m;
    physics p;
    cpp c;
    m.getdata();
    p.getdata();
    c.getdata();
    sum(m,p,c);
}