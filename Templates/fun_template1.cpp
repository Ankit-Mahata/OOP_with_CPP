#include<iostream>
using namespace std;
template <typename x>
x abso(x n)
{
    if (n<0)
    return -n;
    else
    return n;
}
int main()
{
    int i1=5,i2=-2;
    float f1=3.5,f2=-0.1;
    double d1=0,d2=-9;
    cout<<"i1 = "<<abso(i1)<<endl;
    cout<<"i2 = "<<abso(i2)<<endl;
    cout<<"f1 = "<<abso(f1)<<endl;
    cout<<"f2 = "<<abso(f2)<<endl;
    cout<<"d1 = "<<abso(d1)<<endl;
    cout<<"d2 = "<<abso(d2)<<endl;

}
