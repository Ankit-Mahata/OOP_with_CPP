#include<iostream>
using namespace std;
class product{
    int a,b;
    public:
    void setter()
    {
        cout<<"Enter two values ----"<<endl;
        cin>>this->a>>this->b;
    }
    void getter()
    {cout<<"\na = "<<this->a<<endl<<"b = "<<this->b;
        cout<<endl<<this;}
};
int main()
{
    product p1,p2;
    p1.setter();
    p2.setter();
    p1.getter();
    p2.getter();
    cout<<endl<<&p1<<endl<<&p2;
}