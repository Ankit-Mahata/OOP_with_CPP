//  to polar into cartesian coordinates using normal function in destination class
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
    cout<<"radius = "<<rad<<"  angle = "<<ang<<" (rad)\n";
}
float radius(){return rad;}
float angle(){return ang;}
};
class cartesian{
    float x,y;
    public:
    void convert(polar p)
    {
      x=p.radius()*cos(p.angle());
      y=p.radius()*sin(p.angle());
    }
    void output()
    {
        cout<<"x = "<<x<<"  y = "<<y;
    }
};
int main()
{
    polar p;
    p.input();
    cartesian c;
    cout<<"Data in polar form : \n";
    p.output();
    cout<<"Data in cartesian form : \n";
    c.convert(p);
    c.output();
}

