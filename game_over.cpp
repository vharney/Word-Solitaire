#include <iostream>
#include <iomanip>
using namespace std;

void game_over(int score){
    string play_again;
    cout << endl << "GAME OVER! Your score is " << score << endl;
    // if the current score is higher than the all time high score
    // if (score > high_score){
    //     cout << "CONGRATULATIONS!! You beat the high score!" << endl;
    // }
    while (true){
        cout << "Do you want to play again? (yes/no)" << endl;
        cin >> play_again;
        cout << endl;
        if (play_again == "no"){
            cout << right;
            cout << setw(50) << "Thank you for playing! See you next time!" << endl;
            cout << "-------------------------------------------------------------" << endl;
            break;
        }
        // else if {
        //     // call function play
        // }
        else {
            cout << "Sorry. Your input is invalid! Please enter 'yes' or 'no'" << endl << endl;
        }
    }
}