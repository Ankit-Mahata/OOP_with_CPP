// an example to implement concept of default arguments
#include<iostream>
using namespace std;
int sum(int a, int b=0, int c=0) 
{
    return a+b+c;
}
int main ()
{
    int x,y,z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    cout<<"sum= "<<sum(x)<<endl;
    cout<<"sum= "<<sum(x,y)<<endl;
    cout<<"sum= "<<sum(x,y,z)<<endl;
    

}