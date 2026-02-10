#include <iostream>
using namespace std;

struct dataServis
{
    string platNomor;
    string jenisServis;
    int estimasi;
    dataServis *next;
};

dataServis *buatNode(string plat, string jenis, int est)
{
    dataServis *baru = new dataServis;
    baru->platNomor = plat;
    baru->jenisServis = jenis;
    baru->estimasi = est;
    baru->next = NULL;
    return baru;
}

void selesaiService(dataServis *a, dataServis *b)
{
    dataServis selesai = *a;
    *a = *b;
}

void nextAntrian(dataServis *a, int batasService)
{
    for (int i = 0; i < batasService; i++)
    {
        selesaiService((a + i), (a + i + 1));
    }
}

void serviceDarurat(dataServis **motor, string plat, string jenis, int est)
{
    dataServis *baru = buatNode(plat, jenis, est);
    baru->next = *motor;
    *motor = baru;
}
