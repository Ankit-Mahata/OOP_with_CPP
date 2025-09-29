#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    srand(time(NULL));
    int value=rand() % 5 + 1;
    switch(value)
    {
        case 1 : cout<<"You won a bumber sticker ! \n";
        case 2 : cout<<"You won a T-shirt ! \n";
        case 3 : cout<<"You won a free launch ! \n";
        case 4 : cout<<"you win a gift card !\n";
        case 5 : cout<<"you win a concert ticket !\n";
    }
}