/*
Nama Program		: Latihan02.cpp
Dibuat tanggal		: 21 Oktober 2024
Fungsi Program		: menggunakan variable
Dibuat oleh			: nama mahasiswa

Ubah nama mahasiswa diatas jadi nama kalian sendiri!
Rubah juga data di bawah jadi data mahasiswa masing - masing!
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>

using namespace std;

char nama[30];
char alamat[30];
int nilai1;
int nilai2;
float rata;

int main() {
	system("cls");
	strcpy(nama, "Anang Setiaji");
	strcpy(alamat, "Kauman");
	nilai1 = 85;
	nilai2 = 90;
	
//	cetak data
cout << "Data Mahasiswa" << endl;
cout << "=============================" << endl;
cout << "1. Nama\t\t: " << nama << endl;
cout << "2. Alamat\t: " << alamat << endl;
cout << "3. Nilai1\t: " << nilai1 << endl;
cout << "4. Nilai2\t: " << nilai2 << endl;
rata = (nilai1 + nilai2)/2;
cout << "5. Rata-rata\t: " << rata << endl;
cout << "=============================" << endl;

getch();
return 0;
}
