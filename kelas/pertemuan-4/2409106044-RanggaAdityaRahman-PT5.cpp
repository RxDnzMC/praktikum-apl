#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    int umur;

};


int main(){

    int primeNumber[] = {
        2,3,5,7,11,13
    };

    int (*ptrprimeNumber)[] = &primeNumber;

    for (int i = 0; i < 6; i++)
    {
        cout << (*ptrprimeNumber)[i] << endl;
    }
    
    cout << "Pointer yang menunjuk ke arah elemen array" <<endl;
    int b[5] = {1,2,3,4,5};
    int *bPtr = b;
    for (int i = 0; i < 5; i++){
    cout << bPtr <<endl;
    // cout << *bPtr <<endl;
    bPtr++;
    }

    // * dereferece operator
    // & address of operator 
    // int stack = 64;
    // int stackSnowball = 16;
    // int ptrStack = 
    // cout << stack << endl;
    // cout << &stack << endl;
    // cout << stackSnowball << endl;
    // cout << &stackSnowball << endl;
    // int *isi = &stack;
    // cout << *isi << endl;
    // stack = 69;
    // cout << *isi << endl;
    // *isi = *isi + 10;
    // cout << *isi << endl;
    // cout << stack << endl;


    // Orang orang;
    // orang.nama = "Kalingga";
    // orang.umur = 20;

    // Orang *orang2 = &orang;
    // cout << orang.nama << endl;
    // cout << orang2->nama << endl;
    // orang.nama = "Lawe";
    // cout << orang.nama << endl;
    // cout << orang2->nama;

    int stack = 10;
    int *ptrStack = &stack;
    int **ptrPtrStack = &ptrStack;

    int ***ptrptrPtrStack = &ptrPtrStack;
    cout << *ptrStack << endl;
    cout << **ptrPtrStack << endl;
    cout << ***ptrptrPtrStack << endl;


    return 0;
}