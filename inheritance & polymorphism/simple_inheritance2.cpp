// to demonstrate how protected data in accessed in inheritance
#include<iostream>
using namespace std;
class citizen{
    private:
    char name[20];
    int age;
    protected:
    long int id;
    public:
    void setid()
    {
        cout<<" Enter citizenship ID : ";
        cin>>id;
    }
    void setdata()
    {
        cout<<" Enter name and age : "<<endl;
        cin.ignore();
        cin.getline(name,25);
        cin>>age;
    }
    void showdata()
    {
        cout<<" Name : "<<name<<endl;
        cout<<" Age  : "<<age<<endl;
        cout<<" ID   : "<<id<<endl;
    }
};
class ankit : public citizen
{
    char fname[20];
    public:
    void setname()
    {
        cout<<" Enter father's name : ";
        cin.ignore();
        cin.getline(fname,20);
    }
    void showname()
    {
        cout<<" Father's name : "<<fname<<endl;
    }

};
int main()
{
    ankit an;
    an.setdata();
    an.setid(); // protected member accessed
    an.setname();
    an.showdata();
    an.showname();
}