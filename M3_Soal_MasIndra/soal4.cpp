#include <iostream>
using namespace std;

struct alamat
{
    string kota;
    string kodepos;
};

struct dataMahasiswa
{
    string nama;
    alamat *mahasiwa = new alamat;
};

int main()
{

    dataMahasiswa *mhs = new dataMahasiswa;
    cout << "=== Masukan data mahasiswa ===" << endl;
    cout << "Nama: ";
    getline(cin, mhs->nama);
    cout << "Alamat: ";
    getline(cin, mhs->mahasiwa->kota);
    cout << "Kode Pos: ";
    cin >> mhs->mahasiwa->kodepos;

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama: " << mhs->nama << endl;
    cout << "Alamat: " << mhs->mahasiwa->kota << endl;
    cout << "Kode Pos: " << mhs->mahasiwa->kodepos << endl;

    delete mhs->mahasiwa;
    delete mhs;
}