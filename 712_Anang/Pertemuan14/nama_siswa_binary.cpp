#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int binarysearch(string [], int, string);

int main() {
	const int jmldata = 5;
	string data[jmldata] = {"Andi", "Budi", "Charlie", "Dina", "Eva"};
	string cari;
	int lokasi;
	
	cout << "Masukkan nama siswa yang dicari : ";
	cin >> cari;
	lokasi = binarysearch(data, jmldata, cari);
	if(lokasi > -1)
		cout << "Nama siswa yang dicari ditemukan pada lokasi : "
		<< lokasi << "\n";
	else
		cout << "Nama siswa tidak ditemukan!\n";
	
	getch();
}

int binarysearch(string list[], int jumlah, string vcari) {
	int kiri, kanan, tengah;
	
	kiri = 0;
	kanan = jumlah - 1;
	
	while(kiri <= kanan) {
		tengah = (int) ((kiri + kanan) / 2);
		if(vcari == list[tengah])
			return tengah;
		else if(vcari > list[tengah])
			kiri = tengah + 1;
		else
			kanan = tengah - 1;
	}
	
	return -1;
}
