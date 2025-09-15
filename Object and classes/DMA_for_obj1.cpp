#include<iostream>
using namespace std;
class BCT{
    float math,phy,chem;
    public:
    BCT(float m, float p, float c)
    {
      math=m;
      phy=p;
      chem=c;
    }
    void show()
    {
        cout<<"\n Math = "<<math<<"\n Phy = "<<phy<<"\n Chem = "<<chem;
    }
};
int main()
{
    BCT *ptr;
    ptr= new BCT(90,96.8,87.0);
    ptr->show();
    delete ptr;
}