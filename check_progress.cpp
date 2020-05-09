#include <fstream>
#include "check_progress.h"
using namespace std;

// input : (none)
// this function checks whether the file "progress.txt" is empty or not
// output: boolean --> if the file is empty returns true, and if the file is not empty returns false

bool check_progress(){
    int counter = 0;
    char x;
    ifstream fin;
    fin.open("progress.txt");

    while (fin >> x){
        ++counter;
    }

    if (counter == 0){
        return true;
    } else {
        return false;
    }
    fin.close();
}