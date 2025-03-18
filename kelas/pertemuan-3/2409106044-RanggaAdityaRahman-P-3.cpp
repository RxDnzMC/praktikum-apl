#include <iostream>
using namespace std;

struct Tanggal
{
    int hari, bulan, tahun;
};


struct Mahasiswa
{
    string nama;
    int nim;
    string gender;
    Tanggal tanggallahir;
};


typedef struct penjual
{
    int jumlahpenjualan;
};

typedef struct
{
    int jumlahpenjualan;
}penjual1;

int main() {
    
    Mahasiswa mhsbaru, mhslama;

    mhsbaru.nama = "Rangga Lawe";
    mhsbaru.nim = 43;
    mhsbaru.gender = "Laki";
    mhsbaru.tanggallahir.hari = 3;
    mhsbaru.tanggallahir.bulan = 8;
    mhsbaru.tanggallahir.tahun = 2005;

    cout << mhsbaru.nama << endl;
    cout << mhsbaru.nim << endl;
    cout << mhsbaru.gender << endl;

    cout << mhsbaru.tanggallahir.hari << endl;
    cout << mhsbaru.tanggallahir.bulan << endl;
    cout << mhsbaru.tanggallahir.tahun << endl;


    Mahasiswa mhsAbadi [5];
    mhsAbadi[0].nama = "Ifnu";
    mhsAbadi[1].nama = "Amad";
    mhsAbadi[2].nama = "Asrud";
    mhsAbadi[3].nama = "Lawe";
    mhsAbadi[4].nama = "Rava";

    for (int i = 0; i < size(mhsAbadi); i++) {
        cout << mhsAbadi[i].nama << endl;

    }


    return 0;
}