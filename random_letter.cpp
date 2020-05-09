#include <iostream>
#include <string>
#include <cstdlib>
#include "random_letter.h"
using namespace std;

// input : (none)
// this function randomized a letter from 26 alphabets with different possibilities. 
// this function is created such that vowels appear more often while QVWXYZ appear less often to 
// make word creation more possible.
// output: the randomized letter (char)

char random_letter(){
    string letter = "AIUEOBCDFGHJKLMNPRSTQVWXYZ";
    char generated_letter;

    srand(time(0));
    int vowel = rand() % 100;
    
    if (vowel < 25){
        generated_letter = letter[rand() % 5];
    }
    else if (vowel > 90){
        generated_letter = letter[(rand() % 6 + 20)];
    }
    else{
        generated_letter = letter[rand() % 20];
    }
    return generated_letter;
}