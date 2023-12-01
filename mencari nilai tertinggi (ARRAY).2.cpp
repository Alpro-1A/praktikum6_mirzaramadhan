#include <iostream>
//sistem mencari nilai tertinggi menggunakan array
using namespace std;


int main(){
    //input jumlah array yang diinginkan
    int jumlahArray;
    cout << "Masukkan jumlah array:";
    cin >> jumlahArray;

    //input nilai array yang diinginkan
    int *array = new int [jumlahArray];
    cout << "Masukkan " << jumlahArray << " nilai array nya:\n";


    //output nilai array yang dimasukkan sebelum nya
    for (int i=0; i < jumlahArray; ++i) {
    cout << "Nilai Array ke- " << i + 1 << ": ";
    cin >> array[i];}


    int nilaiTertinggi = array[0];
    int indeksTertinggi = 0;


    for (int i = 1; i< jumlahArray; ++i) {
    if (array[i] > nilaiTertinggi) {
    nilaiTertinggi = array[i];
    indeksTertinggi = i;}}


    //output
    cout << "Nilai tertinggi:" << nilaiTertinggi << "\n";
    if (indeksTertinggi != -1) {
    cout << "Nilai tersebut ditemukan pada indeks :" << indeksTertinggi << "\n";} else {
    cout << "Nilai tersebut tidak ditemukan dalam array.\n"; }


    return 0; }



