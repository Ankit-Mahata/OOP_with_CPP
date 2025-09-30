// self made game
#include<iostream>
#include<ctime>
using namespace std;
char getchoice();
char getcomputerchoice();
void showchoice(char,char);
void result(char,char);
int main()
{
    cout<<"\n\n  ****  ROCK PAPER SCISSOR GAME  *** \n";
    char c1=getchoice();
    char c2= getcomputerchoice();
    showchoice(c1,c2);
    result(c1,c2);


}
char getchoice()
{
    int choice;
    cout<<"Enter your choice --- \n";
    cout<<" 1 : rock \n 2 : paper \n 3 : scissor\n";
    cin>>choice;
    switch(choice)
    {
        case 1 : return 'r';
                 break;
        case 2 : return 'p';
                 break;
        case 3 : return 's';
                 break;
        default : cout<<"invalid input !!";
                 return 0;
                 break;                           
    }
}
char getcomputerchoice()
{
    int value;
    srand(time(NULL));
    value = rand() % 3 + 1;
    switch(value)
    {
        case 1 : return 'r'; break;
        case 2 : return 'p'; break;
        case 3 : return 's'; break;
    }
}

void showchoice(char c1, char c2)
{
    switch(c1)
    {
        case 'r' : cout<<"your choice --> rock\n";break;
        case 'p' : cout<<"your choice --> paper\n";break;
        case 's' : cout<<"your choice --> scissor\n";break;
    }
    
    switch(c2)
    {
        case 'r' : cout<<"computer choice --> rock\n";break;
        case 'p' : cout<<"computer choice --> paper\n";break;
        case 's' : cout<<"computer choice --> scissor\n";break;
    }
}
void result(char c1,char c2)
{
    if((c1=='r' && c2=='s') || (c1=='p' && c2=='r') || (c1=='s' && c2=='p'))
    cout<<"congratulations !! you win :) \n";
    else if(c1==c2)
    cout<<"   --- A TIE :( --- :( \n";
    else
    cout<<"you loose !! :( ......\n";

}