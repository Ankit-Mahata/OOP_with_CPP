#include<iostream>
using namespace std;
class product
{   int x;
    static int s;
    public:
    void setstatic(int a)
    {s=a;}
    void showstatic()
    {cout<<"static variable = "<<s<<endl;}

};
int product::s=1;

int main()
{
    product p1,p2;
    //product::showstatic();  
    
    /* we can't do this because it is instace member fuction which only called using object 
     but this instance member function showstatic() & setstatic() both are not doing any object specific work
     or simply ther are not accessing or changing member variable "x". so it does not make any sense to make them instance member function.
     therefore ,from now we are going make all those function static which donot make any change in instance member varisble */  
   
     p1.showstatic();
    p1.setstatic(10);
    p1.showstatic();
    p2.showstatic();
}