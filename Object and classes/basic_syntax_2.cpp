#include<iostream>
using namespace std;
class employee{
    string name;
    float salary;
 public:
  void setter();
  void getter(); 

};
 void employee :: setter()
 {
    cout<<"\nEnter name and salary --\n";
    cin>>name>>salary;
 }
 void employee :: getter()
 {
    cout<<"\nName : "<<name<<endl<<"salary : "<<salary<<endl;
 }

 int main()
 {
    employee e1,e2;
    e1.setter();
    e2.setter();
    e1.getter();
    e2.getter();
 }
