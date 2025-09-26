#include<iostream>
using namespace std;
template <class x, class y>
class abc{
    x a;
    y b;
    public :
    abc(x m, y n)
    {a=m;b=n;}
    void show();
};
template<class x, class y>
void abc<x,y>::show()
{
    cout<<"a = "<<a<<" b = "<<b<<endl;
}
int main()
{
    abc <int,float> obj1(3,4.7);
    cout<<"data of obj1 \n";
    obj1.show();
    abc <char,double> obj2('a',3.456);
    cout<<"data of obj2 \n";
    obj2.show();

}