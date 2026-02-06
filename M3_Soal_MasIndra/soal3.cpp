#include <iostream>
using namespace std;

struct dataMahasiswa
{
    string nama;
    float ipk;
};

int main()
{
    dataMahasiswa *mhs = new dataMahasiswa;

    cout << "=== Masukan data mahasiswa ===" << endl;
    cout << "Nama: ";
    getline(cin, mhs->nama);
    do
    {
        cout << "IPK: ";
        cin >> mhs->ipk;

        if (mhs->ipk > 4)
        {
            cout << "MAximal IPK Mahasiswa adalah 4" << endl;
        }

    } while (mhs->ipk > 4);

    mhs->ipk += 0.1;

    if (mhs->ipk > 4)
    {
        mhs->ipk = 4;
    }

    cout << "\nIPK Setelah update: " << mhs->ipk << endl;
}
