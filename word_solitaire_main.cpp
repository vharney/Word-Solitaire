#include <iostream>
#include <vector>
#include <iomanip>
#include "random_letter.h"
#include "print_board.h"
#include "start.h"
#include "help.h"
#include "check_word.h"
#include "score_calculator.h"
#include "mistake_adder.h"
using namespace std;


int main(){
    vector<char> row_1, row_2, row_3, row_4, row_5;
    int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0;
    int score = 0, mistake = 0;
    char letter;
    string input;
    int row_number;
    bool valid;
    int word_length;
    row_1.assign(10, '_');
    row_2.assign(10, '_');
    row_3.assign(10, '_');
    row_4.assign(10, '_');
    row_5.assign(10, '_');
    letter = random_letter();
    start();
    cout << right;
    cout << setw(42) << ">> Happy playing! <<" << endl;
    print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);

    while (input != "exit"){
        cout << "Letter: " << letter << endl;
        cout << "Enter Command: ";
        cin >> input;
        if (input == "1"){
            if (counter_1 < 10){
                row_1[counter_1] = letter;
                ++counter_1;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << endl << "Sorry. The row is full!" << endl << endl;
                continue;
            }
        }
        else if (input == "2"){
            if (counter_2 < 10){
                row_2[counter_2] = letter;
                ++counter_2;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << endl << "Sorry. The row is full!" << endl << endl;
                continue;
            }
        }
        else if (input == "3"){
            if (counter_3 < 10){
                row_3[counter_3] = letter;
                ++counter_3;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << endl << "Sorry. The row is full!" << endl << endl;
                continue;
            }
        }
        else if (input == "4"){
            if (counter_4 < 10){
                row_4[counter_4] = letter;
                ++counter_4;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << endl << "Sorry. The row is full!" << endl << endl;
                continue;
            }
        }
        else if (input == "5"){
            if (counter_5 < 10){
                row_5[counter_5] = letter;
                ++counter_5;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << endl << "Sorry. The row is full!" << endl << endl;
                continue;
            }
        }
        else if (input == "exit"){
            break;
        }
        else if (input == "submit"){
            cout << endl << "Which row would you like to submit? ";
            cin >> row_number;
            cout << endl;

            if (row_number == 1){
                if (counter_1 == 0){
                    cout << "Sorry. The row you are submitting is empty!" << endl;
                    continue;
                }
                valid = check_word(row_1, counter_1);
                word_length = counter_1;
                counter_1 = 0;
                row_1.assign(10, '_');
            } else if (row_number == 2){
                if (counter_2 == 0){
                    cout << "Sorry. The row you are submitting is empty!" << endl;
                    continue;
                }
                valid = check_word(row_2, counter_2);
                word_length = counter_2;
                counter_2 = 0;
                row_2.assign(10, '_');
            } else if (row_number == 3){
                if (counter_3 == 0){
                    cout << "Sorry. The row you are submitting is empty!" << endl;
                    continue;
                }
                valid = check_word(row_3, counter_3);
                word_length = counter_3;
                counter_3 = 0;
                row_3.assign(10, '_');
            } else if (row_number == 4){
                if (counter_4 == 0){
                    cout << "Sorry. The row you are submitting is empty!" << endl;
                    continue;
                }
                valid = check_word(row_4, counter_4);
                word_length = counter_4;
                counter_4 = 0;
                row_4.assign(10, '_');
            } else if (row_number == 5){
                if (counter_5 == 0){
                    cout << "Sorry. The row you are submitting is empty!" << endl << endl;
                    continue;
                }
                valid = check_word(row_5, counter_5);
                word_length = counter_5;
                counter_5 = 0;
                row_5.assign(10, '_');
            } 

            if (valid){
                score_calculator(word_length, score);
                cout << "YEAY YOU DID IT!!!" << endl;
                
            } else{
                mistake_adder(mistake);
                if (mistake == 10){
                    //make new function final()
                    cout << "Game Over!, Your Score is " << score << endl;
                    break;
                }
            }
            print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            continue;
        } else if (input == "help") {
            cout << endl;
            help();
            continue;
        }
        else{
            cout << endl;
            cout << "Sorry. Your input is invalid!" << endl << endl;
            continue;
        }
        letter = random_letter();
    }
}