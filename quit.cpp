#include <iostream>
#include <iomanip>
#include "quit.h"
using namespace std;

// input : (none)
// this function asks the player whether he wants to save the progress of the game or not 
// when he quits the game in the middle of the game 
// output: prints the appropriate good-bye message, prints the error message 
//         if the player enters the wrong input, and returns a string that
//         indicates whether the player wants to save the progress or not

string quit(){
    string save_progress;
    string res;
    
    cout << "> Do you want to save your progress? (yes/no)" << endl;

    while (true){
        cin >> save_progress;
        if (save_progress == "yes"){
            cout << endl; 
            cout << "           _______________________________________" << endl;
            cout << "   ._.    /     Your progress has been saved!     \\    ._." << endl;
            cout << "  [0.0]  <           See you next time!!           >  [0.0] " << endl;
            cout << "  |)__)   \\_______________________________________/   (__(|" << endl;
            cout << "  -'-'-                                               -'-'- " << endl;
            cout << "-------------------------------------------------------------" << endl;
            res = "save";
            break;
        } else if (save_progress == "no"){
            cout << endl; 
            cout << "           _______________________________________" << endl;
            cout << "   ._.    /                                       \\    ._." << endl;
            cout << "  [0.0]  <      Okay then! See you next time!      >  [0.0] " << endl;
            cout << "  |)__)   \\_______________________________________/   (__(|" << endl;
            cout << "  -'-'-                                               -'-'- " << endl;
            cout << "-------------------------------------------------------------" << endl;
            res = "not save";
            break;
        } else {
            cout << endl << "Sorry. Your input is invalid! Please enter 'yes' or 'no'" << endl << endl;
        }
    } 
    return res;
}