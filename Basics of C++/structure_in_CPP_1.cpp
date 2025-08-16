/* structure in C++. we can make functions/methods inside structures in C++. 
This example also implement Encapsulation, as data are combined with functions
but also data are directly accessible outside the structure so there is no data privacy  */

#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int age;
    float marks;
    void input()
    {
        cout<<endl<<"Enter name, age and marks of student : \n";
        cin>>name>>age>>marks;
    }
    void detail()
    {
        cout<<"\nname = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"marks = "<<marks<<endl;
    }
};
   int main ()
   {
    student s1={"Ankit",20,99.99};
    student s2;
    s2.name="sandy";
    s2.age=21;
    s2.marks=70.5;
    student s3;
    s3.input();
    student s4;
    s4.input();  // in C, we did input(s1); due to absence of encapsulation
    s1.detail();
    s2.detail();
    s3.detail();
    s4.detail();
    return 0;
   } 