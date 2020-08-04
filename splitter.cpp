/*      WARNING: REQUIRES C++11         */
/* Try to compile using g++ -std=c++11. */
//Author: the gorgeous n4rv4lu5. Have fun here!
//Libraries
#include <iostream>
#include <strings.h>
#include <fstream>
//Namespace
using namespace std;
//Global vars
string wordlist;
int splits;
int linesperfile;
int totlines;
//Functions
int getsplits();
int getwdlines();
void writefiles(int a);
int main(){
    //Present
    cout << endl;
    cout << "SPLITTER v.1.1" << endl;
    cout << "Warning: c++11 required to run correctly the script. Try to compile using g++ -std=c++11." << endl;
    //Get splits
    cout << endl;
    splits = getsplits();
    //Get lines
    cout << endl;
    totlines = getwdlines();
    cout << endl;
    //Get linesperfile
    linesperfile = totlines / splits;
    //Write the new files
    for (int c = 1; c <= splits; c++) {
        writefiles(c);
    }
    cout << "Process terminated" << endl;
}
int getsplits() {
    int a;
    cout << "Number of splits: ";
    cin >> a;
    cout << endl;
    return a;
}
int getwdlines() {
    string line;
    int a;
    a = 0;
    cout << "Wordlist: ";
    cin >> wordlist;
    fstream marmellata;
    marmellata.open(wordlist, ios::in);
    while (getline(marmellata, line)) {
        a++;
    }
    marmellata.close();
    return a;
}
void writefiles(int a) {
    string filename = "output" + to_string(a);
    string line;
    fstream marmellata;
    fstream file;
    marmellata.open(wordlist, ios::in);
    file.open(filename, ios::out);
    if (a > 1) {
        for (int c = 0; c < ((a - 1) * linesperfile); c++) {
            getline(marmellata, line);
        }
    }
    for (int c = 0; c < linesperfile; c++) {
        getline(marmellata, line);
        file << line << endl;
    }
    if (a == splits) {
        while (getline(marmellata, line)) {
        file << line << endl;
        }
    }
    marmellata.close();
    file.close();
    return;
}
