#include<iostream>
using namespace std;
class civil;
class computer{
    string name1;
    int roll1;
    public:
    void getdata()
    {
        cout<<"Enter name and roll\n";
        cin>>name1>>roll1;
    }
    void showdata()
    {   cout<<"\nDetail of computer student -- \n";
        cout<<"\nname : "<<name1<<" \nroll : "<<roll1<<endl;
    }
    void swap(civil &);

};
class civil{
    string name2;
    int roll2;
    public:
    void getdata()
    {
        cout<<"Enter name and roll\n";
        cin>>name2>>roll2;
    }
    void showdata()
    {   cout<<"\nDetail of civil student -- \n";
        cout<<"\nname : "<<name2<<"\n roll : "<<roll2<<endl;
    }
    friend void computer :: swap(civil &);
};
void computer :: swap(civil &c)
{
    string temp_name;
    int temp_roll;
    temp_name=c.name2;
    c.name2=name1;
    name1=temp_name;
    temp_roll=c.roll2;
    c.roll2=roll1;
    roll1=temp_roll;
}

int main()
{
    computer cm;
    civil cv;
    cm.getdata();
    cv.getdata();
    cout<<"Before swapping--\n";
    cm.showdata();
    cv.showdata();
    cout<<"\nAfter swapping \n";
    cm.swap(cv);
    cm.showdata();
    cv.showdata();
}