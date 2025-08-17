// program to add two time objects using object as argument
#include<iostream>
using namespace std;
class time {
    int hr,min;
    public:
    void gettime(int h, int m)
    {
        hr=h;
        min=m;
    }
    void display()
    {
        cout<<"hours : "<<hr<<"  minutes : "<<min<<endl;
    }
   void sumtime(time t1,time t2)
   {
    int temp;                 // without creating temp
    temp=t1.min+t2.min;      // min=t1.min+t2.min
    temp=temp/60;           //hr=min/60
    hr=t1.hr+t2.hr+temp;   // hr=t1.hr+t2.hr+hr
    min=(t1.min+t2.min)%60; //min=min%60
   }
};
int main()
{
    time t1,t2,t3;
    t1.gettime(2,40);
    t2.gettime(3,50);
    t3.sumtime(t1,t2);
    t1.display();
    t2.display();
    cout<<"Sum of time is -- "<<endl;
    t3.display();

}