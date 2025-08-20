#include<iostream>
using namespace std;
class product
{
    int x,y;
    public:
    void print()
    {cout<<x<<y;}
    product()
    {cout<<"I am a constructor\n";}
};
int main()
{
    product p1,p2;
}
