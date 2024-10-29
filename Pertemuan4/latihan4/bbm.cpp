#include <iostream>
#include <conio.h>

using namespace std;

main () {
	int sewa;
	int jarak, hargabbm;
	int tempuhlt, total;
	float butuhbbm;
	
	cout << "Perhitungan Biaya Perjalanan \n";
	cout << "====================================== \n";
	cout << "1. Harga sewa per hari	  : "; cin >> sewa;
	cout << "2. Jarak Tujuan 		  : "; cin >> jarak;
	cout << "3. Harga bbm perliter	  : "; cin >> hargabbm;
	cout << "4. Konsumsi BBM perliter : "; cin >> tempuhlt;
	
	butuhbbm = jarak / tempuhlt;
	total = sewa + int (butuhbbm) * hargabbm;
	cout << "	BBM dibutuhkan 		  : " << butuhbbm << endl;
	cout << "====================================== \n";
	cout << "Perkiraan Total Biaya 	  : " << total << endl;
	
	getch();
}
