// To find the simple interest using inline functions
#include<iostream>
using namespace std;
inline double si(int p,int t,int r)
{
    return((p*t*r)/100);
}
int main()
{
    int p,t,r;
    double i;
    cout<<"Enter principal amount --> ";
    cin>>p;
    cout<<"Enter time in years --> ";
    cin>>t;
    cout<<"Enter rate of interest --> ";
    cin>>r;
    i=si(p,t,r);
    cout<<"simple interest --> "<<i<<endl;
}
