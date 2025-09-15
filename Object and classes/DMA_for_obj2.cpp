// DMA for object array
#include<iostream>
using namespace std;
class election{
    char name[25];
    long int id;
    static int count;
    public:
    void input()
    {
        cout<<"\nEnter name and id ---->  ";
        cin.ignore();
        cin.getline(name,25); // takes string until new line is encountered (accepts whitespaces)
        cin>>id;
    }
    void output()
    {
       cout<<"Name = "<<name<<"    ID = "<<id<<"  ("<<++count<<")"<<endl; 
    }
};
int election::count=0;
int main()
{
   election *ptr;
   int n;
   cout<<"How many records you want to give : ";
   cin>>n;
   ptr=new election [n];
   for(int i=0; i<n; i++)
   {
     // ptr[i]->input(); // this is wrong because ptr is a pointer to an array of objects, but ptr[i] is a single object . whic should call function by dot operator.
     ptr[i].input();
     //this is same as *(ptr+i).input();
     // or we can do (ptr+i)->input();
   }
   cout<<"\n////////////////////////"<<endl<<"\nThe given data are :\n";
   for(int i=0; i<n; i++)
   {
    ptr[i].output();
   }
   delete []ptr;
}