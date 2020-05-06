#include <iostream>
using namespace std;

void set_empty(char *& row){
    for (int i = 0; i <10; ++i){
        row[i] = '_';
    }
}