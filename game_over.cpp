#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

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
        cout << endl << "Do you want to play again? (yes/no)" << endl;
        cin >> play_again;
        
        if (play_again == "no"){
            cout << endl;
            cout << right;
            cout << setw(50) << "Thank you for playing! See you next time!" << endl;
            cout << "-------------------------------------------------------------" << endl;
            return false;
        } else if (play_again == "yes"){
            return true;
        }
        else {
            cout << "Sorry, your input is invalid! Please enter 'yes' or 'no'." << endl << endl;
        }
    }
    return false;
}