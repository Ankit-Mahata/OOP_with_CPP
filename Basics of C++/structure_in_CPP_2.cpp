/* structure in C++ with access specifiers to implement data hiding / data security */
#include<iostream>
using namespace std;
struct student{
    private:
     int roll;
     int marks;
    public:
     void input()
      {
        cout<<endl<<"Enter roll and marks of student : \n";
        cin>>roll>>marks;
      } 
      void output()
      {
        cout<<"\nRoll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
      }


};
  int main()
  {
    student s;
    // s.marks = 90; // invalid, as marks is private
    s.input();
    s.output();

  }
