#include <iostream>
using namespace std;

struct dataMahasiswa
{
    string nama;
    float ipk;
};

int main()
{
    int jumlahMahasiswa;
    float rataRata, totalIPK;

    cout << "masukan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    dataMahasiswa *mhs = new dataMahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cin.ignore();
        cout << "\n === Mahasiswa ke-" << i + 1 << " ===" << endl;
        cout << "Nama: ";
        getline(cin, (mhs + i)->nama);
        do
        {
            cout << "ipk: ";
            cin >> (mhs + i)->ipk;
            if ((mhs + i)->ipk > 4)
            {
                cout << "Maximal IPK Mahasiswa adalah 4" << endl;
            }
        } while ((mhs + i)->ipk > 4);
    }

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        totalIPK += (mhs + i)->ipk;
    }

    rataRata = totalIPK / jumlahMahasiswa;

    cout << "\n========================" << endl;
    cout << "Rata-rata IPK: " << rataRata << endl;
    cout << "========================" << endl;

    delete[] mhs;
}