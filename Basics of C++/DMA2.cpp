#include<iostream>
using namespace std;
void shortarray(int *ptr,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ptr[i]>ptr[j])
            {
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }

        }
    }
}
void display(int *ptr, int n)
{
    for(int i=0; i<n; i++)
    {cout<<ptr[i]<<" ";}
}

int main()
{
    int *p1;
    p1=new int [5]; // int a[5] is not allowed
    cout<<"Enter 5 numbers : ";
    for(int i=0; i<5; i++)
    {
        cin>>p1[i];
    }
    shortarray(p1,5);
    cout<<"Sorted numbers are : "<<endl;
    display(p1,5);
    delete p1;

}