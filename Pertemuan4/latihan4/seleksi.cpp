#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int nilai1, nilai2, mods;
	
	cout << "Masukkan Nilai Pertama : ";
	cin >> nilai1;
	
	cout << "Masukkan Nilai Kedua	: ";
	cin >> nilai2;
	
	mods = (nilai1 + nilai2) / 2;
	
	cout << "Nilai rata-rata anda : " << mods << endl;
	
	if((nilai1 == 85 && nilai2 == 85) || 
		((nilai1 == 80 || nilai2 == 80) && mods == 90))
	{
		cout << "Selamat, Anda Lolos" << endl;
	} else {
		cout << "Maaf, Anda Gagal" << endl;
	}
	
	getch();
	
}
