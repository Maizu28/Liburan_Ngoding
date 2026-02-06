#include <iostream>
using namespace std;

struct dataMahasiswa
{
    string nama;
    float ipk;
};

void tukar(dataMahasiswa *a, dataMahasiswa *b)
{
    dataMahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

void sortir(dataMahasiswa *mhs, int jumlahMahasiswa)
{
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        for (int j = 0; j < jumlahMahasiswa; j++)
        {
            if ((mhs + j)->ipk < (mhs + j + 1)->ipk)
            {
                tukar((mhs + j), (mhs + j + 1));
            }
        }
    }
}

int main()
{
    int jumlahMahasiswa;
    cout << "Masukan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    dataMahasiswa *mhs = new dataMahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cin.ignore();
        cout << "=== Mahasiswa ke-" << i + 1 << " ===" << endl;
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

    sortir(mhs, jumlahMahasiswa);

    cout << "\n=== Hasil Sortir ===" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << (mhs + i)->nama << " " << (mhs + i)->ipk << endl;
    }

    delete[] mhs;
}