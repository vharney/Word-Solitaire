#include <iostream>
#include "score_calculator.h"
using namespace std;

// input : the length of the word (int) and (pass by reference) the score of the current game
// this function adds the right points to the score depending on the word's length
// output: (none)

void score_calculator(int word_length, int &total_score){
    if (word_length == 2){
        total_score += 20;
    } else if (word_length == 3){
        total_score += 30;
    } else if (word_length == 4){
        total_score += 60;
    } else if (word_length == 5){
        total_score += 100;
    } else if (word_length == 6){
        total_score += 150;
    } else if (word_length == 7){
        total_score += 200;
    } else if (word_length == 8){
        total_score += 250;
    } else if (word_length == 9){
        total_score += 330;
    } else if (word_length == 10){
        total_score += 430;
    }
}