#include<iostream>
using namespace std;
class constructor{
    int a,b,c;
    public:
    constructor()
    {a=0;b=0;c=0;}
    constructor(int x, int y)
    {
        a=x;
        b=y;
        c=a+b;
    }
    void show()
    {cout<<a<<" "<<b<<" "<<c<<"\n";}
};
int main()
{
    constructor c1,c2,c3(2,3),c4(4,5);
    c1.show();
    c2.show();
    c3.show();
    c4.show();
}