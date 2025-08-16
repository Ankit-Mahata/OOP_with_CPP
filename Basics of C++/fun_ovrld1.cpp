// to use function overloading with different numbers of arguments
#include<iostream>
using namespace std;
int findmax(int a, int b)
{
    return a>b?a:b;
}
int findmax(int x, int y, int z)
{
    int max=x;
    if(y>max)
    max=y;
    if(z>max)
    max=z;
    return max;
    // Alternatively, you can use the following line to achieve the same result:
    //return findmax(findmax(x, y), z);
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"maximum of first two numbers is : "<<findmax(a,b)<<endl;
    cout<<"maximum of three numbers is : "<<findmax(a,b,c)<<endl;

}
