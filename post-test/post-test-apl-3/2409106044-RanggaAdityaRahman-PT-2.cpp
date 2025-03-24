#include <iostream>
using namespace std;
#define MAX_ARRAY 100

int main(){
    string nama = "Rangga", namacek;
    int nim = 44, percobaan = 0, nimcek, pilihan, index;
    struct konsolgame
    {
        string nama;
        string stock;
        string harga;
    };

    konsolgame playstation[MAX_ARRAY];
    konsolgame xbox[MAX_ARRAY];
    konsolgame nintendo[MAX_ARRAY];

    int indexps = 0, indexxbox = 0, indexnintendo = 0;

    while (percobaan <= 3) {
        cout << "Percobaan ke: " << percobaan << endl;
        cout << "Masukkan Nama: ";
        cin >> namacek;
        cout << "Masukkan Password (NIM): ";
        cin >> nimcek;

        if (namacek == nama && nimcek == nim) {
            cout << "Login Berhasil!" << endl;
            break;
        } else {
            cout << "Percobaan Gagal!" << endl;
            percobaan++;
            cin.clear();  
            cin.ignore(10000, '\n');  
        }
    }
    if (percobaan > 3){
        cout << "\nLogin Gagal";
        return 0;
    }

    
    do {
        cout << "\n=================================" << endl;
        cout << "           MENU UTAMA          " << endl;
        cout << "=================================" << endl;
        cout << "1. Menambahkan Data" << endl;
        cout << "2. Membaca Array" << endl;
        cout << "3. Mengubah Array" << endl;
        cout << "4. Menghapus Array" << endl;
        cout << "5. Keluar" << endl;
        cout << "=================================" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        int kategori;
        
        switch (pilihan) {
            case 1: // Membuat
                cout << "\nPilih Kategori:\n";
                cout << "1. PlayStation\n2. Xbox\n3. Nintendo\n";
                cout << "Masukkan pilihan: ";
                cin >> kategori;
                if (kategori == 1) {
                    cout << "\n";
                    cin.ignore();
                    if (indexps < MAX_ARRAY) {
                        cout << "Masukkan nama item : ";
                        getline (cin, playstation[indexps].nama);
                        cout << "Masukkan stock item : ";
                        getline (cin, playstation[indexps].stock);
                        cout << "Masukkan harga item : ";
                        getline (cin, playstation[indexps].harga);
                        indexps++;
                    }
                    else {
                        cout << "Data Array Penuh!!";
                    }
                }

                else if (kategori == 2) {
                    cout << "\n";
                    cin.ignore();
                    if (indexxbox < MAX_ARRAY) {
                        cout << "Masukkan nama item : ";
                        getline (cin, xbox[indexxbox].nama);
                        cout << "Masukkan stock item : ";
                        getline (cin, xbox[indexxbox].stock);
                        cout << "Masukkan harga item : ";
                        getline (cin, xbox[indexxbox].harga);                    
                        indexxbox++;
                    }
                    else {
                        cout << "Data Array Penuh!!";
                    }
                }

                else if (kategori == 3) {
                    cout << "\n";
                    cin.ignore();
                    if (indexnintendo < MAX_ARRAY) {
                        cout << "Masukkan nama item : ";
                        getline (cin, nintendo[indexnintendo].nama);
                        cout << "Masukkan stock item : ";
                        getline (cin, nintendo[indexnintendo].stock);
                        cout << "Masukkan harga item : ";
                        getline (cin, nintendo[indexnintendo].harga);                    
                        indexnintendo++;
                    }
                    else {
                        cout << "Data Array Penuh!!";
                    }
                }
                else {
                    cout << "Pilihan tidak valid! Coba lagi." << endl;
                }
                break;



            case 2: // Membaca
            cout << "\nPilih Kategori:\n";
            cout << "1. PlayStation\n2. Xbox\n3. Nintendo\n";
            cout << "Masukkan pilihan: ";
            cin >> kategori;
        
            if (kategori == 1) {
                cout << "\n=====================================\n";
                cout << "| No  | Nama Produk | Stok | Harga  |\n";
                cout << "=====================================\n";
                for (int i = 0; i < indexps; i++) {
                    cout << "| " << i + 1 << "   | " 
                         << playstation[i].nama << "     | " 
                         << playstation[i].stock << "   | " 
                         << playstation[i].harga << " |\n";
                }
                cout << "=====================================\n";

            } else if (kategori == 2) {
                cout << "\n=====================================\n";
                cout << "| No  | Nama Produk | Stok | Harga  |\n";
                cout << "=====================================\n";
                for (int i = 0; i < indexxbox; i++) {
                    cout << "| " << i + 1 << "   | " 
                         << xbox[i].nama << "     | " 
                         << xbox[i].stock << "   | " 
                         << xbox[i].harga << " |\n";
                }
                cout << "=====================================\n";

            } else if (kategori == 3) {
                cout << "\n=====================================\n";
                cout << "| No  | Nama Produk | Stok | Harga  |\n";
                cout << "=====================================\n";
                for (int i = 0; i < indexnintendo; i++) {
                    cout << "| " << i + 1 << ".  | " 
                         << nintendo[i].nama << "     | " 
                         << nintendo[i].stock << "   | " 
                         << nintendo[i].harga << " |\n";
                }
                cout << "=====================================\n";
            } else {
                cout << "Pilihan tidak valid! Coba lagi.\n";
            }
            break;



            case 3: // Update
            int pilihanupdate;
            cout << "\nPilih Kategori:\n";
            cout << "1. PlayStation\n2. Xbox\n3. Nintendo\n";
            cout << "Masukkan pilihan: ";
            cin >> kategori;

            if (kategori == 1) { // Playstation Update
                cout << "\n";
                cin.ignore();
                cout << "Nomor | Nama Barang | Stock Barang | Harga Barang" << endl;
                
                if (indexps == 0) {
                    cout << "Data Playstation kosong!\n";
                    break;
                }

                for (int i = 0; i < indexps; i++) {
                    cout << i + 1 << ". " << playstation[i].nama << " " << playstation[i].stock << " " << playstation[i].harga << endl;
                }

                cout << "Pilihlah Nomor Data Yang Ingin Diubah : ";
                cin >> pilihanupdate;
                cin.ignore();
                pilihanupdate--;
                if (pilihanupdate < 0 || pilihanupdate >= indexps) {
                    cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                    break;
                }
                cout << "Masukkan nama item : ";
                getline (cin, playstation[pilihanupdate].nama);
                cout << "Masukkan stock item : ";
                getline (cin, playstation[pilihanupdate].stock);
                cout << "Masukkan harga item : ";
                getline (cin, playstation[pilihanupdate].harga);
            }

            else if (kategori == 2) { // Xbox Update
                cout << "\n";
                cin.ignore();
                cout << "Nomor | Nama Barang | Stock Barang | Harga Barang" << endl;

                if (indexxbox == 0) {
                    cout << "Data Xbox kosong!\n";
                    break;
                }

                for (int i = 0; i < indexxbox; i++) {
                    cout << i + 1 << ". " << xbox[i].nama << " " << xbox[i].stock << " " << xbox[i].harga << endl;
                }

                cout << "Pilihlah Nomor Data Yang Ingin Diubah!! ";
                cin >> pilihanupdate;
                pilihanupdate--;
                cin.ignore();

                if (pilihanupdate < 0 || pilihanupdate >= indexxbox) {
                    cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                    break; 
                }

                cout << "Masukkan nama item : ";
                getline(cin, xbox[pilihanupdate].nama);
                cout << "Masukkan stock item : ";
                getline(cin, xbox[pilihanupdate].stock);
                cout << "Masukkan harga item : ";
                getline(cin, xbox[pilihanupdate].harga);
            }

            else if (kategori == 3) { // Nintendo Update
                cout << "\n";
                cin.ignore();
                cout << "Nomor | Nama Barang | Stock Barang | Harga Barang" << endl;

                if (indexnintendo == 0) {
                    cout << "Data Nintendo kosong!\n";
                    break;
                }

                for (int i = 0; i < indexnintendo; i++) {
                    cout << i + 1 << ". " << nintendo[i].nama << " " << nintendo[i].stock << " " << nintendo[i].harga << endl;
                }

                cout << "Pilihlah Data Yang Ingin Diubah!";
                cin >> pilihanupdate;
                pilihanupdate--;
                cin.ignore();

                if (pilihanupdate < 0 || pilihanupdate >= indexnintendo) {
                    cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                    break;
                }

                cout << "Masukkan nama item : ";
                getline(cin, nintendo[pilihanupdate].nama);
                cout << "Masukkan stock item : ";
                getline(cin, nintendo[pilihanupdate].stock);
                cout << "Masukkan harga item : ";
                getline(cin, nintendo[pilihanupdate].harga);
                }

            else {
                cout << "Pilihan tidak valid! Coba lagi." << endl;
            }
            break;



            case 4: // Menghapus
            int pilihanhapus;
            cout << "\nPilih Kategori:\n";
            cout << "1. PlayStation\n2. Xbox\n3. Nintendo\n";
            cout << "Masukkan pilihan: ";
            cin >> kategori;
            
            if (kategori == 1) { // Hapus Playstation
                cout << "\n";
                cin.ignore();
                cout << "Nomor | Nama Barang | Stock Barang | Harga Barang" << endl;
                
                if (indexps == 0) {
                    cout << "Data Playstation kosong!\n";
                    break;
                }

                for (int i = 0; i < indexps; i++) {
                    cout << i + 1 << ". " << playstation[i].nama << " " << playstation[i].stock << " " << playstation[i].harga << endl;
                }

                cout << "Pilihlah Nomor Data Yang Ingin Dihapus : ";
                cin >> pilihanhapus;

                if (pilihanhapus < 1 || pilihanhapus > indexps) {
                    cout << "Pilihan tidak valid!\n";
                    break;
                }

                for (int i = pilihanhapus - 1; i < indexps - 1; i++) {
                    playstation[i].nama = playstation[i + 1].nama;
                    playstation[i].stock = playstation[i + 1].stock;
                    playstation[i].harga = playstation[i + 1].harga;
                }
                indexps--;
            } 
            else if (kategori == 2) { // Hapus Xbox
                cout << "\n";
                cin.ignore();
                cout << "Nomor | Nama Barang | Stock Barang | Harga Barang" << endl;
                
                if (indexxbox == 0) {
                    cout << "Data Xbox kosong!\n";
                    break;
                }

                for (int i = 0; i < indexxbox; i++) {
                    cout << i + 1 << ". " << xbox[i].nama << " " << xbox[i].harga << " " << xbox[i].stock << endl;
                }

                cout << "Pilihlah Nomor Data Yang Ingin Dihapus : ";
                cin >> pilihanhapus;

                if (pilihanhapus < 1 || pilihanhapus > indexxbox) {
                    cout << "Pilihan tidak valid!\n";
                    break;
                }

                for (int i = pilihanhapus - 1; i < indexxbox - 1; i++) {
                    xbox[i].nama = xbox[i + 1].nama;
                    xbox[i].stock = xbox[i + 1].stock;
                    xbox[i].harga = xbox[i + 1].harga;
                }   
                indexxbox--;
            } 
            else if (kategori == 3) { // Hapus Nintendo
                cout << "\n";
                cin.ignore();
                cout << "Nomor | Nama Barang | Stock Barang | Harga Barang" << endl;
                
                if (indexnintendo == 0) {
                    cout << "Data Nintendo kosong!\n";
                    break;
                }

                for (int i = 0; i < indexnintendo; i++) {
                    cout << i + 1 << ". " << nintendo[i].nama << " " << nintendo[i].stock << " " << nintendo[i].harga << endl;
                }

                cout << "Pilihlah Nomor Data Yang Ingin Dihapus : ";
                cin >> pilihanhapus;

                if (pilihanhapus < 1 || pilihanhapus > indexnintendo) {
                    cout << "Pilihan tidak valid!\n";
                    break;
                }

                for (int i = pilihanhapus - 1; i < indexnintendo - 1; i++) {
                    nintendo[i].nama = nintendo[i + 1].nama;
                    nintendo[i].stock = nintendo[i + 1].stock;
                    nintendo[i].harga = nintendo[i + 1].harga;
                }
                indexnintendo--;
            } 
            else {
                cout << "Pilihan kategori tidak valid!\n";
            }
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
