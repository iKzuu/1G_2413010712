#include <iostream>

using namespace std;

int main(){
	string nama, nim, kelas, alamat;
	
	cout << "Masukkan Nama : ";
	getline(cin, nama);
	
	cout << "Masukkan NIM : ";
	getline(cin, nim);
	
	cout << "Masukkan Kelas : ";
	getline(cin, kelas);
	
	cout << "Masukkan Alamat : ";
	getline(cin, alamat);
	
	cout << "\n======================" << endl;
	
	cout << "Nama 	: " << nama << endl;
	cout << "NIM	: " << nim << endl;
	cout << "Kelas 	: " << kelas << endl;
	cout << "Alamat	: " << alamat << endl;
	
	return 0;
}
