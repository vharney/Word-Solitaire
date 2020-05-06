#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void print_board(vector<char> &row_1, vector<char> &row_2, vector<char> &row_3, vector<char> &row_4, vector<char> &row_5, int score, int mistakes){
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
    cout << endl << endl << "-------------------------------------------------------------" << endl;
    cout << endl;
}