#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    public:
    void getdata()
    {
        cout<<"Enter name and roll : "<<endl;
        cin>>name>>roll;
    }
    void showdata()
    {
        cout<<"Name : "<<name<<"    Roll : "<<roll;
    }
    class date
    {
        int y,m,d;
        public:
        void getdate();
        void showdate();
    };
};
void student :: date :: getdate()
{
    cout<<"\nEnter students DOB in YY//MM//DD : "<<endl;
    cin>>y>>m>>d;
}
void student::date::showdate()
{
    cout<<"year: "<<y<<"   month: "<<m<<"   day: "<<d;
}
int main()
{
    student s;
    student::date d;
    s.getdata();
    s.showdata();
    d.getdate();
    d.showdate();
}