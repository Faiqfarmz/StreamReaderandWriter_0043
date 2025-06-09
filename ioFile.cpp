

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    // operasi file dalam mode menulis.
    ofstream outfile;

    // menunjuk ke sebuah nama file dalam membuka
    outfile.open("contoh file.txt");

    cout << ">>= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true) {
        cout << "- ";
       // mendapatkan setiap karakter dalam satu baris
       getline(cin, baris); 
       // loop akan berheti jika anda memasukkan karakter q
       if (baris == "q") break;
       // menulis dan memasukkan nilai dari 'baris' ke dalam file
       outfile << baris << endl;
        
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    // operasi file dalam mode membaca
    ifstream infile;
    //menunjukkan ke sebuah file untuk membuka
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file" << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        //melakukan pengulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan di sini
            cout << baris << '\n';
        }
        
    }
    
}