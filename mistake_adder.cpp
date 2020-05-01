#include <iostream>
using namespace std;

void mistake_adder(int &mistake){
    ++mistake;
    int remaining = 10 - mistake;
    cout << "Sorry, the word you submitted is not in the dictionary" << endl;
    cout << "1 mistake counter has been added" << endl;
    cout << "If you make " << remaining << " more mistakes, you will lose" << endl;
}