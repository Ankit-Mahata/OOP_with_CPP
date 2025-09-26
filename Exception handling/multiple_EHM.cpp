#include<iostream>
using namespace std;
class handler
{
    public:
   void test (int k)
   {
    try{
        if(k==1)
        throw 3;
        else if(k==0)
        throw 'a';
        else if(k==-1)
        throw 3.1;
        cout<<"try block ended \n";
    }
    catch(int a)
    {cout<<"caught an integer !!\n";}
    catch(char ch)
    {cout<<"caught a character !!\n";}
    catch(float a)
    {cout<<"caught a float !!\n";}
}
};
int main()
{
    cout<<"multiple catches !!\n";
    handler h;
    h.test(0);
    h.test(1);
    h.test(-1);
    h.test(2);
}