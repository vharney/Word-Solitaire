#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "print_board.h"
using namespace std;

// input : (pass by reference) row 1 to 5 (dynamic arrays of char), current score (int), mistake (int), and high score (int)
// this function prints the board which consists of the current score, number of mistakes, the rows, and all time high score
// output: prints the board and returns nothing

void print_board(char *& row_1, char *& row_2, char *& row_3, char *& row_4, char *& row_5, int score, int mistakes, int high_score){
    cout << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Total Score: " << score;
    cout << right;
    cout << setw (48-(to_string(score)).length()) << "Mistakes: " + to_string(mistakes) << endl << endl;

    cout << "ROW 1:  ";
    for (int i = 0; i < 10; ++i)
        cout << row_1[i] << "  ";
    cout << endl;

    cout << "ROW 2:  ";
    for (int i = 0; i < 10; ++i)
        cout << row_2[i] << "  ";
    cout << endl;

    cout << "ROW 3:  ";
    for (int i = 0; i < 10; ++i)
        cout << row_3[i] << "  ";
    cout << endl;

    cout << "ROW 4:  ";
    for (int i = 0; i < 10; ++i)
        cout << row_4[i] << "  ";
    cout << endl;

    cout << "ROW 5:  ";
    for (int i = 0; i < 10; ++i)
        cout << row_5[i] << "  ";

    cout << endl;
    cout << right;
    cout << setw (61-(to_string(high_score)).length()) << "High Score: " << high_score;
    cout << endl << "-------------------------------------------------------------" << endl << endl;
}