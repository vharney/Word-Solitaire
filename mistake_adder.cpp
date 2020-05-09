#include <iostream>
#include "mistake_adder.h"
using namespace std;

// input : (pass by reference) mistake (int)
// this function adds the mistake counter by 1 each time the player submits an invalid word.
// output: prints the message when the player submits an invalid word 
//         (reminds the player how many more mistake(s) can he make) and returns nothing.

void mistake_adder(int &mistake){
    ++mistake;
    int remaining = 6 - mistake;

    cout << "  Sorry, the word you submitted is not in the dictionary :(" << endl;

    if (mistake <= 5){
        cout << "                  1 mistake has been added." << endl;
        cout << "        If you make " << remaining << " more mistake(s), you will lose!" << endl;
    }  
}