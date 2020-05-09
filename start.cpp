#include <iostream>
#include <iomanip>
#include <fstream>
#include "start.h"
#include "help.h"
#include "check_progress.h"
#include "set_empty.h"
#include "random_letter.h"
#include "load_progress.h"
using namespace std;

// input : (pass by reference) score (int), mistake (int), randomized letter (char), 
//         row 1 to 5 (dynamic arrays of char), counter 1 to 5 of the number of letters in each row (int), 
//         and variable play to indicate whether the player wants to play the game or not (bool)
// this function shows the welcome message when the program first run and shows the main menu of the game.
// if the player chooses to exit the game, the good-bye message will be shown and the variable play will be false.
// modify main menu if save file exists, can also show help page
// output: prints the welcome message, prints the main menu, prints the good-bye message if the player wants to quit,
//         and prints error message if the player enters the wrong input

void start(int &score, int &mistake, char &letter, char *& row_1, char *& row_2, char *& row_3, char *& row_4, char *& row_5, int &counter_1, int &counter_2, int &counter_3, int &counter_4, int &counter_5, bool &play){
    string ans;
    string select_menu;

    cout << endl;
    cout << right;
    cout << setw(44) << "Welcome to World Solitaire!" << endl << endl;
    cout << "         ._.       _____  _____ |  ______        ._." << endl;
    cout << "        [0.0]      \\    \\/    / | /  ____)      [0.0]" << endl;
    cout << "        |)__)       \\        /  | \\____  \\      (__(|" << endl;
    cout << "        -'-'-        \\__/\\__/   | (______/      -'-'-"<< endl;
    cout << "                                |" << endl << endl;
    cout << "Try  to  create  words  with the random letters provided, the" << endl;
    cout << "longer  the  word  the  higher score you will get! Your total" << endl;
    cout << "score  will be shown on the top left. You are only allowed to" << endl; 
    cout << "submit  no  more  than 5 invalid words, and each invalid word" << endl;
    cout << "will  be counted as a mistake. Your mistakes will be recorded" << endl;
    cout << "                 and shown on the top right.                 " << endl;

    if (!check_progress()){
        while (true){
            cout << "                _____________________________               " << endl;
            cout << "               |          MAIN MENU          |              " << endl;
            cout << "               |  1.) Start New Game         |              " << endl;
            cout << "               |  2.) Continue Previous Game |              " << endl;
            cout << "               |  3.) Show Instructions      |              " << endl;
            cout << "               |  4.) Exit                   |              " << endl;
            cout << "               |_____________________________|              " << endl << endl;
            cout << "Select Number: ";
            cin >> select_menu;
            if (select_menu == "1"){
                set_empty(row_1);
                set_empty(row_2);
                set_empty(row_3);
                set_empty(row_4);
                set_empty(row_4);
                set_empty(row_5);
                letter = random_letter();
                break;
            }
            else if (select_menu == "2"){
                load_progress(score, mistake, letter, row_1, row_2, row_3, row_4, row_5, counter_1, counter_2, counter_3, counter_4, counter_5);
                break;
            }
            else if (select_menu == "3"){
                help();
                cout << endl << "-------------------------------------------------------------" << endl;
            }
            else if (select_menu == "4"){
                play = false;
                cout << endl << "           _______________________________________" << endl;
                cout << "   ._.    /      Thank you for stopping by!!      \\    ._." << endl;
                cout << "  [0.0]  <        See you later alligator!!        >  [0.0] " << endl;
                cout << "  |)__)   \\_______________________________________/   (__(|" << endl;
                cout << "  -'-'-                                               -'-'- " << endl;
                cout << "-------------------------------------------------------------" << endl;
                break;
            }
            else{
                cout << "Sorry, your input is invalid!" << endl << endl;
            }
        }
    }
    else{
        while (true){
            cout << "                _____________________________               " << endl;
            cout << "               |          MAIN MENU          |              " << endl;
            cout << "               |  1.) Start New Game         |              " << endl;
            cout << "               |  2.) Show Instructions      |              " << endl;
            cout << "               |  3.) Exit                   |              " << endl;
            cout << "               |_____________________________|              " << endl << endl;
            cout << "Select Number: ";
            cin >> select_menu;
            if (select_menu == "1"){
                set_empty(row_1);
                set_empty(row_2);
                set_empty(row_3);
                set_empty(row_4);
                set_empty(row_4);
                set_empty(row_5);
                letter = random_letter();
                break;
            }
            else if (select_menu == "2"){
                help();
                cout << endl << "-------------------------------------------------------------" << endl;
            }
            else if (select_menu == "3"){
                play = false;
                cout << endl << "           _______________________________________" << endl;
                cout << "   ._.    /      Thank you for stopping by!!      \\    ._." << endl;
                cout << "  [0.0]  <        See you later alligator!!        >  [0.0] " << endl;
                cout << "  |)__)   \\_______________________________________/   (__(|" << endl;
                cout << "  -'-'-                                               -'-'- " << endl;
                cout << "-------------------------------------------------------------" << endl;
                break;
            }
            else{
                cout << "Sorry, your input is invalid!" << endl << endl;
            }
        }
    }
}