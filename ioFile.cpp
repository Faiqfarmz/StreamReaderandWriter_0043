

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string bars;

    // operasi file dalam mode menulis.
    ofstream outfile;

    // menunjuk ke sebuah nama file dalam membuka
    outfile.open("contoh file.txt");

    cout << ">>= Menulis file, \'q' untuk keluar" << endl;
}