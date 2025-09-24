#include<iostream>
using namespace std;
class enemy{
    public:
    virtual void attack()
    {cout<<"enemy attack\n";}
};
class zombies  : public enemy 
{
    public : 
    void attack()
    {cout<<"zombies attack\n";}
};
class vampire : public enemy{
    public:
    void attack()
    {cout<<"vampire attack\n";}
};
class ghost : public enemy 
{
    public:
    void attack()
    {cout<<"ghost attack\n";}
};
int main()
{
    enemy en;
    zombies zo;
    vampire va;
    ghost gh;
    enemy *ptr[]={&en,&zo,&va,&gh};
    for(int i=0; i<4; i++)
    {
        ptr[i]->attack();
    }
}