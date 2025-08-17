#include<iostream>
using namespace std;
class item{
    static int count;
    float price;
  public:
  void getdata(float p)
  {
    price=p;
    count++;
  }
  void showcount()
  {cout<<"Count = "<<count<<endl;}
};
int item::count;
int main()
{
    item i1,i2,i3;
    i1.showcount();
    i2.showcount();
    i3.showcount();
    i1.getdata(10.5);
    i2.getdata(20.5);
    i3.getdata(30.5);
    i1.showcount();
    i2.showcount();
    i3.showcount();
    return 0;
}