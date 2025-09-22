#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    char name[20];
    public:
    void getdata()
    {
        cout<<"Enter roll number and name : ";
        cin>>roll;
        cin.ignore();
        cin.getline(name,20);
    }
    void putdata()
    {
        cout<<"Roll number : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
class test : public student{
    protected:
    float sub1,sub2;
    public:
    void getmarks(float m1,float m2)
    {
        sub1=m1;
        sub2=m2;
    }
    void putmarks()
    {
        cout<<"Marks in subject 1 : "<<sub1<<endl;
        cout<<"Marks in subject 2 : "<<sub2<<endl;
    }
};
class result : public test{
    float total;
    public:
    void display()
    {
        total=sub1+sub2;
        putdata();
        putmarks();
        cout<<"Total marks : "<<total;
    }
};
int main()
{
    float m1,m2;
    result r;
    r.getdata();
    cout<<"Enter marks in two subjects : ";
    cin>>m1>>m2;
    r.getmarks(m1,m2);
    r.display();
}