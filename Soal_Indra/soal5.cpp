#include <iostream>
using namespace std;

struct dataMahasiswa
{
    string nama;
    int umur;
    float ipk;
};

int main()
{
    dataMahasiswa *mhs = new dataMahasiswa;
    cout << "=== Isi data mahasiswa berikut ===" << endl;
    cout << "Nama: ";
    getline(cin, mhs->nama);
    cout << "Umur: ";
    cin >> mhs->umur;
    do
    {
        cout << "IPK: ";
        cin >> mhs->ipk;

        if (mhs->ipk > 4)
        {
            cout << "Maximal IPK Mahasiswa adalah 4" << endl;
        }

    } while (mhs->ipk > 4);

    cout << "=== Berikut nama mahasiswa menggunakan pointer ===" << endl;
    cout << "Nama: " << mhs->nama << endl;
    cout << "Umur: " << mhs->umur << endl;
    cout << "IPK: " << mhs->ipk << endl;

    delete mhs;
}