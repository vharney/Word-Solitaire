#include <iostream>
#include "help.h"
#include <iomanip>
using namespace std;

void start(){
    cout << endl;
    cout << right;
    cout << setw(44) << "Welcome to World Solitaire!" << endl << endl;
    cout << "Try  to  create  words  with the random letters provided, the" << endl;
    cout << "longer  the  word  the  higher score you will get! Your total" << endl;
    cout << "score  will be shown on the top left. You are only allowed to" << endl; 
    cout << "submit  a  maximum of 10 invalid words, and each invalid word" << endl;
    cout << "will  be counted as a mistake. Your mistakes will be recorded" << endl;
    cout << "and shown on the top right." << endl << endl;
    help();
}