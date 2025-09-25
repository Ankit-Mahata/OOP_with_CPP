#include<iostream>
using namespace std;
class department{
    protected : int batch;
    public:
    virtual void show()=0;
};
class education : public department
{
    public :
    education(int b)
    {batch=b;}
    void show()
    {cout<<"stream = education  batch = "<<batch<<endl;}
};
class science : public department{
  public:
  science(int b)
  {batch=b;}
  void show()
  {cout<<"stream = science  batch = "<<batch<<endl;}
};
class engineering : public department{
    protected : int sem;
};
class civil : public engineering 
{
    public :
    civil(int b, int s)
    {batch=b; sem=s;}
    void show()
    {cout<<"stream = engineering  branch = civil  batch = " <<batch<<"  semester = "<<sem<<endl;}
};
class computer : public engineering 
{
    public :
    computer(int b, int s)
    {batch=b; sem=s;}
    void show()
    {cout<<"stream = engineering  branch = computer  batch = " <<batch<<"  semester = "<<sem<<endl;}
};
int main()
{
    education ed(2078);
    science sc(2080);
    civil civ(2077,2);
    computer com(2075,6);
    department *ptr[]={&ed,&sc,&civ,&com};
    for(int i=0; i<4; i++)
    {
        ptr[i]->show();
    }
}
