#include <iostream>
using namespace std;

//SISTEM MENCARI NILAI TERTINGGI MENGGUNAKAN ARRAY
int main() {
    cout << "<><><><><><><><><><><><><><><><><><><><>" << endl;
    cout << "*         Cari nilai Tertinggi         *" << endl;
    cout << "<><><><><><><><><><><><><><><><><><><><>" << endl;
    cout << endl;

    cout << "Nilai: " << endl; // Menampilkan semua darah dari array element
    int Array[7] = {6, 16, 13, 29, 31, 78, 53};
    for (int i = 0; i < 7; i++) {
        cout << "Nilai " << i + 1 << ": " << Array[i] << endl;
    }

    int nilaitertinggi = Array[0];
    int index = 0;

    for (int i = 1; i < 7; i++) {     // Mencari nilai tertinggi dengan indexnya
        if (Array[i] >  nilaitertinggi) {
             nilaitertinggi = Array[i];
            index = i;
        }
    }

    //output
    cout << endl;

    cout << "nilai tertinggi: " <<  nilaitertinggi << endl;     // Menampilkan hasil nilai tertinggi beserta indexnya
    cout << "Index dari nilai tertinggi: " << index << endl;

    return 0;
}
