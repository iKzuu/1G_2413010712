#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	double tot_beli, potongan=0, jum_bayar=0;
	system("cls");
	
	cout << "Total Pembelian Rp. ";
	cin >> tot_beli;
	if (tot_beli >= 50000)
		potongan = 0.2 * tot_beli;
	else
		potongan = 0.05 * tot_beli;
	cout << " Potongan Rp. " << potongan << endl;
	jum_bayar = tot_beli - potongan;
	cout << "Jumlah harus bayar Rp. " << jum_bayar;
	getch();
}
