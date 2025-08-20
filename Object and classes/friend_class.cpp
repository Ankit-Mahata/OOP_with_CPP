// to implement the concept of friend class
#include<iostream>
using namespace std;
class B;
class A{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter two values : "<<endl;
        cin>>x>>y;
    }
    friend class B;
};
class B{
    public:
    void showdata(A obj)
    {
        cout<<obj.x<<" "<<obj.y;
    }
};
int main()
{
    A a;
    B b;
    a.getdata();
    b.showdata(a);
}