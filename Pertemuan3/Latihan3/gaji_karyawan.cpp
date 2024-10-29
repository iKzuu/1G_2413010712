#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip> // untuk setprecision();

using namespace std;

main() {
	
	int nik, gaji_pokok, tk, tj, tt;
	string nama, pendidikan, jenis_kelamin, agama, tgl_lahir;
	float total_gaji;
	
	system("cls");
	
//	Membuat inputan
    cout << "NIK : ";
    cin >> nik;
    cin.ignore();
    
    cout << "Nama Karyawan : ";
    cin >> ws; // Membersihkan karakter newline jika ada
    getline(cin, nama);
    
    cout << "Pendidikan : ";
    getline(cin, pendidikan);
    
    cout << "Agama : ";
    getline(cin, agama);
    
    cout << "Jenis Kelamin : ";
    getline(cin, jenis_kelamin);
    
    cout << "Tanggal Lahir : ";
    getline(cin, tgl_lahir);
    
    cout << "Gaji Pokok : ";
    cin >> gaji_pokok;
    
    cout << "Tunjangan Keluarga : ";
    cin >> tk;
    
    cout << "Tunjangan Jabatan : ";
    cin >> tj;
    
    cout << "Tunjangan Transport : ";
    cin >> tt;
    
    // Menghitung total gaji karyawan
    total_gaji = gaji_pokok + tk + tj + tt;
    
    // Output hasil
    cout << "\n============================================" << endl;
    cout << "1. NIK 			: " << nik << endl;
    cout << "2. Nama Karyawan 	: " << nama << endl;
    cout << "3. Pendidikan 		: " << pendidikan << endl;
    cout << "4. Agama 		: " << agama << endl;
    cout << "5. Jenis Kelamin 	: " << jenis_kelamin << endl;
    cout << "6. Tanggal Lahir 	: " << tgl_lahir << endl;
    cout << "7. Total Gaji 		: Rp." << fixed << setprecision(2) << total_gaji << endl;
    cout << "============================================" << endl;
    
    getch();
    
    return 0;

}
