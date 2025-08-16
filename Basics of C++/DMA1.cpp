// program to add two numbers using DMA
#include<iostream>
using namespace std;
int main()
{
    int *p1,*p2;
    int sum;
    p1=new int;
    p2=new int;
    cout<<"Enter two numbers : ";
    cin>>*p1>>*p2;
    sum=*p1+*p2;
    cout<<"sum is = "<<sum;
    delete p1;
    delete p2;
}
