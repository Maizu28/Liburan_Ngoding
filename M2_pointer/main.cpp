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

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "=====================================" << endl;
        cout << "NIM\t: " << (mhs + 1)->NIM << endl;
        cout << "Nama\t: " << (mhs + 1)->Nama << endl;
        cout << "NIlai\t: " << (mhs + 1)->NiLai << endl;
        totalNilai += (mhs + 1)->NiLai;

        if ((mhs + 1)->NiLai > tertinggi)
        {
            tertinggi = (mhs + 1)->NiLai;
            namaTertinggi = (mhs + 1)->Nama;
            nimTertinggi = (mhs + 1)->NIM;
        }
    }

    cout << "=====================================" << endl;

    cout;
}