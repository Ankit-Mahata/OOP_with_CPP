#include<iostream>
using namespace std;
class coordinate{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter coordinates : "<<endl;
        cin>>x>>y;
    }
    void showdata()
    {
        cout<<"\n coordinates are : "<<x<<"  "<<y;
    }
    friend coordinate sum(coordinate,coordinate);
};
coordinate sum(coordinate a,coordinate b)
{
    coordinate c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}
int main()
{
    coordinate d,e,f;
    d.getdata();
    e.getdata();
    f=sum(d,e);
    cout<<"Sum is : \n";
    f.showdata();
}