// type conversion of one object to another using operator function
#include<iostream>
#include<cmath>
#define pi 3.14159265358979323846
using namespace std;
class polar;
class cartesian{
    float xco,yco;
    public:
    cartesian(float x=0 , float y=0){xco=x; yco=y;}
    void input(){
        cout<<" Enter cartesian coordinates : \n";
        cin>>xco>>yco;
    }
    void output()
    {
        cout<<" x = "<<xco<<"  y = "<<yco<<endl;
    }
    operator polar(); // to convert cartesian into polar
    /* if we are using operator polar() function in cartesian class then 
    polar class needs to be defined completely before defining this function  */
    // therefore we will define this function after defining polar class
};
class polar{
    float rad, ang;
    public:
    polar(float r=0, float a=0){rad=r; ang=a;}
    void input()
    {
        cout<<" Enter radius and angle in degree : \n";
        cin>>rad>>ang;
        ang=ang*pi/180; // converting degree into radian
    }
    void output()
    {    ang= ang*180/pi; // converting radian into degree for output
         cout<<" radius = "<<rad<<"  angle = "<<ang<<" degrees\n";
    }
    operator cartesian()
    {
        float x= rad * cos(ang);
        float y=rad * sin(ang);
        return cartesian(x,y); // returning temporary object
    }
};
// defining cartesian to polar conversion function
cartesian :: operator polar()
{   
    /*polar p;
           p.rad = ......;
           p.ang = ...... */  // we can also do this way but rad and ang are private members of polar class
           // if we do this way then we have to make rad and ang as public members of polar class
           // we cannot make function that return rad and ang because here we use rad and ang to assign values not to get values
            

    float r=sqrt(xco*xco + yco*yco); // better than pow(xco,2)+pow(yco,2) also faster
    float a=atan2(yco,xco); // same as atan(yco/xco) but safer {atan is tan inverse}
    // atan2 handles all quadrants and avoids division by zero 
    return polar(r,a); // returning temporary object
}
int main()
{
    polar p1,p2;
    cartesian c1,c2;
    p1.input();
    cout<<" converting polar into cartesian ....  \n";
    c1=p1; // c1=c1.operator cartesian();
    c1.output();
    cout<<"\n Want to convert cartesian into polar ? (Y/N) : ";
   char ch;
   cin>>ch;
   switch (ch)
   {
    case 'y' : c2.input();
               cout<<"Converting cartesian into polar .... \n";
               p2=c2;
               p2.output();
               break;
    case 'n' : cout<<"  *** End ***  ";
               break;
    default :  cout<<"  *** End ***  ";
               break;                 
   }

}