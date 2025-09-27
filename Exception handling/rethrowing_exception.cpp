#include<iostream>
using namespace std;
class number
{
    int x,y;
    public:void divide(int p, int q)
    {
        cout<<"inside divide function\n";
    
    try{
        if(q==0)
        throw 6;
        else
        cout<<"quotient = "<<p/q<<endl;
    }
    catch(int)
    {
        cout<<" !! denominator is zero !! process is further\n";
        throw;
    }
    cout<<"Exiting the class \n";
}
};
int main()
{
    cout<<"inside main\n";
    try{
        number n1,n2;
        n1.divide(3,7);
        n2.divide(5,0);
    }
    catch(int)
    {
        cout<<"division by zero is not possible \n";
    }
    cout<<"end of main function";
}