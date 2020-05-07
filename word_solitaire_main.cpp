#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "random_letter.h"
#include "start.h"
#include "game_over.h"
#include "set_empty.h"
#include "play_game.h"
using namespace std;


int main(){
    char * row_1 = new char [10];
    char * row_2 = new char [10];
    char * row_3 = new char [10];
    char * row_4 = new char [10];
    char * row_5 = new char [10];
    int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0;
    int score = 0, mistake = 0, high_score;
    char letter;
    string input;
    int row_number, word_length;
    bool valid, play = true, exit_game = false;
    
    start(score, mistake, letter, row_1, row_2, row_3, row_4, row_5, counter_1, counter_2, counter_3, counter_4, counter_5);

    while (play){
        play_game(score, mistake, letter, row_1, row_2, row_3, row_4, row_5, counter_1, counter_2, counter_3, counter_4, counter_5, exit_game, high_score);
        if (exit_game){
            break;
        } else {
            play = game_over(score, high_score);
            ofstream fout;
            fout.open("progress.txt");
            fout << "";
            fout.close(); 
            
            set_empty(row_1);
            set_empty(row_2);
            set_empty(row_3);
            set_empty(row_4);
            set_empty(row_4);
            set_empty(row_5);
            mistake = 0;
            score = 0;
            letter = random_letter();
            if (play){
                continue;
            } else {
                break;
            }   
        } 
    }
    delete [] row_1;
    delete [] row_2;
    delete [] row_3;
    delete [] row_4;
    delete [] row_5;
}