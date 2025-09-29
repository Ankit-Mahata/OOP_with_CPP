// generating a random number in a range
// random number in a single dice
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
   srand(time(NULL));
   int side;
   side=rand() % 6 + 1;
   cout<<"side = "<<side<<endl;
}