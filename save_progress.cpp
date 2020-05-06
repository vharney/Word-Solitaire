#include <iostream>
#include "save_row.h"
using namespace std;

void save_progress(int score, int mistake, char letter, char * row_1, char * row_2, char * row_3, char * row_4, char * row_5){
    ofstream fout; 

    fout.open("progress.txt");
    fout << score << endl;
    fout.close();

    fout.open("progress.txt", ios::app)
    fout << mistake << endl;
    fout << letter << endl;
    fout.close();

    save_row(row_1);
    save_row(row_2);
    save_row(row_3);
    save_row(row_4);
    save_row(row_5);
}