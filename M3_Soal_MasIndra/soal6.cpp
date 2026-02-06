#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

struct dataMahasiswa
{
    string nama;
    float umur;
};

int main()
{
    dataMahasiswa *mhs = new dataMahasiswa;

    cout << "=== Masukan data mahasiswa ===" << endl;
    cout << "Nama: ";
    getline(cin, mhs->nama);
    cout << "umur: ";
    cin >> mhs->umur;

    mhs->umur += 1;

    cout << "\nUmur Setelah diubah: " << mhs->umur << endl;
}
