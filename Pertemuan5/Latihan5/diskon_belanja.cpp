#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string formattedCurrentcy(double val) {
	stringstream ss;
	string formatted;
	
	ss << val;
	
	formatted = ss.str();
	
	int length = formatted.length();
	int dlen = 3;
	
	while (length > dlen) {
		formatted.insert(length - dlen, 1, '.');
		formatted.insert(length + 1, 1, ',');
		formatted.insert(length + 2, 2, '0');
		dlen += 4;
		length ++;
	}
	
	return formatted;
}

int main () {
	
	// vector merupakan array dinamis, atau bisa berubah-ubah selama program berjalan
	// vector berguna sebagai wadah yang menyimpan elemen-elemen dengan tipe data yang sama
	
	vector<string> barang(5); // vector barang menyimpan daftar nama barang
	barang[0] = "Soda";
	barang[1] = "Snack";
	barang[2] = "Kopi";
	barang[3] = "Coklat";
	barang[4] = "Matcha";

	vector<int> harga(5); // vector harga menyimoan daftar harga barang
	harga[0] = 15000;
	harga[1] = 13000;
	harga[2] = 10000;
	harga[3] = 20000;
	harga[4] = 30000;
	
	vector<int> jumlah_barang(5, 0); // vector jumlah_barang menyimpan jumlah barang yang dipilih untuk setiap jenis barang
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
	
	cout << "Total belanjaan anda : Rp." << formattedCurrentcy(totalPembelian) << endl;
	
	cout << "========================================================================" << endl;
	
	// melakukan pengecekan totalPembelian untuk mendapat diskon sesaui total harga pembelian
	if (totalPembelian >= 100000) {
		harga_dibayar = totalPembelian * (1 - 20.0 / 100);
		cout << "Anda mendapat diskon 20%" << endl;
	} else if (totalPembelian >= 50000) {
		harga_dibayar = totalPembelian * (1 - 15.0 / 100);
		cout << "Anda mendapat diskon 15%" << endl;
	} else if (totalPembelian >= 20000){
		harga_dibayar = totalPembelian * (1 - 10.0 / 100);
		cout << "Anda mendapat diskon 10%" << endl;
	} else {
		harga_dibayar = totalPembelian;
		cout << "Anda tidak mendapat diskon :( " << endl;
	}
	
	cout << "========================================================================" << endl;
	
	cout << "Total harga barang yang harus dibayar : Rp." << formattedCurrentcy(harga_dibayar) << endl;
	
	cout << "========================================================================" << endl;
	
	getch();
	
	return 0;
	
}
