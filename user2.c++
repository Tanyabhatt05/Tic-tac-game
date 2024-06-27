#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(0));
    int randomguess = rand()%100+1;
    int userGuess =0;
    cout<<"Guess a number between 1 to 100";

   while(userGuess!=randomguess){

      cin >> userGuess;

      if(userGuess<randomguess){
        cout<<"value is too low , Try Again "<<endl;

      }
      else if(userGuess>randomguess){
        cout<<"value is too high ,Try Again"<<endl;
      }
      else{
        cout<<"Congratulations! You guessed the number."<<endl;
        
      }

   }
   return 0;
}