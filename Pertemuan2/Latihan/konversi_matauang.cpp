#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float idr, kurs = 15512.20;
	float dollar;
	char ulangi;
	
	// do while untuk melakukan perulangan ketika ingin melakukan konversi lagi tanpa run ulang program
	do {
		cout << "Masukkan nominal Rupiah (IDR) : ";
		cin >> idr;
		
		// konversi
		dollar = idr / kurs;
		
		cout << fixed << setprecision(2); // output dengan 2 angka desimal
		cout << "===============================" << endl;
		cout << "Rp." << idr << " = " << "$" << dollar << endl;
		cout << "===============================" << endl;
		
		cout << "ingin melakukan konversi lagi? (y/n): ";
		cin >> ulangi;
	} while (ulangi == 'y' || ulangi == 'Y'); // ulang ketika y || Y
	
	cout << "Terima kasih telah menggunakan program ini!" << endl;
	
	return 0;
}
