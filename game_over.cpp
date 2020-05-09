#include <iostream>
#include <fstream>
#include <iomanip>
#include "game_over.h"
using namespace std;

// input : the score in the current game (integer) and the all time high score (integer)
// this function is called when the player loses (more than 5 mistakes made). it checks whether the current game score 
// is higher than the all time high score, changes the high score stored in 'high_score.txt' if it is beaten,
// and asks the player whether he wants to play again or not.
// output: - prints a congratulation message the high score is beaten.
//         - prints good bye message and returns false (boolean) if the player does not want to play again
//         - prints nothing and returns true if the player wants to play again

bool game_over(int score, int &high_score){
    string play_again;

    cout << right;
    cout << setw(38) << ">> GAME OVER! <<" << endl << endl;
    cout << "Your score is " << score << endl;

    if (score > high_score){
        cout << "CONGRATULATIONS!! You beat the high score!" << endl;
        ofstream fout;
        fout.open("high_score.txt");
        fout << score;
        fout.close();
    }
    while (true){
        cout << endl << "> Do you want to play again? (yes/no)" << endl;
        cin >> play_again;
        
        if (play_again == "no"){
            cout << endl;
            cout << right;
            cout << "           _______________________________________" << endl;
            cout << "   ._.    /        Thank you for playing!!        \\    ._." << endl;
            cout << "  [0.0]  <           See you next time!!           >  [0.0]  " << endl;
            cout << "  |)__)   \\_______________________________________/   (__(|" << endl;
            cout << "  -'-'-                                               -'-'- " << endl;
            cout << "-------------------------------------------------------------" << endl;
            return false;
        } else if (play_again == "yes"){
            return true;
        }
        else {
            cout << endl << "Sorry, your input is invalid! Please enter 'yes' or 'no'." << endl;
        }
    }
    return false;
}