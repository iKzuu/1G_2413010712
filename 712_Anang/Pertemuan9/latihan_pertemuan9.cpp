#include <iostream>
#include <iomanip>

using namespace std;

void cetakJudul() {
    cout << "===============================================" << endl;
    cout << "         Daftar Harga Jual BBM (1-10 Liter)    " << endl;
    cout << "===============================================" << endl;
    cout << setw(10) << "Liter"
         << setw(15) << "Premium"
         << setw(15) << "Pertamax 92"
         << setw(15) << "PrimaDex"
         << setw(15) << "Bio Solar" << endl;
    cout << "-----------------------------------------------" << endl;
}

int main() {
    const float hargaPremium = 10.000;
    const float hargaPertamax92 = 13.000;
    const float hargaPrimaDex = 15.000;
    const float hargaBioSolar = 7.500;

    cetakJudul();

    for (int liter = 1; liter <= 10; liter++) {
        cout << setw(10) << liter
             << setw(15) << fixed << setprecision(3) << liter * hargaPremium
             << setw(15) << liter * hargaPertamax92
             << setw(15) << liter * hargaPrimaDex
             << setw(15) << liter * hargaBioSolar << endl;
    }

    return 0;
}
