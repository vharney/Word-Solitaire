#include <iostream>
#include "set_empty.h"
using namespace std;

// input : (pass by reference) the corresponding row that is going to be 'emptied' (dynamic array of char)
// this function fills the rows with '_' to indicate that the spaces in the row are empty
// output: (none)

void set_empty(char *& row){
    for (int i = 0; i <10; ++i){
        row[i] = '_';
    }
}