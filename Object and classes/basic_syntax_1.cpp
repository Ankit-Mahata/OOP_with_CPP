// basic syntax of class 
#include<iostream>
using namespace std;
class student{
    char name[20];
    float marks;
 public:
   void getdata()
   {
      cout<<"\nEnter name and marks --\n";
      cin>>name>>marks;
   }
   void showdata()
   {
      cout<<"\nName : "<<name;
      cout<<"\nMarks : "<<marks<<endl;
   }
};
 int main()
 {
    student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.showdata();
    s2.showdata();

 }