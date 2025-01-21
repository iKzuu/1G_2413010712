#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	struct smhs {
		char nim[5];
		char nama[15];
		float nilai;
	};
	
	smhs mahasiswa;
	
	system("cls");
	
	cout<<"masukkan NIM 	= ";
	cin>>mahasiswa.nim;
	cout<<"masukkan Nama 	= ";
	cin>>mahasiswa.nama;
	cout<<"masukkan Nilai 	= ";
	cin>>mahasiswa.nilai;
	
	system("cls");
	
	cout<<"NIM		= " << mahasiswa.nim << endl;
	cout<<"Nama		= " << mahasiswa.nama << endl;
	cout<<"Nilai		= " << mahasiswa.nilai << endl;
	
	getch();
}
