#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

char random_letter(){
    string letter = "AIUEOBCDFGHJKLMNPRSTQVWXYZ";
    char generated_letter;

    srand(time(0));
    int vowel = rand() % 100;
    
    if (vowel < 30){
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