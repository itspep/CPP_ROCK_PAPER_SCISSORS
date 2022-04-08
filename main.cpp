#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
const string choice[4]={" ", "Rock", "Paper", "Scissors"};
int main(){
    int computer_choice,
        player_choice,
        computer_total=0,
        player_total=0;
    
    cout<<"To play this game you are to enter 1 for Rock, 2 for Paper and 3 for Scissors\n";
    cout<<"The first player to reach 5 points wins\n";
do
{
    //defining computer_choice
    unsigned seed=time(0);
    srand(seed);
    computer_choice=rand()%3+1;
    cout<<"make your choice 1(rock) 2(paper) 3(scissors)"<<endl;
    cin>>player_choice;
    if(player_choice==computer_choice)
    {
        cout<<"I chose "<<computer_choice<<" too!\n";
        cout<<"it is a tie!\n";
    }
    else if((computer_choice==1 && player_choice==2)||(computer_choice==2 && player_choice==3)||(computer_choice==3 && player_choice==1))
    {
        cout<<"you won!"<<endl;
        cout<<"you chose"<<choice[player_choice]<<"which beats what I chose "<<choice[computer_choice]<<endl;
        player_total++;
    }
    else
    {
        cout<<"I win!\n";
        cout<<"I chose "<<choice[computer_choice]<<"which beats what you chose "<<choice[player_choice]<<endl;
        computer_total++;
    }
} while (computer_total<5 || player_total<5);
cout<<"Total points won by me "<<computer_total<<"compared to total points won by you "<<player_total<<endl;
if(computer_total>player_total)
{
    cout<<"I am the champion!"<<endl;
}
else
{
    cout<<"you are the champion!\n";
}



   return 0; 
}