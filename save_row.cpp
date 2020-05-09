#include <fstream>
#include "save_row.h"
using namespace std;

// input : the corresponding row that is going to be saved (dynamic array of char)
// this function saves the row in the file progress.txt
// output: (none)

void save_row(char * row){
    for (int i = 0; i < 10; ++i){
        ofstream fout; 
        fout.open("progress.txt", ios::app);
        fout << row[i];
        if ((i+1) != 10){
            fout << " ";
        } else {
            fout << endl;
        }
        fout.close();
    }
}