#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    srand(time(NULL));
    int value=rand() % 5 + 1;
    switch(value)
    {
        case 1 : cout<<"You won a bumber sticker ! \n"; break;
        case 2 : cout<<"You won a T-shirt ! \n"; break;
        case 3 : cout<<"You won a free launch ! \n"; break;
        case 4 : cout<<"you win a gift card !\n"; break;
        case 5 : cout<<"you win a concert ticket !\n"; break;
    }
}