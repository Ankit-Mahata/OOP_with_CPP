#include<iostream>
using namespace std;
#include<cstring>
class student{
private:
    char name[25];
    int roll;
protected:
    void setname(char *ptr)
    {
    strcpy(name,ptr);
    }
    void setroll(int r)
    {roll=r;}
public:
    char* getname()
    {
    return name;
    }
    int getroll()
    {
     return roll;
    }
};
class physique:public student{
private: 
    int ht;
    int wt;
protected:
    void setheight(int h)
    {ht=h;}
    void setweight(int w)
    {wt=w;}
public:
    int getheight()
    {return ht;}
    int getweight()
    {return wt;}

void setdata(char *n, int ro, int he, int we)
{
 setname(n);
 setroll(ro);
 setheight(he);
 setweight(we);
}
void showdata()
{
    cout<<" Name   : "<<getname()<<endl;
    cout<<" Roll   : "<<getroll()<<endl;
    cout<<" Height : "<<getheight()<<endl;
    cout<<" weight : "<<getweight()<<endl;
}
};
int main()
{
    char n1[25];
    int r1,h1,w1;
    cout<<" Enter name, roll, height and weight ---- \n";
   // cin.ignore();  // by default cin.ignore() ignores 1 character from input buffer , here if we input name then first character will bw ignored 
   // generally cin.ignore() is used if any input is already taken to avoid newline character in input buffer
   cin.getline(n1,25);
    cin>>r1>>h1>>w1;
    physique py;
    py.setdata(n1,r1,h1,w1);
    py.showdata();
}