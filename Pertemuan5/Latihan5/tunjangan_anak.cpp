#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int juml_anak, ta = 0;
	
	// penggunaan const int memungkinkan nilai dalam variabel tidak bisa berubah
	// atau secara tidak sengaja diubah oleh kode lain.
	const int MAX_ANAK = 3;
	const int TUNJANGAN_ANAK = 50000;
	
	// inputan jumlah anak
	cout << "Masukkan jumlah anak : ";
	cin >> juml_anak;
	
	if(juml_anak <= MAX_ANAK) { // jika jumlah anak kurang dari sama dengan max anak
		ta = juml_anak * TUNJANGAN_ANAK; // jumlah anak di kalikan tunjangan
		cout << "Total tunjangan anak: Rp. " << ta << endl;
	} else {
		ta = MAX_ANAK * TUNJANGAN_ANAK;
		cout << "Maximal tunjangan hanya untuk 3 anak." << endl;
		cout << "Total tunjangan anak : Rp. " << ta << endl;
	}
	
	getch();
	
	return 0;
}
