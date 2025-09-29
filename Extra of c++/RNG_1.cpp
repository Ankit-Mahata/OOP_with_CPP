// RNG = random number generator
// program to generate a random number 
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
   int num;
   srand(time(NULL));
   for(int i=0; i<5; i++){
        cout<<rand()<<endl;
   }
   
}