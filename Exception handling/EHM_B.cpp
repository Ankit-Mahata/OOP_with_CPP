// Exception handling meachanism B
#include<iostream>
using namespace std;
void calculate()
{
    float a,b;
    cout<<"Enter two values : \n";
    cin>>a>>b;
    if(b==0)
    throw b;
    cout<<"quotient is : "<<a/b<<endl;
}
int main()
{
    try{
        calculate();
    }
    catch(float c)
    {
        cout<<"division by zero is not possible !!\n";
    }
    cout<<" **  END  **";
}