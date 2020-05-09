#include <iostream>
#include "help.h"
using namespace std;

// input : (none)
// this function shows the basic intructions and some useful information of the game (the help page), 
// can be called anytime during the game or from main menu before starting game
// output: prints the help page and returns nothing 

void help(){
    cout << endl << "-------------------------------------------------------------" << endl << endl;
    cout << "Here are some basic input instructions:" << endl;
    cout << "- Select row   : Enter one number from 1 to 5" << endl;
    cout << "- Quit game    : Enter 'quit'" << endl;
    cout << "- Submit word  : Enter 'submit' and then you will be asked" << endl;
    cout << "                 'Which row would you like to submit?' then" << endl;
    cout << "                 enter the row number you want to submit" << endl;
    cout << "- View help    : Enter 'help'" << endl << endl;
    cout << "When is GAME OVER?" << endl;
    cout << "More than 5 invalid words have been submitted." << endl << endl;
    cout << "Score for each letter:" << endl;
    cout << "1st letter : 10" << endl;
    cout << "2nd letter : 10" << endl;
    cout << "3rd letter : 10" << endl;
    cout << "4th letter : 30" << endl;
    cout << "5th letter : 40" << endl;
    cout << "6th letter : 50" << endl;
    cout << "7th letter : 50" << endl;
    cout << "8th letter : 50" << endl;
    cout << "9th letter : 80" << endl;
    cout << "10th letter: 100" << endl;
}