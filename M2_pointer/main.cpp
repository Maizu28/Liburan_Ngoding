#include <iostream>
#include "database.h"
using namespace std;

int main()
{
    cout << "Masukan jumlah max mahasiswa: ";
    cin >> jumlahMahasiswa;

    dataMahasiswa *mhs = new dataMahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cin.ignore();
        cout << "=== Data Mahasiswa ke-" << i + 1 << " ===" << endl;
        cout << "NIM: ";
        getline(cin, (mhs + i)->NIM);
        cout << "Nama: ";
        getline(cin, (mhs + i)->Nama);
        cout << "NIlai: ";
        cin >> (mhs + i)->NiLai;
    }
}