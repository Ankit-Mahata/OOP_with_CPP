//Exception handling mechanism - A
#include<iostream>
using namespace std;
int main()
{
    int mom_age,son_age;
    cout<<"enter age of  \n";
    try{
        cout<<"mom : ";
        cin>>mom_age;
        cout<<"son : ";
        cin>>son_age;
        if(mom_age < son_age)
        throw 10;
        else
        cout<<"age difference is : "<<mom_age-son_age<<endl;
    }
    catch(int a)
    {
        cout<<"error !! son age cannot be greater than mom age\n";
    }
    cout<<" ** END **";
}
