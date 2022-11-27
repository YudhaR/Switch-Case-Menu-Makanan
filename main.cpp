#include <iostream>

/*
    Program Menu Makanan
    Ket : Program menentukan menu makanan
    By  : Yudha Rizqia Grafer
    Tgl : 14 Oktober 2022

*/

using namespace std;

int main()
{
    //Kamus
    int Kode_makanan;

    //Algoritma
    cout << "Input Menu : ";
    cin >> Kode_makanan;
    switch (Kode_makanan)
    {
        case 1 : cout << "Anda Pesan Nasi Kerikil"; break;
        case 2 : cout << "Anda Pesan Rica-Rica Bekicot"; break;
        case 3 : cout << "Anda Pesan Pepes Brotowali"; break;
        case 4 : cout << "Anda Pesan Kepiting Presto"; break;
        default : cout << "Kode Salah"; break;
    }
    return 0;
}
