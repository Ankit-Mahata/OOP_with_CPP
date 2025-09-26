#include<iostream>
using namespace std;
const int n=5;
template <class t>
class array{
    t arr[n];
    public:
    void getarr()
    {
        cout<<"Enter 5 elements --- \n";
        for(int i=0; i<5; i++)
        {
            cin>>arr[i];
        }
    }
    t findmax();
    t findmin();
};
template<class t>
t array<t>::findmax()
{
    t max =arr[0];
    for(int i=0; i<5; i++)
    {
       if (arr[i]>max)
       max=arr[i];
    }
    return max;
}
template <class t>
t array<t>::findmin()
{
    t min=arr[0];
    for(int i=0; i<5; i++)
    {
    if(arr[i]<min)
    {
        min=arr[i];
    }
    }
    return min;
}
int main()
{
    array<int> obj1;
    array<float> obj2;
    obj1.getarr();
    obj2.getarr();
    cout<<"max value of int array = "<<obj1.findmax()<<endl;
    cout<<"min value of float array = "<<obj2.findmin()<<endl;
    cout<<"min value of int array = "<<obj1.findmin()<<endl;
    cout<<"max value of float array = "<<obj2.findmax()<<endl;
}