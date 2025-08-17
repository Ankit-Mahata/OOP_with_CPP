#include<iostream>
using namespace std;
class BCT
{
    int code;
    static int count;
    public:
    void setcode()
    {
        count++;
        code=count;
    }
    void showcode()
    {
        cout<<"\nstudent code =  "<<code<<" BCT/081"<<endl;
    }
    static void showcount()
    {
        cout<<"Records of "<<count<<" students found. "<<endl;          
    }
     
};
int BCT::count;
int main()
{
    BCT s1,s2;
    s1.setcode();
    s2.setcode();
    BCT::showcount();
    BCT s3;
    s3.setcode();
    BCT::showcount();
    s1.showcode();
    s2.showcode();
    s3.showcode();
}