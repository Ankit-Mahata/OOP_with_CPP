// function template with multiple arguments
#include<iostream>
using namespace std;
template <typename x, typename y>
void calc(x *ptr, int n, y &sum , y &avg)
{
   sum=0;
   avg=0;
   for(int i=0; i<n; i++)
   {
    sum=sum+*(ptr+i);
   }
   avg=sum/n;
}
int main()
{
    int arr1[10];
    float arr2[10];
    float sum, avg;
    int n;
    char ch;
    cout<<"what type of numbers you want to enter ? \n press (i) for integer or (f) for float : ";
    cin>>ch;
    cout<<"How many numbers you want to give ? : ";
    cin>>n;
    if(ch=='i'|| ch=='I')
{
    cout<<"enter "<<n<<" integer numbers ---\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    calc(arr1,n,sum,avg);
    cout<<"sum = "<<sum<<"   avg = "<<avg;
}
else if(ch=='f'|| ch=='F')
{
    cout<<"enter "<<n<<" float numbers ---\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }
    calc(arr2,n,sum,avg);
    cout<<" sum = "<<sum<<" avg = "<<avg<<endl;
}
else 
cout<<"Please enter valid numbers !!\n";
}