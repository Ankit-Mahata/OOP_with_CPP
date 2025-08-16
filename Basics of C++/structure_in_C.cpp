// structure in C
#include<iostream>
#include<string.h>
using namespace std;

struct student {
    int roll;
    char name[20];
    float marks;
};
void output(struct student s)
{
    cout <<endl<< "Roll: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}
int main()
{
    struct student s1={12,"Ankit",89.99};
    struct student s2;
    s2.roll=24;
   // s2.name="Sandy"; // invalid , because array name is not assignable and is treated as constant pointer
   strcpy(s2.name, "Sandy");
    s2.marks=78.50;
    output(s1);
    output(s2);


}
