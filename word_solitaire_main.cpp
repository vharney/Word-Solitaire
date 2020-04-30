#include <iostream>
#include <vector>
#include "random_letter.h"
#include "print_board.h"
#include "start.h"
#include "help.h"
#include "check_word.h"
using namespace std;


int main(){
    vector<char> row_1, row_2, row_3, row_4, row_5;
    int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0;
    int score = 0, mistake = 0;
    char letter;
    string input;
    int row_number;
    bool valid;
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
        cout << "Enter Command" << endl;
        cout << "Your input: ";
        cin >> input;
        if (input == "1"){
            if (counter_1 < 10){
                row_1[counter_1] = letter;
                ++counter_1;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << "Sorry. Your input is invalid! The row is full." << endl;
                cout << "Please enter another row or submit";
            }
        }
        else if (input == "2"){
            if (counter_2 < 10){
                row_2[counter_2] = letter;
                ++counter_2;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << "Sorry. Your input is invalid! The row is full." << endl;
                cout << "Please enter another row or submit";
            }
        }
        else if (input == "3"){
            if (counter_3 < 10){
                row_3[counter_3] = letter;
                ++counter_3;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << "Sorry. Your input is invalid! The row is full." << endl;
                cout << "Please enter another row or submit";
            }
        }
        else if (input == "4"){
            if (counter_4 < 10){
                row_4[counter_4] = letter;
                ++counter_4;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << "Sorry. Your input is invalid! The row is full." << endl;
                cout << "Please enter another row or submit";
            }
        }
        else if (input == "5"){
            if (counter_5 < 10){
                row_5[counter_5] = letter;
                ++counter_5;
                print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
            } else {
                cout << "Sorry. Your input is invalid! The row is full." << endl;
                cout << "Please enter another row or submit";
            }
        }
        else if (input == "exit"){
            break;
        }
        else if (input == "submit"){
            cout << "Which row would you like to submit?" << endl;
            cin >> row_number;

            if (row_number == 1){
                valid = check_word (row_1, counter_1);
                counter_1 = 0;
                row_1.assign(10, '_');
            } else if (row_number == 2){
                valid = check_word (row_2, counter_2);
                counter_2 = 0;
                row_2.assign(10, '_');
            } else if (row_number == 3){
                valid = check_word(row_3, counter_3);
                counter_3 = 0;
                row_3.assign(10, '_');
            } else if (row_number == 4){
                valid = check_word(row_4, counter_4);
                counter_4 = 0;
                row_4.assign(10, '_');
            } else if (row_number == 5){
                valid = check_word(row_5, counter_5);
                counter_5 = 0;
                row_5.assign(10, '_');
            } 

            if (valid){
                cout << "YEAY YOU DID IT!!!" << endl;
                
            } else{

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
            cout << "Sorry. Your input is invalid!" << endl;
            continue;
        }
        letter = random_letter();
    }
}