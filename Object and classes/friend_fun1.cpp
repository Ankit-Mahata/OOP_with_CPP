// program to demonstrate the use of friend function
// friend function can access private and protected members of the class
#include<iostream>
using namespace std;
class vector{
    int a[10];
    float avg;
    public:
    void getdata();
    friend void average(vector);
};
void vector:: getdata()
{
    cout<<"Enter 10 elements --> "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
}
void average(vector v)
{
    int sum=0;
    for (int i=0; i<10; i++)
    {
        sum=sum+v.a[i];
    }
    v.avg=sum/10;
    cout<<"Average of the elements is: "<<v.avg<<endl;
}

int main()
{
    vector v;
    v.getdata();
    average(v);
}