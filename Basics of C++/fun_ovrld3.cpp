// to find the area of 3 geometry using function overloading
#include<iostream>
#define pi 3.14
using namespace std;
double area(double r)
{
    return pi*r*r; // area of circle
}
int area(int l, int b)
{
    return l*b; // area of rectangle
}
float area(float b, float h)
{
    return 0.5*b*h; // area of triangle
}
int main()
{
    double r;
    int l,w;
    float b,h;
    cout<<"Enter radius of circle : ";
    cin>>r;
    cout<<"Enter length and width of rectangle : ";
    cin>>l>>w;
    cout<<"Enter base and height of triangle : ";
    cin>>b>>h;
    cout<<"ares of circle ---> "<<area(r)<<endl;
    cout<<"area of rectangle ---> "<<area(l,w)<<endl;
    cout<<"area of triangle ---> "<<area(b,h)<<endl;
    
}

