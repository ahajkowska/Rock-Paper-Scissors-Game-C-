#include <iostream>
#include <string>
using namespace std;

int main() {
    //player and opponent
    string player;
    string opponent;

    //keep track of the player & opponent score
    int playerScore = 0;
    int oppponentScore = 0;

    while (true) {
        cout << "Enter rock, paper, or scissors:";
        getline(cin, player); //gets entire line and assign it to the string player
    
        if (player != "rock" && player != "paper" && player != "scissors") {
            break; //terminates the while loop
        }
    }
}