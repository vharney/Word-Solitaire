#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

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
    fin.open(("dictionary/" + first_letter + "_DICT.txt").c_str());
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