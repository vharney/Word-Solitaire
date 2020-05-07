#include <iostream>
#include <iomanip>
#include "help.h"
#include "check_progress.h"
#include "set_empty.h"
#include "random_letter.h"
#include "load_progress.h"
using namespace std;

void start(int &score, int &mistake, char &letter, char *& row_1, char *& row_2, char *& row_3, char *& row_4, char *& row_5, int &counter_1, int &counter_2, int &counter_3, int &counter_4, int &counter_5){
    string ans;

    cout << endl;
    cout << right;
    cout << setw(44) << "Welcome to World Solitaire!" << endl << endl;
    cout << "Try  to  create  words  with the random letters provided, the" << endl;
    cout << "longer  the  word  the  higher score you will get! Your total" << endl;
    cout << "score  will be shown on the top left. You are only allowed to" << endl; 
    cout << "submit  a  maximum of 10 invalid words, and each invalid word" << endl;
    cout << "will  be counted as a mistake. Your mistakes will be recorded" << endl;
    cout << "and shown on the top right." << endl;
    help();
    if (check_progress()){
        set_empty(row_1);
        set_empty(row_2);
        set_empty(row_3);
        set_empty(row_4);
        set_empty(row_4);
        set_empty(row_5);
        letter = random_letter();
    }
    else{
        cout << "Last game progress is available. Do you want to continue? (yes/no)" << endl;
        while (true){
            cin >> ans;
            if (ans == "yes"){
                cout << endl << "Okay! Let's continue!" << endl;
                load_progress(score, mistake, letter, row_1, row_2, row_3, row_4, row_5, counter_1, counter_2, counter_3, counter_4, counter_5);
                break;
            } else if (ans == "no"){
                cout << endl << "Okay! Let's play a new game!" << endl;
                set_empty(row_1);
                set_empty(row_2);
                set_empty(row_3);
                set_empty(row_4);
                set_empty(row_4);
                set_empty(row_5);
                letter = random_letter();
                break;
            } else {
                cout << endl << "Sorry. Your input is invalid! Please enter 'yes' or 'no'" << endl;
            }
        }
        cout << endl << "-------------------------------------------------------------" << endl << endl;
    }
    
}