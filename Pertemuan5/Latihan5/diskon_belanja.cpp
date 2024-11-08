#include <iostream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

int main () {
	vector<string> barang(5);
	barang[0] = "Soda";
	barang[1] = "Snack";
	barang[2] = "Kopi";
	barang[3] = "Coklat";
	barang[4] = "Matcha";

	vector<int> harga(5);
	harga[0] = 15000;
	harga[1] = 13000;
	harga[2] = 10000;
	harga[3] = 20000;
	harga[4] = 30000;
	
	vector<int> jumlah_barang(5, 0);
	int totalPembelian = 0;
	double harga_dibayar;
	
	cout << "========================================================================" << endl;
	
	cout << "Selamat berbelanja di C++mart! Pilih barang-barang yang ingin anda beli." << endl;
	
	cout << "========================================================================" << endl;
	
	// inputan memilih barang
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ". "<< barang[i] << " -Rp." << harga[i] << endl;
		cout << "Masukkan jumlah barang : ";
		cin >> jumlah_barang[i];
	}
	
	// menghitung total belanjaan
	for (int i = 0; i < 5; i++) {
		totalPembelian += jumlah_barang[i] * harga[i];
	}
	
	cout << "========================================================================" << endl;
	
	cout << "Total belanjaan anda : Rp." << totalPembelian << endl;
	
	cout << "========================================================================" << endl;
	
	// melakukan pengecekan totalPembelian untuk mendapat diskon sesaui total harga pembelian
	if (totalPembelian >= 100000) {
		harga_dibayar = totalPembelian * (1 - 20.0 / 100);
		cout << "Anda mendapat diskon 20%" << endl;
	} else if (totalPembelian >= 50000) {
		harga_dibayar = totalPembelian * (1 - 15.0 / 100);
		cout << "Anda mendapat diskon 15%" << endl;
	} else {
		harga_dibayar = totalPembelian * (1 - 10.0 / 100);
		cout << "Anda mendapat diskon 10%" << endl;
	}
	
	cout << "========================================================================" << endl;
	
	cout << "Total harga barang yang harus dibayar : Rp." << harga_dibayar << endl;
	
	cout << "========================================================================" << endl;
	
	getch();
	
	return 0;
	
}
