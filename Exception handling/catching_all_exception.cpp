#include<iostream>
using namespace std;
class catch_all
{
    public: void fun(int p)
    {
        try{
            if(p==0)
            throw 9;
            if (p<0)
            throw 'a';
            if(p==1)
            throw 1.1;
            cout<<"given element is = "<<p<<endl;
        }
        catch(...)
        {
            cout<<"i catched all exceptions !! \n";
        }
        cout<<"going out of class\n";
    }
};
int main()
{
    catch_all c1,c2,c3;
    c1.fun(0);
    c2.fun(-2);
    c3.fun(1);
    c3.fun(2);
}