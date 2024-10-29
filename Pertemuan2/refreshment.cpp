/*
Nama program:		: Latihan01.cpp
Dibuat tanggal		: 21 Oktober 2024
Fungsi Program		: mencetak keterangan
Dibuat oleh			: nama mahasiswa

Ubah nama mahasiswa diatas jadi nama kalian sendiri!
Rubah juga data di bawah jadi data mahasiswa masing - masing!
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h> // untuk gotoxy agar berjalan

using namespace std;

// Fungsi untuk memindahkan kursor ke posisi tertentu
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// membuat line/garis di sekitar output dengan karakter ASCII
void drawLine(int width, int height) {
	// Garis Atas
	gotoxy(0, 0);
	cout << char(201); // untuk sudut kiri atas
	for (int i = 0; i < width -2; ++i) cout << char(205); // Garis horizontal atas
	cout << char(187); // untuk sudut kanan atas
	
	// Garis Samping
	for (int i = 1; i < height - 1; ++i) {
		gotoxy(0, i);
		cout << char(186); // Garis tegak bagian kiri
		gotoxy(width - 1, i);
		cout << char(186); // garis tegak bagian kanan
	}
	
	// Garis Bawah
	gotoxy(0, height - 1);
	cout << char(200); // untuk sudut kiri bawah
	for (int i = 0; i < width - 2; ++i) cout << char(205); // Garis horizontal bawah
	cout << char(188); // untuk sudut kanan bawah
}

int main(){
	//Menampilkan data............
	
	system("cls");
	
	// mengatur ukuran kotak
	int width = 35, height = 10;
	
	// membuat kotak di sekitar output
	drawLine(width, height);

	gotoxy(2, 1);
    cout << "Data Mahasiswa" << endl;

	gotoxy(2, 3);
	cout << "1. NIM    : 2413010712";
	gotoxy(2, 4);
	cout << "2. Nama   : Anang Setiaji";
	gotoxy(2, 5);
	cout << "3. Alamat : Kauman RT.03/RW.07";
	gotoxy(2, 6);
	cout << "4. Kel.   : Ngasem";
	gotoxy(2, 7);
	cout << "5. Kec.   : Colomadu";
	gotoxy(2, 8);
	cout << "6. Kota.  : Karanganyar";
	
	
//	system("clear");
//	cout << "*******************************" << endl;
//    cout << "*        Data Mahasiswa       *" << endl;
//    cout << "*******************************" << endl;
//	cout << "1. NIM		: 0185442534364" <<endl;
//	cout << "2. Nama\t	: Anang Setiaji" <<endl;
//	cout << "3. Alamat	: Kauman RT.03/RW.07\n";
//	cout << "4. Kel.\t	: Ngasem\n";
//	cout << "4. Kec.\t	: Colomadu\n";
//	cout << "4. Kota.	: Karanganyar\n"; //cetak kota
//	
//	cout << "*******************************" << endl;
	
	getch();
	return 0;
}
