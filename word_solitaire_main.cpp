#include <iostream>
#include "random_letter.h"
#include "print_board.h"
using namespace std;


void set_empty(char row[]){
    for (int i = 0; i < 10; ++i)
        row[i] = '_';
}

int main(){
    char row_1[10], row_2[10], row_3[10], row_4[10], row_5[10];
    int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0;
    int score = 0, mistake = 0;
    char letter;
    string input;
    set_empty(row_1);
    set_empty(row_2);
    set_empty(row_3);
    set_empty(row_4);
    set_empty(row_5);
    print_board(row_1, row_2, row_3, row_4, row_5, score, mistake);
    letter = random_letter();
    while (input != "exit"){
        cout << "Letter: " << letter << endl;
        cout << "Select row or Exit Game" << endl;
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
        else{
            continue;
        }
        letter = random_letter();
    }
}