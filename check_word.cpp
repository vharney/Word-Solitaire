#include <iostream>
#include <fstream>
#include <string>
#include "check_word.h"
using namespace std;

// input : the submitted row (pointer for dynamic array consisted of chars)
//         and counter for the number of letters in that row (integer)
// this function checks whether the submitted word is valid (in the English dictionary) or not
// by opening the dictionary corresponding to the first letter of the word
// output: returns true if the word is valid, and returns false otherwise

bool check_word(char *& row, int counter){
    string first_letter;
    string x;
    string word = "";
    bool res = false;

    first_letter = row[0];

    for (int i = 0; i < counter; i++){
        word += row[i]+32;
    }
    ifstream fin;
    fin.open(("DICTIONARY_COMPLETE/" + first_letter + "_DICT.txt").c_str());
    while (fin >> x){
        if (x.length() > word.length()){
            break;
        }
        if (x == word){
            res = true;
            break;
        }
    }
    return res;
}