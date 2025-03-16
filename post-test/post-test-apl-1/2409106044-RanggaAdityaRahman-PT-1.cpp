#include <iostream>
using namespace std;

int login(string nama, int nim) {
    string NamaCek;
    int NimCek;
    int percobaan = 1;
    while (percobaan <= 3) {
        cout << "Percobaan ke: " << percobaan << endl;
        cout << "Masukkan Nama: ";
        cin >> NamaCek;
        cout << "Masukkan Password (NIM): ";
        cin >> NimCek;

        if (NamaCek == nama && NimCek == nim) {
            cout << "Login Berhasil!" << endl;
            return 1;
        } else {
            cout << "Percobaan Gagal!" << endl;
            percobaan++;
            cin.clear();  
            cin.ignore(10000, '\n');  
        }
    }

    cout << "Login Gagal, kesempatan habis!\n";
    return 0;
}

void menu() {
    cout << "\n===== KONVERSI SUHU =====" << endl;
    cout << "1. Celcius ke Fahrenheit, Reamur, Kelvin" << endl;
    cout << "2. Fahrenheit ke Celcius, Reamur, Kelvin" << endl;
    cout << "3. Reamur ke Celcius, Fahrenheit, Kelvin" << endl;
    cout << "4. Kelvin ke Celcius, Fahrenheit, Reamur" << endl;
    cout << "5. Keluar" << endl;
}

void celcius() {
    double celcius;
    cout << "Masukkan Nilai Suhu Celcius: ";
    cin >> celcius;
    cout << "Celcius ke Farenheit Adalah: " << (celcius * 9/5) + 32 << endl;
    cout << "Celcius ke Reamur Adalah: " << celcius * 4/5 << endl;
    cout << "Celcius Kelvin Adalah: " << celcius + 273.15 << endl;
}

void fahrenheit() {
    double fahrenheit;
    cout << "Masukkan Nilai Suhu Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Fahrenheit ke Celcius: " << (fahrenheit - 32) * 5/9 << endl;
    cout << "Fahrenheit ke Reamur: " << (fahrenheit - 32) * 4/9 << endl;
    cout << "Fahrenheit ke Kelvin: " << (fahrenheit - 32) * 5/9 + 273.15 << endl;
}

void reamur() {
    double reamur;
    cout << "Masukkan Nilai Suhu Reamur: ";
    cin >> reamur;
    cout << "Reamur ke Celcius: " << reamur * 5/4 << endl;
    cout << "Reamur ke Fahrenheit: " << (reamur * 9/4) + 32 << endl;
    cout << "Reamur ke Kelvin: " << (reamur * 5/4) + 273.15 << endl;
}

void kelvin() {
    double kelvin;
    cout << "Masukkan Nilai Suhu Kelvin: ";
    cin >> kelvin;
    cout << "Kelvin ke Celcius: " << kelvin - 273.15 << endl;
    cout << "Kelvin ke Fahrenheit: " << (kelvin - 273.15) * 9/5 + 32 << endl;
    cout << "Kelvin ke Reamur: " << (kelvin - 273.15) * 4/5 << endl;
}

int main() {
    string nama = "Rangga";
    int nim = 44;

    if (login(nama, nim) == 1) {
        int pilihan;
        do {
            menu();
            cout << "Pilih menu (1-5): ";
            cin >> pilihan;

            switch (pilihan) {
                case 1: celcius(); 
                    break;
                case 2: fahrenheit(); 
                    break;
                case 3: reamur(); 
                    break;
                case 4: kelvin(); 
                    break;
                case 5: cout << "Terima kasih telah menggunakan program ini!" << endl; 
                    break;
                default: 
                    cout << "Pilihan tidak valid! Coba lagi." << endl;
                    cin.clear();  
                    cin.ignore(10000, '\n');
            }

        } while (pilihan != 5);
    }
    return 0;
}