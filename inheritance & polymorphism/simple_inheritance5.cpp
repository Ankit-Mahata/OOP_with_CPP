// paramatized constructor call in simple inheritance
#include<iostream>
using namespace std;
class A{
    int x;
    public: 
    A(int a)
    {x=a;
    cout<<"x="<<x<<endl;
    }
};
class B : public A
{
    public:
    B(int y,int z):A(z)
    {
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    B obj(2,3);
}