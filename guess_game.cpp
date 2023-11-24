#include<bits/stdc++.h>
using namespace std;
int main()
{
  srand(static_cast<unsigned int>(time(0)));
  int number=1+rand()%50;
  //cout<<number;
  int max=50;
  int min=0;
  int num=min+rand()%(max-min);
  //cout<<num;
  int lives=5;
  int guess;
  bool game=true;
  cout<<"Welcome to the number guessing game"<<endl;
  while(game)
    {
      if(lives==0)
      {
        cout<<"loser"<<endl;
        break;
      } 
      cout<<"Enter a number between 0 and 50:"<<endl;
      cin>>guess;
      if (guess>50){
        cout<<"Sorry, Invalid Input! Try Number between 0 to 50\n";
      }
      else if(guess==number)
      {
        cout<<"Congratulations! You guessed the correct number"<<number<<endl;
        game=false;
      }
      else if(guess>number)
      {
        cout<<"Your guess is too high, Try again."<<endl;
        lives--;
        cout<<"You have "<<lives<<" lives left"<<endl;
      }
      else
      {
        cout<<"Your guess is too low, Try again."<<endl;
        lives--;
        cout<<"You have "<<lives<<" lives left"<<endl;
      }
    }
  return 0;
}

