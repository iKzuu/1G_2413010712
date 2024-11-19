#include <iostream>

using namespace std;

int main(){
	int barang = 5000, jml_brg, harga_awal, diskon, harga_diskon;
	
	cout << "Masukkan jumlah barang : ";
	cin >> jml_brg;
	
	harga_awal = barang * jml_brg;
	
	if(jml_brg > 50) {
		diskon = harga_awal * 0.25;
		harga_diskon = harga_awal - diskon;
	} else if(jml_brg >= 20 && jml_brg <= 50) {
		diskon = harga_awal * 0.15;
		harga_diskon = harga_awal - diskon;
	} else if(jml_brg >= 10 && jml_brg <= 19) {
		diskon = harga_awal * 0.1;
		harga_diskon = harga_awal - diskon;
	} else {
		harga_diskon = harga_awal;
	}
	
	cout << "\n========================" << endl;
	
	cout << "Harga per barang : Rp. " << barang << endl;
	cout << "Jumlah barang : " << jml_brg << endl;
	cout << "Harga awal : Rp. " << harga_awal << endl;
	cout << "Diskon : Rp. " << diskon << endl;
	cout << "Total : Rp. " << harga_diskon;
	
	return 0;
}
