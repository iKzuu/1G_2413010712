#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int alas, tinggi;
	float luas;
	char loop; // variable untuk menjalankan ulang program pada pilihan output (y/n)
	
	// disini saya menggunakan 'do while' untuk melakukan perulangan program :)
	do {
		cout << "==============================\n";
		cout << "Menghitung Luas Segitiga C++";
		cout << "\n==============================" << endl;
		
		// input untuk Alas Segitiga
		cout << "Masukkan Alas Segitiga : ";
		cin >> alas;
	
		// input untuk Tinggi Segitiga
		cout << "\nMasukkan Tinggi Segitiga : ";
		cin >> tinggi;
	
		luas = 0.5 * alas * tinggi; // hitung luas segitiga
	
		cout << "\nHasil Luas Segitiga = " << luas << "\n"; // menampilkan output hasil perhitungan luas segitiga
		cout << "\n==============================" << endl;
		
		cout << "Ingin melakukan penghitungan lagi? (y/n)"; 
		cin >> loop; // nilai input dimasukkan pada variable loop
		cout << endl;
		
	} while ( loop != 'n'); // menjalankan ulang program ketika nilai yang dimasukkan pada loop adalah 'y' atau bukan 'n'
	
	cout << "Terima kasihh..." << endl; // menampilkan output ketika nilai yang dimasukkan pada loop adalah 'n'
	
	getch();
	
	return 0;
}
