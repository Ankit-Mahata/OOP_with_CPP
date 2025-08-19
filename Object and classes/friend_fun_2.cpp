// to make a function as a friend of one class and member of another class
#include<iostream>
using namespace std;
class mango; // forward declaration of class mango because class mango is used in class apple before its definition
class apple{
    int price1;
    public : 
    void getdata()
    {
        cout<<"Enter the price of apple: "<<endl;
        cin>>price1;
    }
    void showdata()
    {
        cout<<"Price of apple is: "<<price1<<endl;
    }
    void swap(mango &);
};
class mango{
    int price2;
    public:
    void getdata()
    {
        cout<<"Enter the price of mango : "<<endl;
        cin>>price2;
    }
    void showdata()
    {
        cout<<"price of mango is: "<<price2<<endl;
    }
    friend void apple::swap(mango &);
};
void apple :: swap(mango &m) // if we do mango(m) a copy is made 
//and changes are are in that copied obj but not in original
{
   int temp;
   temp=m.price2;
   m.price2=price1;
   price1=temp;
}
int main()
{
    apple a;
    mango m;
    a.getdata();
    m.getdata();
    cout<<"Before swapping\n";
    a.showdata();
    m.showdata();
    cout<<"after swapping\n";
    a.swap(m);
    a.showdata();
    m.showdata();
}
