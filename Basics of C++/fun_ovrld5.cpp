// type conversion in function overloading
#include<iostream>
using namespace std;
struct student{
    int roll;
    char name[20];
};
void fun(struct student s)
{
    cout << "Roll: " << s.roll << ", Name: " << s.name << endl;
}
void fun(float f)
{
    cout << "Float value: " << f << endl;
}
int main()
{
    char c='A';
    fun(c);
}
// here, there is no exact match for fun(c)
// also, there is no type promotion for char to int (char --> int)
// so, according to type connversion 
//"Any primitive type can be converted into any other primitive type if there is no any exact match and type promotion"
// so char can be converted to int , float or double 
// here, the compiler will convert char to float