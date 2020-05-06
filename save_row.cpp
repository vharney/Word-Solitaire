#include <iostream>
using namespace std;

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