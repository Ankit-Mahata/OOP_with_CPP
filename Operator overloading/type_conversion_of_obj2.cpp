// type conversion of one object to another using constructor 
#include<iostream>
#include<cmath>
#define pi 3.14159265358979323846
using namespace std;
class polar{
    float rad,ang;
    public:
    void input()
    {
        cout<<"Enter radius and angle in degree ---> ";
        cin>>rad>>ang;
        ang=ang*(pi/180);
    }
    void output()
    {
        cout<<"\nradius = "<<rad<<"  angle = "<<ang<<" (rad)\n";
    }
    float radius(){return rad;}
    float angle(){return ang;}
};
class cartesian{
    float x,y;
    public:
    cartesian(){x=0;y=0;}
    cartesian(polar p)
    {
        x=p.radius()*cos(p.angle());
        y=p.radius()*sin(p.angle());
    }
    void output()
    {
        cout<<"\nx = "<<x<<"  y = "<<y;
    }
};
int main()
{
    polar pol;
    pol.input();
    cartesian cart;
    cout<<"data in polar form .... ";
    pol.output();
    cout<<"data in cartesian .....";
    cart=pol;
    cart.output();
}