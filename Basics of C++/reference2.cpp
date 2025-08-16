// To increment all element in an array using reference variable
#include<iostream>
using namespace std;
void increment(int &arr)
{
    arr++ ;
}
int main()
{
    int arr[5];
    cout<<"Input 5 elements : "<<endl;
    for(int i=0 ; i<5; i++)
     {cin>>arr[i];}
    for(int i=0;i<5;i++)
      {increment(arr[i]);}
    cout<<" Updated array : "<<endl;
    for(int i=0; i<5; i++)
    {cout<<arr[i]<<" ";}

}