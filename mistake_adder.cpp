#include <iostream>
using namespace std;

void mistake_adder(int &mistake){
    ++mistake;
    int remaining = 6 - mistake;

    cout << "Sorry, the word you submitted is not in the dictionary :(" << endl;

    if (mistake <= 5){
        cout << "1 mistake has been added." << endl;
        cout << "If you make " << remaining << " more mistakes, you will lose!" << endl;
    }
    
}