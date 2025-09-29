// generating multiple sides if there are multiple dice 
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
   srand(time(NULL));
   int side;
   for(int i=0; i<3; i++)  // for three dice at a time
   { side=rand() % 6 + 1;
     cout<<"side = "<<side<<endl;
   }
}