#include <iostream>
#include <string>
#include <ctime> //current time
#include <cstdlib> //include rand()
using namespace std;

int main() {
    //player and opponent
    string player;
    string opponent;

    //keep track of the player & opponent score
    int playerScore = 0;
    int oppponentScore = 0;

    //rock, paper, scissors (opponent randomly chooses from this)
    string rps[] = {"rock", "paper", "scissors"};

    //srand = random seed value based on time
    //generates random seed based on a current time -> because the current time changes we can guarantee a random number that is different every time we run the program
    srand((unsigned int)time(NULL));

    while (true) {
        cout << "Enter rock, paper, or scissors:";
        getline(cin, player); //gets entire line and assign it to the string player
    
        if (player != "rock" && player != "paper" && player != "scissors") {
            break; //terminates the while loop
        }

        //assign opponent --> give us a random index to choose from
        opponent = rps[rand() % 3]; //rand() = generates random number

        cout << "Opponent chooses " << opponent << endl;
    }
}