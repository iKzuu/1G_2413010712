#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	char kode;
	system("cls");
	
	cout << "Masukkan Kode Barang [A..C] : ";
	cin >> kode;
	
	switch(kode) {
		case 'A' :
			cout << "Alat Olah Raga";
			break;
		case 'B' :
			cout << "Alat Elektronik";
			break;
		case 'C' :
			cout << "Alat Masak";
			break;
		default  :
			cout << "Salah Memasukkan kode";
			break;
	}
	
	getch();
}
