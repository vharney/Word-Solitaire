#include <iostream>
using namespace std;

string quit(){
    string save_progress;
    string res;
    cout << "Do you want to save your progress? (yes/no)"
    cin >> save_progress;
    while (true){
        if (save_progress == "yes"){
            cout << setw(55) << "Your progress has been saved! See you next time!" << endl;
            cout << "-------------------------------------------------------------" << endl;
            res = "save";
            break;
        } else if (save_progress == "no"){
            cout << setw(45) << "Okay then! See you next time!" << endl;
            cout << "-------------------------------------------------------------" << endl;
            res = "not save";
            break;
        } else {
            cout << "Sorry. Your input is invalid! Please enter 'yes' or 'no'" << endl << endl;
        }
    } 
    return res;
}