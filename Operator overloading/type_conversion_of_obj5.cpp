#include<iostream>
using namespace std;
class time{
    int hh,mm,ss;
    public:
    time(int sec=0)
    {
        hh=sec/3600;
        mm=sec%3600;
        mm=mm/60;
        ss=sec%60;
    }
    void show()
    {
        cout<<" hour = "<<hh<<endl;
        cout<<" minuute = "<<mm<<endl;
        cout<<"seconds = "<<ss<<endl;
    }
};
int main()
{
    int s;
    cout<<"Enter seconds ---> ";
    cin>>s;
    time t(s);
    t.show();
}