#include <iostream>
#include <string>
#include <cstdlib>

char random_letter(){
    std::string letter = "AIUEOBCDFGHJKLMNPQRSTVWXYZ";
    char generated_letter;
    srand(time(0));
    int vowel = rand() % 100;
    if (vowel < 30)
        generated_letter = letter[rand() % 5];
    else
        generated_letter = letter[rand() % 26];
    return generated_letter;
}