// Task 1
// Number guessing game

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    // add the random number generator:
    srand(time(0));

    // Generate a random number between 1 and 100:
    int randomNumber = rand() % 100 + 1;

  
    int guess;
    int attempts = 0;

    cout<<"Welcome to the Number Guessing Game! "<<endl;
    cout<<endl;

    do{
        cout<<"Enter Your guess (between 1 and 100): ";
        cout<<endl;
        cin>>guess;

        if(guess > randomNumber){
            cout<<"Too high! Try again: "<<endl;
        }
        else if(guess < randomNumber){
            cout<<"Too low! Try again: "<<endl;
        }

        attempts++;
        

    }
    while(guess != randomNumber);

    // final part of game:
    cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts:"<<endl;
    cout<<endl;


    return 0;
}