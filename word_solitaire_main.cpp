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

// input : (none)
// this is the main function of the whole program. 
// it calls the right functions to run the game and controls the flow of whole program. 
// output: (none)

struct game_status{
    int score;
    int mistake;
    int high_score;
    char letter;
    bool play, exit_game;
};

int main(){
    char * row_1 = new char [10];
    char * row_2 = new char [10];
    char * row_3 = new char [10];
    char * row_4 = new char [10];
    char * row_5 = new char [10];
    int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0;
    game_status game;
    game.score = 0, game.mistake = 0, game.play = true, game.exit_game = false;
    string input;
    int row_number, word_length;
    bool valid;
    
    start(game.score, game.mistake, game.letter, row_1, row_2, row_3, row_4, row_5, counter_1, counter_2, counter_3, counter_4, counter_5, game.play);

    while (game.play){
        play_game(game.score, game.mistake, game.letter, row_1, row_2, row_3, row_4, row_5, counter_1, counter_2, counter_3, counter_4, counter_5, game.exit_game, game.high_score);
        if (game.exit_game){
            break;
        } else {
            game.play = game_over(game.score, game.high_score);
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
            counter_1 = 0;
            counter_2 = 0;
            counter_3 = 0;
            counter_4 = 0;
            counter_5 = 0;
            game.mistake = 0;
            game.score = 0;
            game.letter = random_letter();
            if (game.play){
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

    return 0;
}