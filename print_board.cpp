#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

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
    cout << endl << "-------------------------------------------------------------" << endl;
    cout << endl;
}