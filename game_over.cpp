#include <iostream>
#include <iomanip>
using namespace std;

bool game_over(int score){
    string play_again;
    cout << right;
    cout << setw(38) << ">> GAME OVER! <<" << endl << endl;
    cout << "Your score is " << score << endl;
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
            return false;
        } else if (play_again == "yes"){
            cout << "-------------------------------------------------------------" << endl << endl;
            return true;
        }
        else {
            cout << "Sorry. Your input is invalid! Please enter 'yes' or 'no'" << endl << endl;
        }
    }
    return false;
}