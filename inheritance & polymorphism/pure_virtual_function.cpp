#include<iostream>
using namespace std;
class dimension
{
    protected:
    int l,b,h;
    public:
    virtual void  area()=0;
};
class square : public dimension
{
    public:
    square(int ln)
    {l=ln;}
    void area()
    {
        cout<<"Area of sqare = "<<l*l<<endl;
    }
};
class rectangle : public dimension
{
    public:
    rectangle(int ln, int bd )
    {l=ln;b=bd;}
    void area()
    {
        cout<<"Area of rectangle = "<<l*b<<endl;
    }
};
class triangle : public dimension
{
    public:
    triangle(int bd, int ht)
    {b=bd;h=ht;}
    void area()
    {
        cout<<"Area of triangle = "<<0.5*b*h<<endl;
    }
};
int main()
{
    square s(4);
    rectangle r(2,5);
    triangle t(5,7);
    dimension *ptr[]={&s,&r,&t};
    for(int i=0; i<3; i++)
    {
        ptr[i]->area();
    }
}
