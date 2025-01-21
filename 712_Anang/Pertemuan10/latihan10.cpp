/*
Nama program : Latihan10.cpp
Dibuat tanggal : 20 Januari 2025
Fungsi Program : fungsi
Dibuat oleh : Anang Setiaji
*/

#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

struct skaryawan {
	int nik;
	char nama[20];
	int anak;
	int pendidikan;
};

int a;
int gapok, tanak;
char ket[10];
skaryawan karyawan[5];

void fgapok() {
	if (karyawan[a].pendidikan == 1) {
		gapok = 10000;
		strcpy(ket, "SD");
	}
	else if (karyawan[a].pendidikan == 2) {
		gapok = 20000;
		strcpy(ket, "SMP");
	}
	else {
		gapok = 30000;
		strcpy(ket, "SMA");
	}
}

int ftanak(int jmlanak) {
	if (jmlanak > 2) {
		tanak = 3 * 500;
	}
	else {
		tanak = jmlanak * 500;
	}
	return tanak;
}

int ftotal(int gapok, int tanak) {
	int jmltotal;
	jmltotal = gapok + tanak;
	return jmltotal;
}

void cetakdata() {
	int a, total = 0;
	
	system("cls");
	
	cout << "Laporan Pembayaran Air" << endl;
	cout << "==============================================" << endl;
	cout << "No NIK Nama Anak Pendidikan GApok TAnak Total" << endl;
	cout << "==============================================" << endl;
	a=0;
	
	while(a<2) {
		fgapok();
		tanak = ftanak(karyawan[a].anak);
		total = ftotal(gapok, tanak);
		cout << (a+1)
		<< karyawan[a].nik << "\t"
		<< karyawan[a].nama << "\t"
		<< karyawan[a].anak << "\t"
		<< ket << "\t"
		<< gapok << "\t"
		<< total << endl;
		
		a++;
	}
	
	cout << "=============================================" << endl;
	getch();
}

int main() {
	int totgaji;
	
	while(a<2) {
		cout << " NIK 	: ";
		cin >> karyawan[a].nik;
		cout << " Nama 	: ";
		cin >> karyawan[a].nama;
		cout << " Anak 	: ";
		cin >> karyawan[a].anak;
		cout << " Pendidikan 	: ";
		cin >> karyawan[a].pendidikan;
		
		fgapok();
		
		tanak = ftanak(karyawan[a].anak);
		totgaji = ftotal(gapok, tanak);
		cout << " Gaji Pokok 	: " << gapok << endl;
		cout << " Tunj. Anak 	: " << tanak << endl;
		cout << " Total Gaji 	: " << totgaji << endl;
		
		cout << "=============================================" << endl;
		
		getch();
		a++;
	}
	
	cetakdata();
}
