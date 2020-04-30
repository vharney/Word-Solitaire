#include <iostream>
#include "help.h"
using namespace std;

void start(){
    cout << "Welcome to World Solitaire!" << endl << endl;
    cout << "Try to create words with the random letters provided, " << endl;
    cout << "the longer the word the higher score you will get!" << endl;
    cout << "The score for every letter can be seen on top of ROW 1." << endl;
    cout << "Your total score will be shown on the top left." << endl; 
    cout << "You are only allowed to submit a maximum of 5 invalid words and counted as a mistake." << endl;
    cout << "Your mistakes will be recorded and shown on the top right." << endl << endl;
    help();
}