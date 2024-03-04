#include <iostream>
using namespace std;

int main (){
    int nNilMat, nNilFis, nRerata;
    string status;

    cout << "Masukkan Nilai Matematika = " << endl;
    cin >> nNilMat; 
    cout << "Masukkan Nilai Fisika = " << endl;
    cin >> nNilFis;

    nRerata = (nNilMat + nNilFis) / 2;

    if(nRerata > 60 || nNilMat > 70){
        status ="Lulus";
    }
    else{
        status ="Tidak Lulus";
    }

    cout << "Rata-rata kedua nilai adalah = " << nRerata << endl;
    cout << "Anda dinyatakan = " << status << endl;

    return 0;

    }