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
        do
        {
            cout << "NIlai: ";
            cin >> (mhs + i)->NiLai;
            if ((mhs + i)->NiLai > 100)
            {
                cout << "NIlai mahasiswa tidak boleh melebihi 100!" << endl;
            }
        } while ((mhs + i)->NiLai > 100);
    }

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "=====================================" << endl;
        cout << "NIM\t: " << (mhs + i)->NIM << endl;
        cout << "Nama\t: " << (mhs + i)->Nama << endl;
        cout << "NIlai\t: " << (mhs + i)->NiLai << endl;
        totalNilai += (mhs + i)->NiLai;

        if ((mhs + i)->NiLai > tertinggi)
        {
            tertinggi = (mhs + i)->NiLai;
            namaTertinggi = (mhs + i)->Nama;
            nimTertinggi = (mhs + i)->NIM;
        }
    }
    cout << "=====================================\n"
         << endl;

    rataRata = totalNilai / jumlahMahasiswa;

    cout << "=====================================" << endl;
    cout << "NIlai rata-rata: " << rataRata << endl;
    cout << "=====================================" << endl;

    cout << "Mahasiswa denga nilai tertinggi: " << endl;
    cout << "Nama\t: " << namaTertinggi << endl;
    cout << "NIlai\t: " << tertinggi << endl;

    delete[] mhs;
}