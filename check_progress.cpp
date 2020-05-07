#include <fstream>
using namespace std;

bool check_progress(){
    int counter = 0;
    char x;
    ifstream fin;
    fin.open("progress.txt");
    while (fin >> x){
        ++counter;
    }
    if (counter == 0)
        return true;
    else
        return false;
}