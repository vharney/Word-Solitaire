#include <iostream>
#include <vector>
#include "random_letter.h"
#include "print_board.h"
#include "start.h"
// #include "check_word.h"
using namespace std;


int main(){
    vector<char> row_1, row_2, row_3, row_4, row_5;
    int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0;
    int score = 0, mistake = 0;
    char letter;
    string input;
    char row_number;
    row_1.assign(10, '_');
    row_2.assign(10, '_');
    row_3.assign(10, '_');
    row_4.assign(10, '_');
    row_5.assign(10, '_');
    letter = random_letter();
    start();
    cout << ">> Happy playing! <<" << endl;
    print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);

    while (input != "exit"){
        cout << "Letter: " << letter << endl;
        cout << "Select row or Exit Game" << endl;
        cout << "Your input: ";
        cin >> input;
        if (input == "1"){
            row_1[counter_1] = letter;
            ++counter_1;
            print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
        }
        else if (input == "2"){
            row_2[counter_2] = letter;
            ++counter_2;
            print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
        }
        else if (input == "3"){
            row_3[counter_3] = letter;
            ++counter_3;
            print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
        }
        else if (input == "4"){
            row_4[counter_4] = letter;
            ++counter_4;
            print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
        }
        else if (input == "5"){
            row_5[counter_5] = letter;
            ++counter_5;
            print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
        }
        else if (input == "exit"){
            break;
        }
        // else if (input == "submit"){
        //     cout << "Which row you want to submit?" << endl;
        //     cin >> row_number;

        //     if (check_word()){
        //         score_calculator()
        //     }
        // }
        else{
            cout << endl;
            cout << "Sorry. Your input is invalid!" << endl;
            continue;
        }
        letter = random_letter();
    }
}