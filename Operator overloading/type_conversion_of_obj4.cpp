// to convert user defined into fundamental data type
#include<iostream>
using namespace std;
class celsius{
    float cel;
    public:
    celsius(float c=0)
    {cel=c;}
    operator float()    // we can make normal function also;
    {
        float x=1.8*cel+32;
        return x;
    }
};
int main()
{
    celsius c1(40);
    float far;
    far=c1;
    cout<<"Temp in farhenit : "<<far;
}