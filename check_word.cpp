#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool check_word(vector<char> row){
    string first_letter;
    string x;
    string word = "";
    bool res = false;

    first_letter = row[0];

    for (int i = 0; i < 10; i++){
        word += row[i];
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